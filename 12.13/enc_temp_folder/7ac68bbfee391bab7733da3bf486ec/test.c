#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char a;
//	while (scanf("%c",&a)!=-1)
//	{
//		getchar();
//		putchar(a + 32);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	unsigned int x = -1;
//	int n;
//	scanf("%d", &n);
//	printf("%d",(x >> (32 - n))+1);
//	
//
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", 1<<n);
//	return 0;
//}
//int main()
//{
//	int n, h, m, y;
//	scanf("%d%d%d", &n, &h, &m);
//		double x = (double)m / (double)h;
//		if (x > (m / h))
//		{
//			y = (int)x + 1;
//		}
//		else
//			y = (int)x;
//	printf("%d", n-y);
//	return 0;
//}
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}
//int main()
//{
//	int a, b, c, d, e;
//	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//	double average;
//	average = ((double)a + (double)b + (double)c + (double)d + (double)e) / 5;
//	printf("%.1lf", average);
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%X%o", &a,&b);
//	printf("%d", a + b);
//	return 0;
//}
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	if (a >= 'A' && a <='Z' || a >= 'a' && a <= 'z')
//	{
//		printf("YES\n");
//	}
//	else
//		printf("NO\n");
//
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	double n, m;
//	scanf("%lf%lf", &n, &m);
//	double BIM = n / (pow(m, 2));
//	//18.5бл23.9
//	if (BIM >= 18.5 && BIM <= 23.9)
//	{
//		printf("Normal\n");
//	}
//	else
//		printf("Abnormal\n");
//	return 0;
//}
//int main()
//{
//	double p;
//	int m, d, or ;
//	scanf("%lf%d%d%d", &p, &m, &d, &or );
//	if (m == 11)
//	{
//		p = 0.7 * p;
//	}
//	else if (m == 12)
//	{
//		p = 0.8 * p;
//	}
//	if (or==1)
//	{
//		p = p - 50;
//	}
//	if (p < 0.0)
//	{
//		p = 0.0;
//	}
//	printf("%.2lf", p);
//	return 0;
//}
int main()
 {
	int n;
	for(n=1000;n<10000;n++)
	{
		int flag = n;
		int i;
		int a;
		int sum = 0;
		for (i = 0;i < 4;i++)
		{
			a = flag % 10;
			flag = flag/ 10;
			sum = sum + a * flag;
 		}
		if (sum == n)
		{
			printf("%d ", n);
		}

	}
	
		

	return 0;
}