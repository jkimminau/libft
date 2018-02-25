/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:38:50 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/24 22:56:20 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = (*f)(i, s[i]);
	str[i] = '\0';
	return (str);
}
