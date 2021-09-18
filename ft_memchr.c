/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 22:58:01 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:14:34 by joluiz-d         ###   ########.fr       */
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

void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	while (n--)
	{
		if ((unsigned char)c == *(unsigned char *)s)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
