/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:54:38 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/24 21:43:31 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
		ft_putchar('-');
	else
		num = n;
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_putchar('0' + num % 10);
}
