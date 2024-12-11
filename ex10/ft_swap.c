/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:47:33 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/06 23:07:19 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	i = 5;
	int	j = 6;
	int	*a = &i;
	int	*b = &j;
	printf("a =%d, b =%d\n", *a, *b);
	ft_swap(a, b);
	printf("a =%d, b =%d\n", *a, *b);
	return (0);
}*/
