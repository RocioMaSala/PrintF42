/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:09:46 by marvin            #+#    #+#             */
/*   Updated: 2026/01/31 11:09:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdarg.h>

int ft_printf(char const *format, ...)
{
    va_list vargs;
    va_start (vargs, format)

    va_arg (vargs, ...) ...... aquí pondremos lo que queremos que ocurra con nuestros parámetros variádicos

    va_end(vargs)
    return (0);

}


