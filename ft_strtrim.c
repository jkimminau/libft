/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 19:27:04 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/25 01:35:22 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		end;
	int		i;

	end = 0;
	if (!s)
		return (NULL);
	s = ft_nextword((char *)s);
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			i++;
		end = i - 1;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
	}
	if (end < 0 || !(str = (char *)malloc(sizeof(char) * (end + 2))))
		return (NULL);
	str[end + 1] = '\0';
	if (!s[0])
		return (str);
	while (end-- >= 0)
		str[end + 1] = s[end + 1];
	return (str);
}
