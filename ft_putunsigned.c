/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:15:58 by epakdama          #+#    #+#             */
/*   Updated: 2025/06/23 07:59:40 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putunsigned(unsigned int nb, int *len)
{
	char	out;

	if (nb >= 10)
	{
		ft_putunsigned(nb / 10, len);
	}
	out = nb % 10 + '0';
	ft_putchar(out, len);
}
