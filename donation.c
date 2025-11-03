//Program Description
//In a certain month, Pavan earned X rupees while Ganapathi earned Y rupees such that Y>X.
//Since they want to end with exactly the same amount ,they decide to donate the difference between their income to a trust.Find the amout they donate in the month.
//Input Format
//A single line input contains two space separated integers X,Y.
//Output Format
//Print the output, the amount they donate in the month.
//Constraints
//0<=X,Y<=100000
//Input-1
//2 10
//Output-1
//8
//Input-2
//1 3
//Output-2
//2
//-------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
int main(){
int x,y;
scanf("%d %d",&x,&y);
printf("%d",y-x);
return 0;
}
