/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:52:27 by mthea             #+#    #+#             */
/*   Updated: 2022/11/25 15:26:54 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <printf.h>
# include <stdlib.h> 
# include <stdarg.h>

int		ft_printf_void(unsigned long long nb, char *base, int *verification);
int		ft_printf_c(char c, int *verification);
int		ft_printf_s(char *s, int *verification);
int		ft_printf_nb(int n, int *verification);
int		ft_printf_nb_u(unsigned int n, int *verification);
int		ft_printf_nb_x(unsigned int nbr, char *base, int *verification);
void	ft_rev_char_tab(char *tab, int size, int *verification);
void	ft_rev_char_tab_x_X(char *tab, int size, int *verification);
int		ft_count_return_nb(int n);
int		ft_count_return_nb_u(unsigned int n);
int		ft_count_return_nb_long(unsigned long long n);
int		ft_printf(const char *str, ...);
#endif