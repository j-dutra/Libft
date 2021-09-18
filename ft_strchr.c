/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 23:52:41 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:28:25 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The strchr() function locates the first occurrence of c (converted to a
*	char) in the string pointed to by s.  The terminating null character is
*	considered to be part of the string; therefore if c is `\0', the
*	function locate the terminating `\0'.
*
*	RETURN VALUES
*	The function strchr() return a pointer to the located character, or
*	NULL if the character does not appear in the string.
*/

char	*ft_strchr(const char	*s, int	c)
{
	while (*s != '\0')
	{
		if ((char) c == *s)
			return ((char *)s);
		s++;
	}
	if ((char)c == *s)
		return ((char *)s);
	return (NULL);
}
