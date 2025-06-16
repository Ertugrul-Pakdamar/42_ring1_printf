/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:15:58 by epakdama          #+#    #+#             */
/*   Updated: 2025/06/16 13:51:32 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb)
{
	char	out;

	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	out = nb % 10 + '0';
	write(1, &out, 1);
}
