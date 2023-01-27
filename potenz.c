#include <stdio.h>

int potenz(int x, int n) {

	if (n > 0) {

		return x * potenz(x, n - 1);
	
	}

	else {

		return 1;

	}
}

void main() {

	int x, n, ergebnis;

	printf("Gib die Basis ein:\n");
	scanf("%d", &x);

	printf("Gib die Potenz ein:\n");
	scanf("%d", &n);

	ergebnis = potenz(x, n);
	printf("Ergebnis: %d\n", ergebnis);

}

