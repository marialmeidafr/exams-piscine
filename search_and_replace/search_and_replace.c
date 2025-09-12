#include <unistd.h>

int main(int ac, char *av[])
{
	int i = 0;
	int j = 0;
	int k = 0;

	if(ac == 4)
	{
		while(av[2][j])
			j++;
		while(av[3][k])
			k++;
		if(k > 1 || j > 1)
		{
			write(1, "\n", 1);
			return (0);
		}
		while(av[1][i])
		{
			if(av[1][i] == av[2][0])
				write(1, &av[3][0], 1);
			else
				write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
