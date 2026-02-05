/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_HEXA.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarti2 <romarti2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:31:46 by romarti2          #+#    #+#             */
/*   Updated: 2026/02/03 18:31:55 by romarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static int	ft_putchar(char c)
{
    write(1, &c, 1);
    return(1);
}

int ft_HEXA(unsigned long num)
{
    char *base;
    int i;

    i = 0;
    base = "0123456789ABCDEF";
    if(num >= 16)
    {
        i = i + ft_HEXA (num / 16);
    }
    i = i + ft_putchar(base[num % 16]);
    return(i);
}
/*
int main (void)
{
    unsigned int num;
    int i;

    num = 235;
    i = ft_HEXA(num);
    printf("\n");
    printf("Original: %X\n", num);
    printf("Número de carácteres: %d\n", i);
}*/
