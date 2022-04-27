/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 23:26:08 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/11/25 14:02:29 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The memset() function writes len bytes of value c (converted to an
*	unsigned char) to the string b.
*
*	RETURN VALUES
*	The memset() function returns its first argument.
*/

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*su;
	size_t			idx;

	su = s;
	idx = 0;
	while (idx < len)
	{
		su[idx] = c;
		idx++;
	}
	return (s);
}
