/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:11:13 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:25:10 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	
*	DESCRIPTION
*	The strlcat() function concatenate strings with the same input
*	parameters and output result as snprintf(3).  It is designed to be
*	safer, more consistent, and less error prone replacements for the
*	easily misused function strncat(3).
*
*	The strlcat() take the full size of the destination buffer and
*	guarantee NUL-termination if there is room.  Note that room for the NUL
*	should be included in dstsize.
*
*	The strlcat() appends string src to the end of dst.  It will append at
*	most dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate,
*	unless dstsize is 0 or the original dst string was longer than dstsize
*	(in practice this should not happen as it means that either dstsize is
*	incorrect or that dst is not a proper string).
*
*	If the src and dst strings overlap, the behavior is undefined.
*
*	RETURN VALUES
*	Like snprintf(3), the strlcat() function return the total length of the
*	string they tried to create, that means the initial length of dst plus
*	the length of src.
*
*	If the return value is >= dstsize, the output string has been
*	truncated.  It is the caller's responsibility to handle this.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index_src;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen((char *)src);
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	index_src = 0;
	while (src[index_src] != '\0' && dstsize > (len_dst + 1))
	{
		dst[len_dst] = src[index_src];
		index_src++;
		len_dst++;
	}
	dst[len_dst] = '\0';
	return (len_dst + ft_strlen((char *)(&src[index_src])));
}
