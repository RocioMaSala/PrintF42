/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarti2 <romarti2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:32:59 by romarti2          #+#    #+#             */
/*   Updated: 2026/02/09 18:13:26 by romarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(int n)
{
	unsigned int	nb_pos;
	int				i;

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		nb_pos = n * (-1);
		i++;
	}
	else
		nb_pos = n;
	if (nb_pos > 9)
	{
		i = i + ft_putnbr(nb_pos / 10);
	}
	i = i + ft_putchar(nb_pos % 10 + '0');
	return (i);
}
/*
int main (void)
{
	int num;
	int i;

	num = -235;
	i = ft_putnbr(num);
	printf("\n");
	printf("Original: %d\n", num);
	printf("Número de carácteres: %d\n", i);
}*/
