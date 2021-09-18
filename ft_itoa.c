/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:20:08 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/09/17 22:13:46 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a string representing the
*	integer received as an argument. Negative numbers must be handled.
*
*	RETURN VALUES
*	The string representing the integer. NULL if the allocation fails.
*/

char	*ft_itoa(int	n)
{
	int		len;
	int		aux;
	char	*n_str;
	char	signal;

	len = 0;
	signal = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n *= -1;
		len++;
		signal = 1;
	}
	aux = n;
	while (n)
	{
		n = n / 10;
		len++;
	}
	n_str = (char *)malloc((len + 1) * sizeof(*n_str));
	if (n_str == NULL)
		return (NULL);
	n_str[len] = '\0';
	if (signal == 1)
		n_str[0] = '-';
	while (aux != 0)
	{
		n_str[--len] = aux % 10 + '0';
		aux =  aux / 10;
	}
	return (n_str);
}
