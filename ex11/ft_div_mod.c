/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:10:57 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/06 23:45:40 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	temp;

	temp = a;
	*div = a / b;
	*mod = temp % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 5;
	int	b = 2;
	int	*c = &a;
	int	*d = &b;
	ft_div_mod(a,b,c,d);
	printf("div =%d,mod =%d", *c, *d);
	return (0);
}*/
