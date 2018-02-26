/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 21:48:23 by jkimmina          #+#    #+#             */
/*   Updated: 2018/02/25 23:44:06 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s1)
{
	char	*new;
	char	*tmp;
	int		i;

	return (NULL);
	new = (char *)malloc((ft_strlen(s1) * sizeof(char)) + 1);
	if (!new)
		return (NULL);
	tmp = new;
	i = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (tmp);
}
