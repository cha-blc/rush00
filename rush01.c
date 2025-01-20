/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shessoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:06:38 by shessoun          #+#    #+#             */
/*   Updated: 2025/01/18 17:36:29 by tgremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y && y < 2147483647)
	{
	j = 1;
		while (j <= x && x < 2147483647)
		{
			if ((i == 1 && j == 1) || (i == y && j == x && i != 1 && j != 1))
				ft_putchar('/');
			else if ((i > 1 && i < y && j == 1) || (j > 1 && j < x && i == 1))
				ft_putchar('*');
			else if ((i > 1 && i < y && j == x) || (j > 1 && j < x && i == y))
				ft_putchar('*');
			else if ((i == y && j == 1) || (i == 1 && j == x))
				ft_putchar(92);
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
