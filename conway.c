/* Walker VanHouten
 * 7/26/2017
 * Ascii Conway's game of life
 */

#include <stdio.h>

#define SCRX 61		//60 + the \n
#define SCRY 40

char scr[SCRX][SCRY];

void initializeArray();
void printArray();
void updateArray();

/******************************************************************************/
int main() {
	initializeArray();
	printf("<%c>\n", scr[0][0]);
	printArray();
	return 0;
}

void initializeArray() {
	for(int j = 0; j < SCRY;j++) {
		for(int i = 0; i < SCRX;i++) {
			if(i == 60) {
				scr[i][j] = '\n';
			} else {
				scr[i][j] = ' ';
			}
		}
	}
}

void printArray() {
	for(int j = 0; j < SCRY;j++) {
		for(int i = 0; i < SCRX;i++) {
			printf("%c", scr[i][j]);
		}
	}
}

void updateArray() {
	for(int j = 0; j < SCRY;j++) {
		for(int i = 0; i < SCRX;i++) {
			if(scr)

			if(scr[i][j] == '#') {

			}

		}
	}
}
