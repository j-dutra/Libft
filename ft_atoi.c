/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 21:35:00 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:51:45 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The atoi() function converts the initial portion of the string pointed to by 
*	str to int representation.
*
*	PARAMETERS
*	#1. The string to convert to integer.
*
*	RETURN VALUES
*	The atoi() function returns its converted int representation.
*/

int	ft_atoi(const char	*str)
{
	int	res;
	int	sign;
	int	idx;

	res = 0;
	sign = 1;
	idx = 0;
	while ((str[idx] >= 9 && str[idx] <= 13) || str[idx] == 32)
		idx++;
	if (str[idx] == '-' || str[idx] == '+')
	{
		if (str[idx] == '-')
			sign = -1;
		idx++;
	}
	while (ft_isdigit(str[idx]))
	{
		res = res * 10 + str[idx] - '0';
		idx++;
	}
	return (sign * res);
}
