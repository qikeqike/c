#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

void s()
{
	char ch;

	while ((ch = getchar()) != '\n')//get��ȡgetchar��ȡ�ַ�����
		continue;
}

int main(void)
{
	int z, x;


	scanf_s("%d", &x);
	s();
	printf("%d\n", x);


	scanf_s("%d", &z);
	s();
	printf("%d\n", z);

	return 0;
}
