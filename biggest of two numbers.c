//Biggest of Two Numbers
//Program Description
//Write a program to find the biggest among two numbers.
//Input Format
//The first line of input contains the First number.
//The second line of input contains the Second number.
//Output Format
//Print the Output according to the description.
//Constraints
//-10000<= X,Y <=10000
//Input-1
//45
//78
//Output-1
//78
//Input-2
//12
//25
//Output-2
//25
//---------------------------------------------------------------------------
#include<stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);   // Take two integer inputs

    if (a > b)
        printf("%d", a);      // Print 'a' if it’s greater
    else
        printf("%d", b);      // Otherwise, print 'b'

    return 0;
}
