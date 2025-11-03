//Program Description
//Pavan decided to redecorate his house,and now needs to decide between two different styles of interior design.
//For first style,tiling the floor will cost X1 rupees and painting the walls will cost Y1 rupees.
//For the second style,tiling the floor will cost X2 rupees and painting the wallls will cost Y2 rupees.
//Pavan will choose whichever style has the lower total cost. How much will Pavan pay for his interior design?
//Input Format
//A single line of input containing four space- separated integers X1,Y1,X2,Y2.
//Output Format
//Print the output according to the description.
//Constraints
//0<=X1,Y1,X2,Y2<=100000
//Input-1
//100 43 85 61
//Output-1
//143
//Input-2
//10 20 9 25
//Output-2
//30
//--------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
int main(){
int x1,y1, x2,y2;
scanf("%d %d %d %d", &x1,y1,&x,&y2);
int in1=x1+y1;
int in2=x2+y2;
if(in1 < in2){
printf("%d",in1);
}
else{
printf("%d",in2);
}
return 0;
}
