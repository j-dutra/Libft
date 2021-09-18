/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 23:01:56 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:30:19 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	Outputs the string ’s’ to the given file descriptor, followed by a newline.
*/

void	ft_putendl_fd(char	*s, int	fd)
{
	size_t	len;

	len = 0;
	if (!s)
		return ;
	while (s[len] != '\0')
		len++;
	if (s)
	{
		write(fd, s, len);
		write(fd, "\n", 1);
	}
}
