#include <unistd.h>

int main(void)
{
    write(1, "1\n", 2);
    write(1, "2\n", 2);
    write(1, "3\n", 2);
    write(1, "buzz\n", 5);
    write(1, "5\n", 2);
    write(1, "6\n", 2);
    write(1, "fizz\n", 5);
    write(1, "buzz\n", 5);
    write(1, "9\n", 2);
    write(1, "10\n", 3);
}