/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:24:15 by jdoherty          #+#    #+#             */
/*   Updated: 2021/12/02 10:38:15 by jdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
			index++;
	}
	return (1);
}
