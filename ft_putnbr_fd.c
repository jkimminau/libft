/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 15:09:42 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/24 21:43:36 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int num;

	num = n;
	if (n < 0)
		ft_putchar_fd('-', fd);
	else
		num = n;
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd('0' + num % 10, fd);
}
