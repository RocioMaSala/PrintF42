/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpunt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarti2 <romarti2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:23:47 by romarti2          #+#    #+#             */
/*   Updated: 2026/02/09 18:13:04 by romarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpunt(void *ptr)
{
	int				i;
	unsigned long	pnt;

	pnt = (unsigned long)ptr;
	i = 0;
	if (!pnt)
		return (write(1, "(nil)", 5));
	i = ft_printstring("0x") + ft_hexa(pnt);
	return (i);
}
