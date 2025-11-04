//Largest Among 3 Numbers
//Program Description
//Write a Program to find the largest number among three numbers.
//Input Format
//A single line contains three numbers Num1,Num2, Num3.
//Output Format
//Display output according to the description.
//Constraints
//-100000<=num1,num2,num3<=100000
//Input-1
//456 678 23
//Output-1
//678
//-------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%d", a);
    else if (b >= a && b >= c)
        printf("%d", b);
    else
        printf("%d", c);

    return 0;
}
