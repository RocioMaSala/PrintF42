/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarti2 <romarti2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:09:46 by marvin            #+#    #+#             */
/*   Updated: 2026/02/10 14:08:24 by romarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list vargs, char s)
{
	int	count;

	count = 0;
	if (s == 'c')
		count += ft_printchar(va_arg(vargs, int));
	else if (s == 's')
		count += ft_printstring(va_arg(vargs, char *));
	else if (s == 'p')
		count += ft_printpunt(va_arg(vargs, void *));
	else if (s == 'd')
		count += ft_putnbr(va_arg(vargs, int));
	else if (s == 'i')
		count += ft_putnbr(va_arg(vargs, int));
	else if (s == 'u')
		count += ft_uint(va_arg(vargs, unsigned int));
	else if (s == 'x')
		count += ft_hexa(va_arg(vargs, unsigned int));
	else if (s == 'X')
		count += ft_hexamay(va_arg(vargs, unsigned int));
	else if (s == '%')
		count += ft_printchar('%');
	return (count);
}

int	ft_printf(char const *s, ...)
{
	va_list	vargs;
	size_t	i;
	int		count;

	if (!s)
		return (-1);
	va_start(vargs, s);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (!s[i + 1])
				return (-1);
			count += ft_format(vargs, s[++i]);
		}
		else
		{
			count += write(1, &s[i], 1);
		}
		i++;
	}
	va_end(vargs);
	return (count);
}
/*
int main (void)
{
//	char *pnt;

//	pnt = NULL;
	ft_printf("%d\n",ft_printf(" NULL %s NULL ", "NULL"));
	printf("%d",printf(" NULL %s NULL ", "NULL"));
	return (0);
}*/
