/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:22:06 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:12:22 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The isdigit() function tests for a decimal digit character.  Regardless
*	of locale, this includes the following characters only:
*
*	``0''         ``1''         ``2''         ``3''         ``4''
*	``5''         ``6''         ``7''         ``8''         ``9''
*
*	The value of the argument must be representable as an unsigned char or
*	the value of EOF.
*
*	RETURN VALUES
*	The isdigit() function return zero if the character
*	tests false and return non-zero if the character tests true.
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
