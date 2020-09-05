# include <stdio.h>
# include <stdlib.h>

// Garrett Matthews
//CS 3060 X01 Fall 2020
// Assignment 1
/* Promis of Originality
 I promise that this source code file has, in it's entirety, been
written by myself and by no other person or persons. If at any time an
exact copy of this source code is found to be used by another person in
this term, I understand that both myself and the student that submitted
the copy will receive a zero on this assignment.
*/

int main (int argc, char *argv[])
{
	printf("%s\n", "Assignment 1 by Garrett Matthews");
	int x = 0;
	while(argc--)
	{
		printf("Argument #%d", x);
		printf("%s\n", argv[x]);
		x ++;
	}
	printf("Number of arguments printed:%d", x);
	printf("%s\n", "");
	exit(EXIT_SUCCESS);
}
