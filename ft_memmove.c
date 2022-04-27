/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:37:08 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/11/25 14:02:14 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The memmove() function copies len bytes from string src to string dst.
*	The two strings may overlap; the copy is always done in a
*	non-destructive manner.
*
*	RETURN VALUES
*	The memmove() function returns the original value of dst.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*destine;
	const char	*source;

	destine = dst;
	source = src;
	if (!dst && !src)
		return (NULL);
	if (source < destine && destine < source + len)
	{
		destine += len;
		source += len;
		while (len--)
			*--destine = *--source;
	}
	else
	{
		while (len > 0)
		{
			*destine++ = *source++;
			len--;
		}
	}
	return (dst);
}
