/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:02:06 by mthea             #+#    #+#             */
/*   Updated: 2022/11/23 16:56:35 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_printf.h"

int	ft_print_value(va_list parametres, char str)
{
	int		value;

	value = 0;
	if (str == 'c')
		value = ft_aff_c(va_arg(parametres, int));
	else if (str == 's')
		value = ft_aff_s(va_arg(parametres, const char *));
	else if (str == 'p')
		value = ft_putnbr_base(va_arg(parametres, void *), "0123456789ABCDEF");
	else if (str == 'd')
		value = ft_aff_nb(va_arg(parametres, int));
	else if (str == 'i')
		value = ft_aff_nb(va_arg(parametres, int));
	else if (str == 'u')
		value = ft_aff_nb_u(va_arg(parametres, unsigned int));
	else if (str == 'x')
		value = ft_aff_nb_x(va_arg(parametres, int), "0123456789abcdef");
	else if (str == 'X')
		value = ft_aff_nb_x(va_arg(parametres, int), "0123456789ABCDEF");
	else if (str == '%')
		value = ft_aff_p(va_arg(parametres, int));
	else
		return (-1);
	return (value);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		value;
	va_list	parametres;
	int		verification;

	i = 0;
	value = 0;
	va_start(parametres, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			verification = ft_print_value(parametres, str[i]);
			if (verification <= 0)
				return (0);
			value += verification;
			i++;
			continue ;
		}
		ft_aff_c(str[i]);
		value++;
		i++;
	}
	va_end(parametres);
	return (value);
}
