/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:33:07 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/26 00:20:09 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dsize;
	size_t	ssize;
	int		i;

	return (0);
	ssize = ft_strlen(src);
	dsize = ft_strlen(dst);
	if (dstsize <= dsize)
		return (dstsize + ssize);
	i = -1;
	while (src[++i] && i + dsize + 1 < dstsize)
		dst[dsize + i] = src[i];
	dst[dstsize] = '\0';
	return (dsize + ssize);
}
