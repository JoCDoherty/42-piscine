/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:51:53 by jdoherty          #+#    #+#             */
/*   Updated: 2021/12/02 10:46:30 by jdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	upper_alpha(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	number_check(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	lower_alpha(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	

int	alphanumeric(char c)
{
	if (upper_alpha(c) || number_check(c) || lower_alpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word_begin;

	i = 0;
	word_begin = 1;
	while (str[i] != '\0')
	{
		if (word_begin)
		{
			if (lower_alpha(str[i]))
				str[i] = str[i] - 32;
		}
		else
		{
			if (upper_alpha(str[i]))
				str[i] = str[i] + 32;
		}
		if (alphanumeric(str[i]))
				word_begin = 0;
		else
				word_begin = 1;
		++i;
	}
	return (str);
}
