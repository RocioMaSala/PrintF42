/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarti2 <romarti2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:27:20 by romarti2          #+#    #+#             */
/*   Updated: 2026/02/09 18:13:35 by romarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_uint(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i = i + ft_uint(n / 10);
	}
	i = i + ft_putchar(n % 10 + '0');
	return (i);
}
