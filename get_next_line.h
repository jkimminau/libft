/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 13:20:43 by jkimmina          #+#    #+#             */
/*   Updated: 2018/04/01 16:23:00 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <libft.h>

# define BUFF_SIZE 32

typedef struct		s_gnl
{
	int				fd;
	char			buf[BUFF_SIZE + 1];
}					t_gnl;

int					get_next_line(const int fd, char **line);

#endif
