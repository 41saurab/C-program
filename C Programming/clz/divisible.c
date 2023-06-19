#include<stdio.h>
#include<conio.h>
void main(){
	//number divisible by 5 and 11
	int n;
	printf("enter a number ");
	scanf("%d",&n);
	if((n%5==0)&&(n%11==0)){
		printf("divisible");
	}
	else{
		printf("not divisible");
	}
	getch();
}
