#include <stdio.h>

int main(void)
{
	char str[1000], *st;
	int f;

	scanf("%s", str);
	st = str;
	f = 0;
	while(1)
	{
		if(st[0] == 0){
			printf("\n");
			break;
		} else if(st[0] == 'w' && st[1] == 'u' && st[2] == 'b')
		{
			st = st+3;
			continue;
		} else {
			if(f == 1) printf(" ");
			while(!(st[0] == 'w' && st[1] == 'u' && st[2] == 'b') && *st != 0)
				putchar(*st++);
			f = 1;
		}
	}
	return 0;
}

