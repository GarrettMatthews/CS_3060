// Garrett Matthews
//CS 3060 X01 Fall 2020
// Assignment 2
/* Promis of Originality
 I promise that this source code file has, in it's entirety, been
written by myself and by no other person or persons. If at any time an
exact copy of this source code is found to be used by another person in
this term, I understand that both myself and the student that submitted
the copy will receive a zero on this assignment.
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argA[]){ 
	int pid;
	printf("PARENT started, now waiting for child\n");
	pid = fork();
	if (!pid){
		if (!argA){
			printf("CHILD started. No arguments provided. Terminating child\n");
		}
		else {
			printf("CHILD started. Argument provided. Calling execlp(), never to return (sniff)\n");
			execlp("./", argA[argc]);
		}
		exit(0);
	}
	printf("PARENT resumed. Child exit code of 0. Now terminating parent\n");
}
