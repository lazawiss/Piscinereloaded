/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:40:21 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/08 20:33:53 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb >= 13)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	nb *= ft_recursive_factorial(nb -1);
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
			printf("%d",ft_recursive_factorial(atoi(&arv[1][i])));
		}
	}
	return (0);
}*/
