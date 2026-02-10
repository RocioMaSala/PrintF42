/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarti2 <romarti2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 13:53:18 by romarti2          #+#    #+#             */
/*   Updated: 2026/02/10 13:43:42 by romarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>

int	ft_hexa(unsigned long num);
int	ft_hexamay(unsigned long num);
int	ft_printchar(int c);
int	ft_printf(char const *s, ...);
int	ft_printpunt(void *ptr);
int	ft_printstring(char *s);
int	ft_putnbr(int n);
int	ft_uint(unsigned int n);

#endif
