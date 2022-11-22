/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:45:42 by mthea             #+#    #+#             */
/*   Updated: 2022/11/22 14:27:52 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdarg.h>

// int ft_printf(const char *str, ...)
// {
//     int entier;

//     va_list parametres;
//     int i;
//     va_start(parametres, str);
//     i = 0;
//     while(str[i - 1])
//     {
//         if ((str[i - 1] == '%' && (str[i] == 'd' || str[i] == 'i')))
//         {
//            entier = va_arg(parametres, int);
//             if(ft_aff_nb(entier) == 0)
//                 return (0);
//             i++;
//         }
//         ft_aff_c(str[i]);
// 		i++;
//     }
// 	va_end(parametres);
//     return (1);

// }

int main (void)
{
   ft_printf("bonjour%d\n", 10);
   return (0);
}