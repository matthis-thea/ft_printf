/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:02:06 by mthea             #+#    #+#             */
/*   Updated: 2022/11/21 18:00:26 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int ft_printf(const char *str, ...);
{
    int entier;

    va_list parametres;
    int i;
    va_start(parametres, str);
    i = 0;
    while(str[i])
    {
        if (str[i] == '%' && str[i + 1] == 'd')
        {
           entier = va_arg(parametres, int);
           printf("%d", entier);
		   i++;
        }
        else
            printf("%c", str[i]);
		i++;
    }
	va_end(parametres);
    return (1);

}

int main (void)
{
   ft_printff("hello %d %s %d", 10, 20);
   return (1);
}