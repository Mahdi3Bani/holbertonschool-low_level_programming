#include<stdio.h>

/**
 * main - Entry point
 *
 * checking the size of various var 
 *
 * Return: Always 0 (Success)
 */
int main() {

    printf("Size of char: %zu byte(s)\n", sizeof(charType));
    printf("Size of int: %zu byte(s)\n", sizeof(intType));
    printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
     printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));
    printf("Size of float: %zu byte(s)\n", sizeof(floatType));
    
    return 0;
}

