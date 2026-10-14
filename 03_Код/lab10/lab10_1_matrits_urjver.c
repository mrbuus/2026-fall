/**
 * Лаборатори №10 (10-1 даалгавар)
 * Хоёр 3x3 матрицыг гараас оруулж, тэдгээрийн үржвэрийг заагч ашиглан
 * олж хэвлэх программ. *(*(mat + row) + col) нь mat[row][col]-тай адил.
 */
#include <stdio.h>

#define ROW 3
#define COL 3

/* функцуудын загвар зарлах */
void matrixInput(int mat[][COL]);
void matrixPrint(int mat[][COL]);
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL]);

int main()
{
    int mat1[ROW][COL];
    int mat2[ROW][COL];
    int product[ROW][COL];

    /*
     * хоёр матрицын элементүүдийг гараас оруулна
     */
    printf("Enter elements in first matrix of size %dx%d\n", ROW, COL);
    matrixInput(mat1);

    printf("Enter elements in second matrix of size %dx%d\n", ROW, COL);
    matrixInput(mat2);

    // хоёр матрицыг үржүүлж үр дүнг product-д хадгална
    matrixMultiply(mat1, mat2, product);

    // үржвэр матрицыг хэвлэнэ
    printf("Product of both matrices is : \n");
    matrixPrint(product);

    return 0;
}

/**
 * Матрицын элементүүдийг заагч ашиглан гараас унших функц
 */
void matrixInput(int mat[][COL])
{
    int row, col;

    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            scanf("%d", (*(mat + row) + col));
        }
    }
}

/**
 * Матрицыг мөр мөрөөр нь хэвлэх функц
 */
void matrixPrint(int mat[][COL])
{
    int row, col;

    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            printf("%d ", *(*(mat + row) + col));
        }
        printf("\n");
    }
}

/*
 * res = mat1 * mat2 матрицын үржвэрийг олох функц
 */
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL])
{
    int row, col, i;
    int sum;

    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            sum = 0;
            /*
             * mat1-ийн row-р мөрийг mat2-ийн col-р баганаар скаляр үржүүлнэ
             */
            for (i = 0; i < COL; i++)
            {
                sum += (*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col));
            }
            /*
             * олсон нийлбэрийг үр дүнгийн матрицын [row][col] элементэд хадгална
             */
            *(*(res + row) + col) = sum;
        }
    }
}
