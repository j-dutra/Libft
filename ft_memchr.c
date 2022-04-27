/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 22:58:01 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/11/25 14:01:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The memchr() function locates the first occurrence of c (converted to
*	an unsigned char) in string s.
*
*	RETURN VALUES
*	The memchr() function returns a pointer to the byte located, or NULL if
*	no such byte exists within n bytes.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if ((unsigned char)c == *(unsigned char *)s)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
