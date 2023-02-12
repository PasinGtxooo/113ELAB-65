// Draw triangle 4 #
// Your job is to write a program to draw a triangle.

// The program receives a number n as a height of triangle.

// Then the program print a triangle with the height = n and base = (2n-1) using *, with the base on the left of the screen, as in the examples.

// Sample output 1

// 2
// *
// **
// *
// Sample output 2

// 9
// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *
#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i =x-1;i>0;i--){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}
