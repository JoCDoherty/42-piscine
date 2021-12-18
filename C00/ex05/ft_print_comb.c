/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 06:36:20 by jdoherty          #+#    #+#             */
/*   Updated: 2021/11/30 11:39:54 by jdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	num_one;
	int	num_two;
	int	num_three;		

	num_one = 47;
	while (num_one++ < 57)
	{
		num_two = num_one;
		while (num_two++ <= 57)
		{
			num_three = num_two;
			while (num_three++ < 57)
			{
				write(1, &num_one, 1);
				write(1, &num_two, 1);
				write(1, &num_three, 1);
				if (num_one != 55)
					write(1, ", ", 2);
			}
		}
	}
}
