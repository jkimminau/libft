/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:29:59 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/25 23:48:15 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *tmp;

	return (NULL);
	tmp = s1;
	while (*tmp)
		tmp++;
	while (*s2 && n--)
		*tmp++ = *s2++;
	*tmp = '\0';
	return (s1);
}
