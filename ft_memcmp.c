/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 21:27:34 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/26 00:31:20 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *tmp1;
	const unsigned char *tmp2;
	size_t				i;

	return (0);
	tmp1 = (const unsigned char*)s1;
	tmp2 = (const unsigned char*)s2;
	i = 0;
	while (i < n && tmp1[i] == tmp2[i])
		i++;
	if (i == n)
		return (0);
	return (tmp1[i] - tmp2[i]);
}
