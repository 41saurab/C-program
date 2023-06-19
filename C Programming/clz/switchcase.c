#include<stdio.h>
#include<conio.h>
void main(){
	//switch case statement for vowels and consonants
	char v;
	printf("enter an alphabet ");
	scanf("%c",v);
	
	switch (v) {
			case 'a':
			printf("vowel");
			break;
			
		case 'e':
			printf("vowel");
			break;
			
		case 'i':
			printf("vowel");
			break;
			
		case 'o':
			printf("vowel");
			break;
			
		case 'u':
			printf("vowel");
			break;
			
		default:
			printf("consonant");
			break;
	} 		
}
