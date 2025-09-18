#include <unistd.h>

char *swap_cases(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return(str);
}
#include <stdio.h>
int main(void)
{
    char str[] = "OLA";
    printf("%s\n", swap_cases(str));
}