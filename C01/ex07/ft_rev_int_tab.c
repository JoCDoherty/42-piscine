/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 07:58:27 by jdoherty          #+#    #+#             */
/*   Updated: 2021/11/30 12:52:52 by jdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	size--;
	while (index <= size)
	{
		temp = tab[index];
		tab[index] = tab[size];
		tab[size] = temp;
		index++;
		size--;
	}
}
