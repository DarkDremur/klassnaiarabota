#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "");

/*float p=3, k, y, t = 4.1, x;

	k = sqrt(p*t);

	x = (p*pow(t,2))+(sqrt(k));

	y = pow(tan(pow(x, 2)), 3) + (k * t);

	printf("%f\n", y);*/
/*
	float a, b, y, t = -6, x = 2.7;

	b = sqrt(pow(x, 2) + pow(t, 2));

	a = log(x);

	y = pow(sqrt(abs(a - b * x)), 2);
	printf("%f\n", y);
*/
/*
	float a, b, y, p = 1, x = 2.1;

	b = (sin(pow(p, 2)) + pow(x, 3));
	a = exp(sqrt(abs(x)));
	y = pow(a, 3) / pow(p, 2);

	printf("%f\n", y);
*/
/*
	float a, b, y, x = 1.3, k = 4;

	a = log(abs(x));

	b = exp(x * 2) + (a * x);
	y = x * pow(a, 3) + pow(b, 2);
	
	printf("%f\n", y);
*/
/*
	float a, c, y, x = 3.5, b = 0.4;

	a = log(x);

	c = pow(a, 2) + sqrt(b*x);

	y = exp(x * 2) + pow(9.7, c);
	printf("%f\n", y);
*/
//4
/*
	float a, b, x;
	printf("Ввете число a  ");
	scanf_s("%f", &a);

	printf("Ввете число b  ");
	scanf_s("%f", &b);

	x = sqrt((float)a * (float)b);

	printf("Среднее геометрическое равняется: %f\n", x);
*/
//3
/*
	float L, K;
	printf("Ввете число  ");
	scanf_s("%f", &K);

	L = (float)K / (float)60;

	printf("Ответ: %f\n", L);
*/
//2
/*
	float L = (float)5 / (float)100;
	printf("Ответ: %f\n", L);
*/
//1
/*	float z, x;
    printf("Ввете число  ");
	scanf_s("%f", &z);

	float x = (float)z / (float)8
	printf("Ответ: %d\n", x);

*/
	system("pause");
}