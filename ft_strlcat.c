/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:33:07 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/25 01:00:29 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dsize;
	size_t	ssize;

	ssize = ft_strlen(src);
	dsize = ft_strlen(dst);
	if (dsize >= dstsize)
		return (dstsize + ssize);
	ft_memcpy(dst + dsize, src, dstsize - dsize - 1);
	return (dsize + ssize);
}
