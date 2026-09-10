#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	switch(ch){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is a vowel",ch);
			break;
		
		case 'B':
		case 'b':
		case 'C':
		case 'c':
		case 'D':
		case 'd':
		case 'F':
		case 'f':
		case 'G':
		case 'g':
		case 'H':
		case 'h':
		case 'J':
		case 'j':
		case 'K':
		case 'k':
		case 'L':
		case 'l':
		case 'M':
		case 'm':
		case 'N':
		case 'n':
		case 'P':
		case 'p':
		case 'Q':
		case 'q':
		case 'R':
		case 'r':
		case 'S':
		case 's':
		case 'T':
		case 't':
		case 'V':
		case 'v':
		case 'W':
		case 'w':
		case 'X':
		case 'x':
		case 'Y':
		case 'y':
		case 'Z':
		case 'z':
			printf("%c is a consonant",ch);
			break;			
	default:
		printf("It is not a character");
	}
	return 0;
}
