/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:57:58 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/11/25 14:03:47 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a new string, which
*	is the result of the concatenation of ’s1’ and ’s2’.
*
*	RETURN VALUES
*	The new string. NULL if the allocation fails.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len;
	size_t	idx;

	idx = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ((ft_strlen(s1) + ft_strlen(s2)) + 1);
	new_str = (char *) malloc(len * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (idx < len && *s1 != '\0')
	{
		new_str[idx] = *s1;
		s1++;
		idx++;
	}
	while (idx < len && *s2 != '\0')
	{
		new_str[idx] = *s2;
		s2++;
		idx++;
	}
	new_str[idx] = '\0';
	return (new_str);
}
