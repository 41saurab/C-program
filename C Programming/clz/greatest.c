#include<stdio.h>
#include<conio.h>
//compare three numbers and print greatest using nested loop
void main(){
	int a, b, c;
	printf("enter three numbers\n");
	scanf("%d %d %d",&a, &b, &c);
	
	if(a>b){
		if(a>c){
			printf("greatest=%d,a",a);
		}
		else{
			printf("greatest=%d,c",c);
		}
	}
	else{
		if(b>c){
			printf("greatest=%d,b",b);	
		}
		else{
			printf("greatest=%d,c",c);
		}
	}
	getch();
}
