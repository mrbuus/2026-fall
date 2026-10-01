#include <stdio.h>      // printf
#include <string.h>     // strlen, strncpy
#include <ctype.h>      // isalnum
#include <stdlib.h>     // malloc, calloc

/*
    A logical type
 */
typedef enum {
   false,
   true,
} bool;

/*
    A Struct for hold 2D-array with count items
 */
typedef struct _ListWithLength {
	char **list;
	size_t length;
} ListWithLength;


/*
    Parse a text and return pointer to a ListWithLength words and count it
 */
ListWithLength* getWords(char *text)
{

	// a variable for count words
	int count = 0;
// keep length of the text
	size_t text_len = strlen(text);
// a variable for lenght of word
	int len_word;	

	// a flag indicating the a beginning of a word
	bool new_word = false;

	// an index of a start found a word
	int index_start_word = 0;

	// 2D-array for found word
	// it will be same memory size as the original text
	char **words = malloc(text_len * sizeof(char));

	for (int i = 0; i <= text_len; ++i) {

		// if found ascii letter or digits and new no traced early
		// keep index of beginning a new word and change the flag
		if (isalnum(text[i]) != '\0') {
			if (new_word == false) {
				new_word = true;
				index_start_word = i;
			}
// if it is not ascii letter or digits and a word traced early
			// it means the word ended
		} else {
			if (new_word == true) {
				
				// calculate length of a word
				len_word = i - index_start_word;

				// allocate a memory for a new word in the array of words
				words[count] = malloc(len_word * sizeof(char) + 1);

				// copy the found word from the text by indexes
				strncpy(words[count], text + index_start_word, len_word);
				*(words[count] + len_word) = '\0';

				// change the flag
				new_word = false;

				// increase the counter of words
				count++;
			}
		}
	}


	// bind the found words and it count to a structure and return it

	ListWithLength *list_with_length = malloc(sizeof(ListWithLength));

	list_with_length->length = count;
	list_with_length->list = words;

	return list_with_length;
}
/*
    Print information of a ListWithLength
 */
void printListWithLength(ListWithLength *list_with_length)
{
	printf("Total items: %li\n", list_with_length->length);
	puts("----------------------");
	for (int i = 0; i < list_with_length->length; ++i) {
		printf("%2d. %s\n", i + 1, list_with_length->list[i]);
	}
}

int main(int argc, char const *argv[])
{

	char c_keywords[300] = "auto else long switch\
    break enum register typedef\
    case extern return union \
    char float short unsigned \
    const for signed void \
    continue goto sizeof volatile \
    default if static while \
    do int struct";

	ListWithLength *list_with_length = getWords(c_keywords);
	printListWithLength(list_with_length);
	return 0;
}

