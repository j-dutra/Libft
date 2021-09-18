/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:06:15 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:22:30 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	The strrchr() function locates the last occurrence of c (converted to a
*	char) in the string pointed to by s.  The terminating null character is
*	considered to be part of the string; therefore if c is `\0', the
*	function locate the terminating `\0'.
*
*	RETURN VALUES
*	The function strrchr() return a pointer to the located character, or
*	NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	ch;

	ch = (unsigned char)c;
	len = ft_strlen((char *)s);
	if (ch == '\0')
		return ((char *)(&s[len]));
	while (--len >= 0)
	{
		if (s[len] == ch)
			return ((char *)(&s[len]));
	}
	return (NULL);
}
