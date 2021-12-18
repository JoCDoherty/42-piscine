/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:47:47 by jdoherty          #+#    #+#             */
/*   Updated: 2021/12/07 12:28:47 by jdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	output;

	output = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb)
	{
		output *= nb--;
	}
	return (output);
}
