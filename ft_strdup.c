/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:06:37 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:27:58 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	The strdup() function allocates sufficient memory for a copy of the
*	string s1, does the copy, and returns a pointer to it. The pointer may
*	subsequently be used as an argument to the function free(3).
*
*	If insufficient memory is available, NULL is returned and errno is set
*	to ENOMEM.
*/

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	size_t	size;
	char	*ptr;
	size_t	idx;

	idx = 0;
	size = 0;
	while (s1[size] != '\0')
		size++;
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (idx < size)
	{
		ptr[idx] = s1[idx];
		idx++;
	}
	ptr[size] = '\0';
	return (ptr);
}
