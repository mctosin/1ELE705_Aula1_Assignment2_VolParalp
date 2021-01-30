#include <stdio.h>

int main() {
	float a, b, c, s;
	fprintf(stderr, "Entre com as variaveis a b c: Ex 4 5.0 6.20 <enter> \n");
	scanf("%f%f%f", &a, &b, &c);
	s = a * b * c;
	printf("%.2f\n", s);
	return 0;
}