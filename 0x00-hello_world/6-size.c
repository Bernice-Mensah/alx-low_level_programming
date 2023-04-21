1 #include <stdio.h>
2 /**
3 * main - A program that prints the size of various types computer types
4 * Return: Always 0 (Success)
5 */
6 int main(void)
7 {
8	printf("Size of a char: %lu byte(s)\n", sizeof(char));
9      printf("Size of an int: %lu byte(s)\n", sizeof(int));
10     printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
11	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
12     printf("Size of a float: %lu byte(s)\n", sizeof(float));
13     return (0);
14 }
