//Program Description
//Write a program that takes marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer Science as input and calculate percentage and grade according to given conditions:
//If percentage >= 90% : Print:Grade A
//If percentage >= 80% : Print:Grade B
//If percentage >= 70% : Print:Grade C
//If percentage >= 60% : Print:Grade D
//If percentage >= 40% : Print:Grade E
//If percentage < 40% : Print:Grade F
//Input Format
//A single line containing, five space-separated integers which denotes marks.
//Output Format
//Print the output according to the description.
//Constraints
//0<=each_subject_marks<=100
//Input-1
//56 67 89 78 89
//Output-1
//Grade C
//Input-2
//95 95 97 98 90
//Output-2
//Grade A
//------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int p, c, b, m, cs;
    scanf("%d %d %d %d %d", &p, &c, &b, &m, &cs);

    int total = p + c + b + m + cs;
    double per = (total / 500.0) * 100;

    if (per >= 90)
        printf("Grade A");
    else if (per >= 80)
        printf("Grade B");
    else if (per >= 70)
        printf("Grade C");
    else if (per >= 60)
        printf("Grade D");
    else if (per >= 40)
        printf("Grade E");
    else if (per < 40)
        printf("Grade F");
    else
        printf("Undefined");

    return 0;
}
