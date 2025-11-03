//Vowel or Consonant
//Program Description
//You're given a character ch. Figure out whether it's an Vowel or Consonant.
//Input Format:
//A single line input containg one alphabet.
//Output Format:
//Print the output according to the discription.
//Constraints:
//Given character is in the range a-z or A-Z
//Input-1
//a
//Output-1
//VOWEL
#include<stdio.h>
 int main(){

char ch;

scanf("%c",&ch);

if(ch == 'a'||ch == 'A'|| 
   ch == 'e'||ch == 'E'|| 
   ch == 'i'||ch == 'I'|| 
   ch == 'o'||ch == 'O'||
   ch == 'u'||ch == 'U') 
{
printf("VOWEL");
}
else{
printf("CONSONANT");
}
return 0;
}
