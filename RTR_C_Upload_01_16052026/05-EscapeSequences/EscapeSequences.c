// Program Name: EscapeSequences.c
#include <stdio.h>

int main(void)
{
	// Code
	printf("\n----------------------------------------------------------------------------------\n");
	printf("\n\n");
	printf("Going On To Next Line... Using \\n Escape Sequence\n\n");
	printf("Demonstrating \t Horizontal \t Tab \t Using \t \\t Escape Seauence !\n\n");
	printf("\"This Is A Double Quoted Output\" Done Using \\\" \\\" Escape Sequence!\n\n");
	printf("\'This Is A Single Quoted Output\' Done Using \\\' \\\' Escape Sequence!\n\n");
	printf("BACKSPACE Turned To BACKSPACE\b Using Escape Sequence \\b\n\n");

	printf("\r Demonstrating Carriage Return Using \\r Escape Sequence!\n");
	printf("Demonstrating \r Carriage Return Using \\r Escape Sequence!\n");
	printf("Demonstrating Carriage \r Return Using \\r Escape Sequence!\n");

	printf("Demonstrating \x54 Using \\xhh Escape Sequence.\n"); 
	/* 0x54 Is The Hexadicimal Code For Letter 'T'. 
	'xhh' Is The Place-holder For 'x' Followed by 2 digits (hh), altogether forming a Hexadecimal Number. */
	printf("Demonstrating \120 Using \\ooo Escape Sequence.\n");
	/* 120 Is The Octal Code For Letter 'P'. 'ooo' Is The Place-holder For 3 Digits Forming An Octal Number. */

	printf("\n----------------------------------------------------------------------------------\n");
	return (0);
}