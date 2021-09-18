/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 22:30:42 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:29:26 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	Outputs the string ’s’ to the given file descriptor.
*/

void	ft_putstr_fd(char	*s, int	fd)
{
	size_t	len;

	len = 0;
	if (!s)
		return ;
	while (s[len] != '\0')
		len++;
	if (s)
		write(fd, s, len);
}
