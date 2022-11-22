/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:52:27 by mthea             #+#    #+#             */
/*   Updated: 2022/11/22 12:36:54 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <printf.h>
# include <stdlib.h> 
# include <stdarg.h>
// Principals Functions
int ft_printf(const char *str, ...);
// External functions
int		ft_strlen(char *str);
void	ft_tri(char *tab);
int		ft_compte_nb(int n);
int		ft_compte_nb_u(unsigned int n);
// Functions for %c
int		ft_aff_c(char c);
// Functions for %s
int		ft_aff_s(char *s);
// Functions for %p
int		ft_putnbr_base(void *nb, char *base);
// Functions for %d and %i
int		ft_aff_nb(int n);
// Functions for %u
int		ft_aff_nb_u(unsigned int n);
// Functions for %x and %X
int		ft_aff_nb_x(int nbr, char *base);
// Functions for %%
int		ft_aff_p(char c);
#endif