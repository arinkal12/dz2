#include <stdio.h>

#include <stdlib.h>
int main() {
	int a, b, srak, sram;
	printf(" enter 2 numbers");
	scanf_s("%d %d", &a, &b);
	srak = (a * a + b * b) / 2;
	sram = (abs(a) + abs(b)) / 2;
	printf(" the arithmetic mean of their squares %d\n", srak);
	printf("the arithmetic mean of their modules %d\n", sram);


	return 0;
}