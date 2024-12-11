/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 00:16:04 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/10 21:34:41 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	a(int	n)
{
	printf("%d\n", n);
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
 
int	main(void)
{
	int	tab[] = { 56,2,3,85};
	ft_foreach(tab, 7, &a);
}*/
