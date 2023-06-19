#include<stdio.h>
#include<conio.h>
void main(){
	int a=5, b=6, c=7, d=9, e=7;
//	increment
	printf("increased number=%d\n",++a);
	printf("increased number=%d\t",a++);
	printf("increased number=%d\n",a++);
//	decrement
	printf("\ndecreased number=%d\n",--b);
	printf("decreased number=%d\t",b--);
	printf("decreased number=%d\n",b--);
//	assignment
	printf("\nnumber=%d\n",c=+a);
	printf("number=%d\n",c=-b);
//	relational
	if(d>e){
		printf("\ngreatest %d",d);
	}
	else{
		printf("greatest %d\n",e);
	}
//logical
	if(d!=e){
		printf("\nnot equal");
	}
	else{
		printf("equal");
	}
}
