#include<stdio.h>
#include<stdlib.h>
#include<locale>
#include<math.h>
#include<time.h>

void main()
{
	setlocale(LC_ALL, "rus");

	int n = 0;
	printf("�������, ����������, ����� �������: \n");
	scanf("%d", &n);

	if (n == 1)
	{
		int a, b;
		printf("������� ���������� x ");
		scanf("%d", &a);
		b = ((3 * pow(a, 6)) - (6 * pow(a, 2)) - 7);
		printf("��������� ����� = %d \n", b);

	}
	else if (n == 2)
	{
		int a, b, c;
		printf("������� ���������� � ");
		scanf("%d", &a);
		c = a - 3;
		b = ((4 * pow(c, 6)) - (7 * pow(c, 3)) + 2);
		printf("��������� ����� %d \n", b);
	}
	else if (n == 3)
	{
		int a, b, c, d, e;
		printf("������� ���������� � = ");
		scanf("%d", &a);

		b = a * a;
		c = b * b;
		d = c * c;
		e = pow(a, 8);

		printf("�^2 = %d, �^4 = %d, A^8 = %d, � ������ � ��������������� ���������� = %d\n", b, c, d, e);
	}
	else if (n == 4)
	{
		int a, b, c, d, e, f, g;
		printf("������� ���������� � = ");
		scanf("%d", &a);

		b = a * a; // ������ ������� 
		c = b * a; // ������ �������
		d = b * c; // 
		e = c * d * b;
		f = e * d;
		g = pow(a, 15);
		printf("�^2 = %d, A^3 = %d, A^5 = %d, A^10 = %d, A^15 = %d, � ������ � ��������������� ���������� = %d\n", b, c, d, e, f, g);
	}
	else if (n == 5)
	{
		int a, b;
		printf("������� ���������� ����������� � �������� ���������� = ");
		scanf("%d", &a);
		b = (((a - 32) * 5 ) / 9);
		printf("����������� � �������� ����� = %d\n", b);

	}
}