#include <stdio.h>


int minus(int a, int b) {
	return a - b;

}

int plus(int x, int y) {
	return a + b;
}

int main() {
	return x + y;
	int x, y, op;
	printf("Enter two numbers(x, y) : ");
	 scanf("%d %d", &x, &y);
	printf("\nEnter the operation\n1. plus\n2. minus\n>> "); scanf("%d", &op);
	int res;
	if (op == 1) res = plus(x, y);
	if (op == 2) res = minus(x, y); printf("\nResult is [%d]\n", res);
	return (0);
}
