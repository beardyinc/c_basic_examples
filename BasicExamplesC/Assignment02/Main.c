#include "Assignment_2c.h"

void main() {
	char input[] = "blubb";
	char* reversed = reverseString(input);
	printf("input: %s\nreversed: %s\n", input, reversed);
	free(reversed);

	char unsorted[] = "this is a test";
	char* sorted = NULL;
	sorted = sortAsc(unsorted);
	printf("unsorted: %s\n", unsorted);
	printf("sorted: %s\n", sorted);
	free(sorted);

	char text[] = "the quick brown fox jumps over the lazy dog";
	printf("count occurrence of \"%c\" in \"%s\": --> %d", 'o', text, countOccurrence(text, 'o'));
}