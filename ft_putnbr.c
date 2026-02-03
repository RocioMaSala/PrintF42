/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarti2 <romarti2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:32:59 by romarti2          #+#    #+#             */
/*   Updated: 2026/02/03 18:37:28 by romarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putnbr(int n, int fd)
{
	unsigned int	nb_pos;

	if (n < 0)
	{
		ft_putchar('-', fd);
		nb_pos = n * (-1);
	}
	else
		nb_pos = n;
	if (nb_pos > 9)
	{
		ft_putnbr(nb_pos / 10, fd);
	}
	ft_putchar(nb_pos % 10 + '0', fd);
    return(¿¿¿len???)
}