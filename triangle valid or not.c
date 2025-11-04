//Input Format
//A single line contains three sides of a triangle a,b,c.
//Output Format
//Print the output according to the description.
//Constraints
//0<=a,b,c<=1000
//Input-1
//2 3 7
//Output-1
//Invalid triangle
//Input-2
//2 3 4
//Output-2
//Valid triangle
//----------------------------------------------------------------------------
#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Valid triangle");
    } else {
        printf("Invalid triangle");
    }
    return 0;
}
