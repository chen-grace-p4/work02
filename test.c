#include <stdio.h>
int main(){
	int x = 200 - 50;
	unsigned int y = 65500 + 100;
	// y = -10;
	long l = 2.222;

	printf("This is an integer: %d and %d \nThis is a long: %ld\n", x, y, l);
	printf("This is a float: %f\nThis is a double: %lf\n", 27.54, 1.3);
	printf("This is a character: %c\nThis is a string: %s\n", 'h', "hello");

	printf("Out of bounds char?: %c \n", 'ppx'); //prints out last letter
	printf("Different type: %d \n", 2.5); //prints out a random integer
	printf("Different type: %c \n", "hello"); //prints out k

	return 0;
}
