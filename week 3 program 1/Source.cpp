#include<Stdio.h>
int main()
{
	int n1,n2;
	printf("please enter your first range : ");
	scanf_s("%d", &n1);
	printf("please enter your last  range : ");
	scanf_s("%d", &n2);
	for (int i = n1;i <= n2;i++)
	{
		for (int a = 2;(i%a != 0|| i==a) && a<=i;a++)
		{

				if(i==a)
				{
					printf("%d ", i);
					break;
				}
		}
	}
}