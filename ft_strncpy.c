/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 10:58:06 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/26 01:17:50 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*ret;
	size_t	x;

	x = -1;
	ret = dst;
	while (++x < len)
	{
		if (*(src))
			*(dst++) = *(src++);
		else
			*(dst++) = 0;
	}
	return (ret);
}
