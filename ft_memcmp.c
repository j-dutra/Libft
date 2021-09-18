/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:54:24 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:15:02 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The memcmp() function compares byte string s1 against byte string s2.
*	Both strings are assumed to be n bytes long.
*
*	RETURN VALUES
*	The memcmp() function returns zero if the two strings are identical,
*	otherwise returns the difference between the first two differing bytes
*	(treated as unsigned char values, so that `\200' is greater than `\0',
*	for example). Zero-length strings are always identical. This behavior
*	is not required by C and portable code should only depend on the sign
*	of the returned value.
*/

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	if (n == 0)
		return (0);
	while (*(unsigned char *)s1 == *(unsigned char *)s2 && --n)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
