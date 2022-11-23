/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:52:27 by mthea             #+#    #+#             */
/*   Updated: 2022/11/23 16:34:51 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <printf.h>
# include <stdlib.h> 
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_strlen(char *str);
void	ft_tri(char *tab);
int		ft_compte_nb(int n);
int		ft_compte_nb_u(unsigned int n);
int		ft_aff_c(char c);
int		ft_aff_s(char *s);
int		ft_putnbr_base(void *nb, char *base);
int		ft_aff_nb(int n);
int		ft_aff_nb_u(unsigned int n);
int		ft_aff_nb_x(int nbr, char *base);
int		ft_aff_p(char c);
int		ft_print_value(va_list parametres, char str);
#endif