/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:30:17 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:21:44 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a substring from the string ’s’.
*	The substring begins at index ’start’ and is of maximum size ’len’.
*
*	RETURN VALUES
*	The substring. NULL if the allocation fails.
*/

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	char			*substr;
	unsigned int	idx;
	size_t			count;
	size_t			len_start;

	idx = start;
	count = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	len_start = ft_strlen(s + start);
	if (len_start < len)
		len = len_start;
	substr = (char *) malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (count < len && s[idx] != '\0')
	{
		substr[count] = s[idx];
		idx++;
		count++;
	}
	substr[count] = '\0';
	return (substr);
}
