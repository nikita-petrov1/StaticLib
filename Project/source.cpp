#include <iostream>
using namespace std;

float* createArray(int n) {
	float* a = new float[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }
	return a;
}
float* randomCreateArray(int n, float l, float r) {
	float* a = new float[n];
	srand((unsigned int)time(0));
	for (int i = 0; i < n; i++) { a[i] = (r - l) / RAND_MAX * rand() + l; }
	return a;
}
void printArray(int n, float* a) {
	for (int i = 0; i < n; i++) { cout << a[i] << " "; }
	cout << endl;
}