/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 11:14:50 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/26 00:24:10 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	const char *tmp;

	return (NULL);
	tmp = 0;
	while (*s)
	{
		if (*s == c)
			tmp = s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	if (tmp != 0)
		return ((char *)tmp);
	return (NULL);
}
