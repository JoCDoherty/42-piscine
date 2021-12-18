/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:09:04 by jdoherty          #+#    #+#             */
/*   Updated: 2021/12/14 11:04:35 by jdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*pointer;
	int	number;

	number = 0;
	pointer = malloc(sizeof(int *) * (max - min));
	if (min >= max)
	{
		pointer = NULL;
		return (NULL);
	}
	else if (pointer == NULL)
	{
		pointer = NULL;
		return (NULL);
	}
	while (max > min)
	{
		pointer[number++] = ++min - 1;
	}
	return (pointer);
}
