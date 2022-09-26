#include <stdio.h>
int main() {
	int a, b;
	float div;
	printf("Input two number: ");
	scanf_s("%d %d", &a, &b);
	if (b == 0) {
		printf("Error");
	}
	else {
		div = a / b;
		printf("a / b = %f\n", div);
	}
	system("pause");
	return 0;
}