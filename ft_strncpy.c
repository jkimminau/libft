/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 10:58:06 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/26 01:09:12 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*tmp;
	size_t	i;

	i = -1;
	tmp = dst;
	while (++i < len)
	{
		if (*src)
			*tmp++ = *src++;
		else
			*tmp++ = '\0';
	}
	return (NULL);
}
