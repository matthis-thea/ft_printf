/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:52:27 by mthea             #+#    #+#             */
/*   Updated: 2022/11/21 17:26:35 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <printf.h>
# include <stdlib.h> 
// External functions
int ft_strlen(char *str);
void	ft_tri(char *tab);
// Fucntions for %c
void	ft_aff_c(char c);
// Functions for %s
void	ft_aff_s(char *s);
// Functions for %p
void	ft_putnbr_base(void *nb, char *base);
// Functions for %d and %i
void	ft_aff_nb(int n);
// Functions for %u
void	ft_aff_nb_u(unsigned int n);
// Functions for %x and %X
void	ft_aff_nb_x(int nbr, char *base);
// Functions for %%
void	ft_aff_p(char c);
#endif