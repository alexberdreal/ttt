#include <stdio.h>

int draw(int field[3][3]) {
	printf("\tA\tB\tC");
	for (int i = 0; i < 3; i++) {
		printf("\n");
		printf("     %d", i + 1);
		for (int j = 0; j < 3; j++) {
			switch (field[i][j]) {
			case 2: printf("\to");
				break;
			case 1: printf("\tx");
				break;
			case 0: printf("\t");
				break;
			default: printf("Error.Not correct number");
				exit(1);
			}
			//printf("\t%d", field[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

		}
	}
	return 0;
}