//Given basic salary of an employee as input and calculate its gross salary according to following.
//Basic Salary <=10000 ==> DA = 80% & HRA = 20%
//Basic Salary <=20000 ==> DA = 90% & HRA = 25%
//Basic Salary >20000 ==> DA = 95% & HRA = 30%
//Gross Salary = Basic Salary + DA + HRA
//Note: Display the gross salary in a single line with 2 decimal places after point.
//Input Format
//Single line input containing, one integer value.
//Output Format
//Print output according the description.
//Constraints
//0<=basic_salary<=100000
//Input-1
//22000
//Output-1
//49500.00
//Input-2
//8500
//Output-2
//17000.00
//---------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    float x;
    scanf("%f", &x);

    if (x <= 10000)
        printf("%.2f", x + x * 0.8 + x * 0.2);
    else if (x > 10000 && x <= 20000)
        printf("%.2f", x + x * 0.9 + x * 0.25);
    else if (x > 20000 && x < 100000)
        printf("%.2f", x + x * 0.95 + x * 0.3);
    else
        printf("Invalid input");

    return 0;
}
