#include <stdio.h>

int main(void)
{
	char ch[27] = "abcdefghijklmnopqrstuvwxyz";

	int a = 0;

	while (a < 27)
	{
		printf("");
		putchar(ch[a]);
		a++;
	}
	return (0);
}
