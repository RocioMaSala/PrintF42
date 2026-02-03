/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romarti2 <romarti2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:09:46 by marvin            #+#    #+#             */
/*   Updated: 2026/02/03 18:32:35 by romarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdarg.h>

int ft_printf(char const *s, ...)
{
    va_list vargs;
    size_t  i;
    int     count;

    i = 0;
    count = 0;
    va_start(vargs, s)
    
    if (!s)
        return(-1);
    while (s[i])
    {
        if s[i] != '%'
        {
            write (1,&s[i],1);            
            count++;
        }
        else
        {
            if (s[i + 1] = 'c');
               count = count + ft_printchar(va_arg(vargs, int ));        
            else (s[i + 1] = 's');
                count = count + ft_printstring(va_arg(vargs, char *));  
            else (s[i + 1] = 'p');
                count = count + ft_printpunt(va_arg(vargs, void *); /*void para que sea indiferente el tipo de dato al que apunte el puntero*/
            else (s[i + 1] = 'd');
                
            else (s[i + 1] = 'i');
            
            else (s[i + 1] = 'u');
                count = count + ft_putnbr(va_arg(vargs,int));
            else (s[i + 1] = 'x');
                count = count + ft_hexa(va_arg(vargs,unsigned int)); 
            else (s[i + 1] = 'X');
                count = count + ft_HEXA(va_arg(vargs,unsigned int));
            else (s[i + 1] = '%');
        }
        i++;
    }
    va_end(vargs);
    return (count);
}
    
    va_start (vargs, s)

    va_arg (vargs, ...) ...... aquí pondremos lo que queremos que ocurra con nuestros parámetros variádicos

    va_end(vargs)
    return (0);

}


