/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:05:37 by jdoherty          #+#    #+#             */
/*   Updated: 2021/12/14 11:06:24 by jdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int *) * (max - min));
	if (!(*range))
	{
		return (-1);
	}
	while (min < max)
	{
		(*range)[i++] = min++;
	}
	return (i);
}
/*
int main() 
{
	int i;
	int *test;
	int rangesize;

	i = 0;
	rangesize = ft_ultimate_range(&test, 1, 20);
	//size of range is hardcoded...
	while (i < 19)
	{
		if (i < 18)
		{		
			printf("%d,", test[i]);
		}
		else
		{
			printf("%d", test[i]);
		}
		i++;
	}
}
*/
