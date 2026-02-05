
#include <unistd.h>
#include <stdio.h>

int main (void)
{
    int num;

    num = 233;
    ft_HEXA("%H\n", num);
    printf("%H", ft_HEXA(num));
}