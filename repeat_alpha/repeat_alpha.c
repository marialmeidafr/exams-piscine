#include <unistd.h>

int main(int ac, char *av[])
{
	int i = 0;
	int repeat = 1;

	if(ac == 2)
	{
		while(av[1][i])
		{
			if((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
			{
				if(av[1][i] == 'a' || av[1][i] == 'A')
					repeat = 1;
				else if(av[1][i] == 'b' || av[1][i] == 'B')
					repeat = 2;
				else if(av[1][i] == 'c' || av[1][i] == 'C')
                                        repeat = 3;
				else if(av[1][i] == 'd' || av[1][i] == 'D')
                                        repeat = 4;
				else if(av[1][i] == 'e' || av[1][i] == 'E')
                                        repeat = 5;
				else if(av[1][i] == 'f' || av[1][i] == 'F')
                                        repeat = 6;
				else if(av[1][i] == 'g' || av[1][i] == 'G')
                                        repeat = 7;
				else if(av[1][i] == 'h' || av[1][i] == 'H')
                                        repeat = 8;
				else if(av[1][i] == 'i' || av[1][i] == 'I')
                                        repeat = 9;
				else if(av[1][i] == 'j' || av[1][i] == 'J')
                                        repeat = 10;
				else if(av[1][i] == 'k' || av[1][i] == 'K')
                                        repeat = 11;
				else if(av[1][i] == 'l' || av[1][i] == 'L')
                                        repeat = 12;
				else if(av[1][i] == 'm' || av[1][i] == 'M')
                                        repeat = 13;
				else if(av[1][i] == 'n' || av[1][i] == 'N')
                                        repeat = 14;
				else if(av[1][i] == 'o' || av[1][i] == 'O')
                                        repeat = 15;
				else if(av[1][i] == 'p' || av[1][i] == 'P')
                                        repeat = 16;
				else if(av[1][i] == 'q' || av[1][i] == 'Q')
                                        repeat = 17;
				else if(av[1][i] == 'r' || av[1][i] == 'R')
                                        repeat = 18;
				else if(av[1][i] == 's' || av[1][i] == 'S')
                                        repeat = 19;
				else if(av[1][i] == 't' || av[1][i] == 'T')
                                        repeat = 20;
				else if(av[1][i] == 'u' || av[1][i] == 'U')
                                        repeat = 21;
				else if(av[1][i] == 'v' || av[1][i] == 'V')
                                        repeat = 22;
				else if(av[1][i] == 'w' || av[1][i] == 'W')
                                        repeat = 23;
				else if(av[1][i] == 'x' || av[1][i] == 'X')
                                        repeat = 24;
				else if(av[1][i] == 'y' || av[1][i] == 'Y')
                                        repeat = 25;
				else if(av[1][i] == 'z' || av[1][i] == 'Z')
                                        repeat = 26;
				while(repeat >= 1)
				{
					write(1, &av[1][i], 1);
					repeat--;
				}
			}
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n",1);
}
