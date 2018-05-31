#include<stdio.h>
#include<stdlib.h>
#include<locale>
#include<math.h>
#include<time.h>

void main()
{
	setlocale(LC_ALL, "rus");

	int n = 0;
	printf("Укажите, пожалуйста, номер задания: \n");
	scanf("%d", &n);

	if (n == 1)
	{
		int a, b;
		printf("Укажите пожалуйста x ");
		scanf("%d", &a);
		b = ((3 * pow(a, 6)) - (6 * pow(a, 2)) - 7);
		printf("Результат равен = %d \n", b);

	}
	else if (n == 2)
	{
		int a, b, c;
		printf("Укажите пожалуйста х ");
		scanf("%d", &a);
		c = a - 3;
		b = ((4 * pow(c, 6)) - (7 * pow(c, 3)) + 2);
		printf("Результат равен %d \n", b);
	}
	else if (n == 3)
	{
		int a, b, c, d, e;
		printf("Укажите пожалуйста А = ");
		scanf("%d", &a);

		b = a * a;
		c = b * b;
		d = c * c;
		e = pow(a, 8);

		printf("А^2 = %d, А^4 = %d, A^8 = %d, и расчет с вспомогательной переменной = %d\n", b, c, d, e);
	}
	else if (n == 4)
	{
		int a, b, c, d, e, f, g;
		printf("Укажите пожалуйста А = ");
		scanf("%d", &a);

		b = a * a; // вторая степень 
		c = b * a; // третья степень
		d = b * c; // 
		e = c * d * b;
		f = e * d;
		g = pow(a, 15);
		printf("А^2 = %d, A^3 = %d, A^5 = %d, A^10 = %d, A^15 = %d, и расчет с вспомогательной переменной = %d\n", b, c, d, e, f, g);
	}
	else if (n == 5)
	{
		int a, b;
		printf("Укажите пожалуйста температуру в градусах Фаренгейта = ");
		scanf("%d", &a);
		b = (((a - 32) * 5 ) / 9);
		printf("Температура в градусах равна = %d\n", b);

	}
}