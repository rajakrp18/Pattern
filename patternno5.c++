// for printing any pattern we basically require an array which consists of rows and columns
// the basics of writing any pattern progrom is that we have two for loops i.e., the outer and the inner for loop
// the outer loop is for no of rows
// generally in the outer for loop we go from 1 to n or the reverse of it i.e., n to 1 and we print it if we require a constant value throughout the row
// eg :1111, 2222, 3333 like this and so on
// and the inner for loop is for the no of columns, now lets gets started with our first pattern program which output looks like
// consider the following example
// sample output
// Enter the number of rows :5
// *****
// *****
// *****
// *****
// *****

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of rows :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
