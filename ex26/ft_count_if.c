/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:36:04 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/10 23:31:16 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	base;

	i = 0;
	sign = 1;
	base = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		base = base * 10 + (str[i] -'0');
		i++;
	}
	if (sign % 2 == 0)
		return (base * -1);
	return (base);
}*/
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			y++;
		i++;
	}
	return (y);
}
/*
#include <stdio.h>

int	main(void)
{
	char *tab[] = { "70", "1","1", "360", 0};

	printf("%d",ft_count_if(tab, &ft_atoi));
}*/
