#include "..\Project\header.h"
int main() {
	float* a = createArray(4);
	float* b = randomCreateArray(7, -2, 4);
	printArray(7, b);
	return 0;
}