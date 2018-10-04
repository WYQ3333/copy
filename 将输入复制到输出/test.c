#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c = getchar();
	char b = '0';
	char a = '0';
	while (c  != EOF)
	{
		a = b;
		b = c;
		c = getchar();
		if (c != ' ')
		{
			putchar(c);
		}
		else if ((a != ' ') && (b != ' ') && (c == ' '))
		{
			putchar(c);
		}
		else
		{
			continue;
		}
	}
	system("pause");
	return 0;
}
#if 0
int main()
{
	int flag = 1;
	char c;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
		{
			putchar(c);
			flag = 1;
		}
		else
		{
			if (flag!=0)
				putchar(c);
			flag = 0;
		}
	}
	system("pause");
	return 0;
}
#endif