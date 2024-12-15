#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ScrabbleScore(const char w[]);

int main()
{
	char w[51]; //Max length 51 cause of \0

	//Word Input
	printf("Give word: ");
	scanf("%50s", w);

	//Calculating and score output
	int skor = ScrabbleScore(w);
	printf("Points for word %s are %d.\n", w, skor);

	return 0;
}

//Function for calculating points per word
int ScrabbleScore(const char w[]) {
	int skor = 0;

	//Points per char
	int points[26] = {
		1, // A
		3, // B
		3, // C
		2, // D
		1, // E
		4, // F
		2, // G
		4, // H
		1, // I
		8, // J
		5, // K
		1, // L
		3, // M
		1, // N
		1, // O
		3, // P
		10, // Q
		1, // R
		1, // S
		1, // T
		1, // U
		4, // V
		4, // W
		8, // X
		4, // Y
		10  // Z
	};

	for (int i = 0; w[i] != '\0'; i++)
	{
		if (isupper(w[i])) {
			skor += points[w[i] - 'A']; //Calculating score for Capitals
		}
	}
	return skor;
}
