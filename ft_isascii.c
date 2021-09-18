/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:36:30 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:11:50 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The isascii() function tests for an ASCII character, which is any
*	character between 0 and octal 0177 inclusive.
*/

int	ft_isascii(int	c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
