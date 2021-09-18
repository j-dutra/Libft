/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:58:57 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:20:33 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The toupper() function converts a lower-case letter to the corresponding
*	upper-case letter.  The argument must be representable as an unsigned
*	char or the value of EOF.
*
*	RETURN VALUES
*	If the argument is a lower-case letter, the toupper() function returns
*	the corresponding upper-case letter if there is one; otherwise, the
*	argument is returned unchanged.
*/

int	ft_toupper(int	c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
