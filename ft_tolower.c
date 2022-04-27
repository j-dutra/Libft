/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:58:45 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/11/25 14:05:28 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The tolower() function converts an upper-case letter to the
*	corresponding lower-case letter.  The argument must be representable as
*	an unsigned char or the value of EOF.
*
*	RETURN VALUES
*	If the argument is an upper-case letter, the tolower() function returns
*	the corresponding lower-case letter if there is one; otherwise, the
*	argument is returned unchanged.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
