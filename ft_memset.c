/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:42:30 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/25 01:42:58 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp;

	if (!b)
		return (NULL);
	tmp = (unsigned char *)b;
	while (len--)
		*tmp++ = c;
	return (b);
}
