#include<stdio.h>
#include<conio.h>
//show grade obtained
void main(){
	float per, total, a, b, c, d;
	printf("enter marks obtained in 4 subjects\n");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	total=a+b+c+d;
	per=total/4;
	
	if(per>=90){
		printf("A+ grade");
	}
	else if(per>=80){
		printf("A grade");
	}
	else if(per>=70){
		printf("B+ grade");
	}
	else if(per>=60){
		printf("B grade");
	}
	else{
		printf("C grade");
	}
	getch();

}
