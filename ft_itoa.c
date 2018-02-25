/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:03:24 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/24 23:07:58 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	size;
	unsigned int	num;

	num = n * (n < 0 ? -1 : 1);
	size = 1 + (n < 0);
	while (num >= 10)
	{
		size++;
		num /= 10;
	}
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
		str[0] = '-';
	num = n * (n < 0 ? -1 : 1);
	while (size--)
	{
		if (str[size] != '-')
			str[size] = '0' + (num % 10);
		num = num / 10;
	}
	return (str);
}
