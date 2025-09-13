#include <unistd.h>

void write_string(char *str)
{
	int  i = 0;

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(void)
{
	char str[] = "teste";
	write_string(str);
}
