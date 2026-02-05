/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarti2 <romarti2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:31:28 by romarti2          #+#    #+#             */
/*   Updated: 2026/02/03 18:31:58 by romarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static int	ft_putchar(char c)
{
    write(1, &c, 1);
    return(1);
}

int ft_hexa(unsigned long num)
{
    char *base;
    int i;

    i = 0;
    base = "0123456789abcdef";
    if(num >= 16)
    {
        i = i + ft_hexa (num / 16);
    }
    i = i + ft_putchar(base[num % 16]);
    return(i);
}