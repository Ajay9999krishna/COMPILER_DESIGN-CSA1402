#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int i,va=0,ca=0;
	char input[50],vowels[50],consonants[50];
	printf("Enter the Sentence: ");
	scanf("%[^\n]s",input);
	for(i=0;input[i]!='\0';i++){
		if(isspace(input[i])){
			continue;
		}
		if(isalpha(input[i])){
			if(input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u'||input[i]=='A'||input[i]=='E'||input[i]=='I'||input[i]=='O'||input[i]=='U'){
				vowels[va]=input[i];
				va++;
			}
			else{
				consonants[ca]=input[i];
				ca++;
	   	    }
		}
	}
	printf("%s%d%s%d","\nVowels: ",va,"\nConsonants: ",ca);
	printf("\nVowels: ");
	for(i=0;i<va;i++){
		printf("%c ",vowels[i]);
	}
	printf("\nConsonants: ");
	for(i=0;i<ca;i++){
		printf("%c ",consonants[i]);
	}
}
