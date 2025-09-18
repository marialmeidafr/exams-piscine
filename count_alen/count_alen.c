#include <stdio.h>

int    count_alen(char *str)
{
    int i = 0;

    while(str[i] != '\0' && str[i] != 'a')
        i++;
    return(i);
}
int main()
{
    printf("String 'apple': %d\n", count_alen("apple"));
    printf("String 'banana': %d\n", count_alen("banana"));
    printf("String 'xyz': %d\n", count_alen("xyz"));
    printf("String vazia '': %d\n", count_alen(""));
    return 0;
}