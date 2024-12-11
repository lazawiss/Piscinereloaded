/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 21:06:05 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/09 02:27:32 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	size = max - min;
	i = 0;
	tab = (int *) malloc((max - min) * (sizeof(int)));
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	if (min >= max)
		return (NULL);
	return (tab);
}
/*
#include <stdio.h>

int	main(int arc, char *arv[])
{
	int	*tab = ft_range(atoi(arv[1]),atoi(arv[2]));
	int	i;

	i = 0;
	if (arc == 3)
	{
		while (i < (atoi(arv[2]) - (atoi(arv[1]))))
		{
			printf("%d, ",tab[i]);
			i++;
		}
	}
	if (tab)
		free(tab);
	return (0);
}*/
