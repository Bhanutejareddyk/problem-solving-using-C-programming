//finding factors of a number
#include<stdio.h>
int main(){
	int n,r,i;
	printf("Enter the number:0");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("%d",i);
		}
	}
	return 0;
		
	
}
