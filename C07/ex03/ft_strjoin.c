/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:58:53 by jdoherty          #+#    #+#             */
/*   Updated: 2021/12/14 13:55:25 by jdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*pointer;
	int		i;
	int		j;
	int		n;
	int		str_counter;

	i = 0;
	j = 0;
	n = 0;
	str_counter = 1;
	while (i < size)
		str_counter += ft_strlen(strs[i++]) + ft_strlen(sep);
	pointer = malloc(sizeof(char *) * str_counter);
	i = -1;
	while (++i < size)
	{
		while (strs[i][j] != '\0')
			pointer[n++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			pointer[n++] = sep[j++];
		j = 0;
	}
	pointer[n] = '\0';
	return (pointer);
}
