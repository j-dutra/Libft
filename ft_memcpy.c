/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 00:13:17 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/11/25 14:02:05 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The memcpy() function copies n bytes from memory area src to memory
*	area dst.  If dst and src overlap, behavior is undefined.  Applications
*	in which dst and src might overlap should use memmove(3) instead.
*
*	RETURN VALUES
*	The memcpy() function returns the original value of dst.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*destine;
	unsigned char	*source;
	size_t			idx;

	destine = (unsigned char *) dst;
	source = (unsigned char *) src;
	idx = 0;
	if (!dst && !src)
		return (NULL);
	while (idx < n)
	{
		destine[idx] = source[idx];
		idx++;
	}
	return (dst);
}
