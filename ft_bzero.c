/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 23:52:20 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:53:14 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The bzero() function writes n zeroed bytes to the string s.  
*	If n is zero, bzero() does nothing.
*
*	PARAMETERS
*	#1. The pointer from which to begin erasing data.
*	#2. The number of bytes to erase.
*
*	RETURN VALUES
*	- 
*/

void	ft_bzero(void	*s, size_t	n)
{
	size_t			idx;
	unsigned char	*str;

	idx = 0;
	str = (unsigned char *) s;
	while (idx < n)
	{
		str[idx] = 0;
		idx++;
	}
}
