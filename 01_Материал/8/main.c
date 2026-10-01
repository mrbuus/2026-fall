#include <stdio.h>
#include <stdlib.h>

float hypt(float xa, float ya, float xb, float yb);
float square(float a, float b, float c);

int main()
{
    float x1,y1,x2,y2,x3,y3; /* initial coordinates */
    float ab,bc,ac,a0,b0,c0;
    float s,s0;

    scanf("%f %f %f %f %f %f", &x1,&y1,&x2,&y2,&x3,&y3);
    printf("Triangle coordinates: A(%4.1f,%4.1f), B(%4.1f,%4.1f), C(%4.1f,%4.1f)\n",x1,y1,x2,y2,x3,y3);

    ab=hypt(x1,y1,x2,y2);
    bc=hypt(x2,y2,x3,y3);
    ac=hypt(x1,y1,x3,y3);
    s=square(ab,bc,ac);

    a0=hypt(x1,y1,0.0,0.0);
    b0=hypt(x2,y2,0.0,0.0);
    c0=hypt(x3,y3,0.0,0.0);
    s0=square(ab,a0,b0)+square(bc,b0,c0)+square(ac,a0,c0);

    printf("Square of original triangle: %6.3f\n",s);
    printf("Square of new triangle: %6.3f OR...\n",s0);

    if(s0<=s)
      printf("Point 0,0 inside of triangle\n");
    else
      printf("Point 0,0 outside of triangle\n");

    return 0;
}

float hypt(float xa, float ya, float xb, float yb)
{
   float dx,dy;

   dx=xb-xa;
   dy=yb-ya;
   return sqrt(dx*dx+dy*dy);
}

float square(float a, float b, float c)
{
   float p;

   p=(a+b+c)/2.0;
   return sqrt(p*(p-a)*(p-b)*(p-c));
}
