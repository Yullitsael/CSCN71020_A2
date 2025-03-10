#include "stdafx.h"
#include "rectangle.h"


int getIntInput(char message[]) {
	int input;
	int scannedValues;
	do {
		printf("\n%s\n", message);
		scannedValues = scanf_s("%i", &input);
		int buf;
		while ((buf = getchar()) != '\n' && buf != EOF);
	} while (scannedValues != 1);
	return input;
}

void setLength(int input, int* length) {
	if (input > 0 && input < 100) {
		*length = input;
	}
}

void setWidth(int input, int* width) {
	if (input > 0 && input < 100) {
		*width = input;
	}
}

int getPerimeter(int* length, int* width) {
	int perimeter = *length + *length + *width + *width;
	return perimeter;
}

int getArea(int* length, int* width) {
	int area = *length * *width;
	return area;
}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**     Welcome to     **\n");
	printf("**    Assignment 02   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Get Rectange Length & Width\n");
	printf("2. Change Rectangle Length\n");
	printf("3. Change Rectangle Width\n");
	printf("4. Get Rectangle Perimeter\n");
	printf("5. Get Rectangle Area\n");
	printf("6. Exit\n");
}