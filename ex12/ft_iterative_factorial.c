/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:38:05 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/08 20:39:54 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb >= 13)
		return (0);
	while (temp > 0)
	{
		nb *= temp;
		temp--;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int arc, char *arv[])
{
	int i;

	i = 0;
	if (arc == 2)
	{
		if (arv[1][i])
		{
			printf("%d",ft_iterative_factorial(atoi(&arv[1][i])));
		}
	}
	return (0);
}*/
