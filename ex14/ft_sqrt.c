/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:53:03 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/07 18:43:31 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	y;

	y = 1;
	while (y < nb / y)
		y++;
	if (y * y == nb)
		return (y);
	else
		return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int arc, char *arv[])
{
	int	i;

	i = 0;
	if (arc == 2)
	{
		if (arv[1][i])
		{
			printf("%d", ft_sqrt(atoi(&arv[1][i])));
		}
	}
	return (0);
}*/
