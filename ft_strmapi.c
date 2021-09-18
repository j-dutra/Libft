/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 23:26:20 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:23:41 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	Applies the function ’f’ to each character of the string ’s’ to create
*	a new string (with malloc(3)) resulting from successive applications of 
*	’f’.
*
*	RETURN VALUES
*	The string created from the successive applications of ’f’. Returns
*	NULL if the allocation fails.
*/

char	*ft_strmapi(char const	*s, char	(*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	idx;

	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(*new_str));
	if (new_str == NULL)
		return (NULL);
	idx = 0;
	while (s[idx] != '\0')
	{
		new_str[idx] = (*f)(idx, s[idx]);
		idx++;
	}
	new_str[idx] = '\0';
	return (new_str);
}
