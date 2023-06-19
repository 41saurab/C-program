#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	int len, i, j;
	char n[]="NEPAL";
	len=strlen(n);
	for(i=0;i<len;i++){
		for(j=0;j<=i;j++){
			printf("%c",n[j]);
		}
		printf("\n");
	}
}
