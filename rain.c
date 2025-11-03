//Program Description
//In Andhra Pradesh, precipitation is measured using the rain in mm/hr.
//Categories rainfall as:
//LIGHT, If rainfall is less than 3 mm/hr.
//MODERATE, If rainfall is greater than equal to 3 mm/hr and less than 7 mm/hr.
//HEAVY, If rainfall is greater than equal to 7 mm/hr.
//Given that rains at x mm/hr on a day, find whether the rain is LIGHT, MODERATE, or HEAVY.
//Input Format
//A single line input contains an integer x.
//Output Format
//Print the output caaording to description.
//Constraints
//-10000<=x<=10000
//Input-1
//7
//Output-1
//HEAVY
//Input-2
//1
//Output-2
//LIGHT
//--------------------------------------------------------------------------------------------------------
#include<stdio.h>
int main(){
int r;
scanf("%d",&n);
if(r<3){
printf("LIGHT");
}
else if(r>=3 && r<7) {
printf("MODERATE");
}
else if(r>=7) {
printf("HEAVY");
}
else{
printf("UNIDENTIFIED");
}
return 0;
}
