/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 10:58:06 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/24 21:45:15 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *tmp;

	tmp = dst;
	while (len--)
	{
		if (*src)
			*tmp++ = *src++;
		else
			*tmp++ = '\0';
	}
	if (*dst)
		return (dst);
	return (NULL);
}
