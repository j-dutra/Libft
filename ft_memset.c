/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 23:26:08 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:17:15 by joluiz-d         ###   ########.fr       */
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

void	*ft_memset(void	*s, int	c, size_t	len)
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
