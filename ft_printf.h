/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:29:10 by epakdama          #+#    #+#             */
/*   Updated: 2025/06/16 19:22:59 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define UPPER_BASE "0123456789abcdef"
# define LOWER_BASE "0123456789ABCDEF"

int		ft_printf(const char *s, ...);
void	ft_putstr(char *s, int *len);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_putunsigned(unsigned int nb, int *len);
void	ft_putnbr_base(unsigned long long nbr, char *base, int *len);

#endif
