/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 15:21:06 by jkimmina          #+#    #+#             */
/*   Updated: 2018/04/02 15:24:08 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_countwords(char *str)
{
	int		wc;

	wc = 0;
	str = ft_nextword(str);
	while (*str)
	{
		wc++;
		str = ft_nextspace(str);
		str = ft_nextword(str);
	}
	return (wc);
}
