/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:21:40 by lzannis           #+#    #+#             */
/*   Updated: 2024/11/08 17:26:10 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}	

void	ft_sort(char *str[], int n)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n - i)
		{
			if (ft_strcmp(str[j], str[j +1]) > 0)
			{
				temp = str[j];
				str[j] = str[j +1];
				str[j +1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int arc, char *arv[])
{
	int	i;
	int	j;

	i = 1;
	ft_sort(arv, arc - 1);
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
