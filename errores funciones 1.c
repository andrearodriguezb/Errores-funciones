#include <stdio.h>

int suma (int a, int b);

int main ()
{
	int num1, num2;
	int sum;
	printf ("Introducir dos numeros a sumar: ");
	scanf ("%d %d", &num1, &num2);
	sum =num1+ num2;
	printf ("La suma es: %d", sum);
	return 0;
}

int sum (int a, int b)
{
	int add;
	add = a+b;
	return add;
}






