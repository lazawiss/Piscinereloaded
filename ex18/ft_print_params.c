/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:33:40 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/08 13:24:41 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int arc, char *arv[])
{
	int	i;
	int	j;

	i = 1;
	if (arc > 1)
	{
		while (arv[i])
		{
			j = 0;
			while (arv[i][j])
			{
				ft_putchar(arv[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
