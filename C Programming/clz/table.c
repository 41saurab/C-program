#include<stdio.h>
#include<conio.h>
void main(){
	int n, i=1;
	printf("table of:");
	scanf("%d",&n);
	printf("\ntable of %d\n",n);
	while(i<=10){
		printf("\n%d*%d=%d\n",n,i,n*i);
		i++;
	}
	getch();
}
