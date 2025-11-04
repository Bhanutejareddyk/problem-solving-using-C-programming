//Program Description
//Akshat has X rupees to spend in the current month. His daily expenditure is Y rupees, i.e., he spends Y rupees each day.
//Given that the current month has 30 days, find out if Akshat has enough money to meet his daily expenditures for this month.
//Input Format
//The first line of input contains X i.e. the amount which he spends in the current month.
//The second line of input contains Y i.e his daily expenditure.
//Output Format
//Print the output according to the description.
//Constraints
//0<=X,Y<=100000
//Input-1
//2900
//100
//Output-1
//NO
//Input-2
//1000
//10
//Output-2
//YES
//-----------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x >= y * 30) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
