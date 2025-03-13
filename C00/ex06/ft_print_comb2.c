/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakgul <esakgul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 12:39:30 by esakgul           #+#    #+#             */
/*   Updated: 2025/02/22 19:59:03 by esakgul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	ft_decision(char c, int n)
{
	char	result;

	result = 0;
	if (n == 0)
	{
		result = c / 10 + '0';
	}
	else
	{
		result = c % 10 + '0';
	}
	return (result);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(ft_decision(a, 0));
			ft_putchar(ft_decision(a, 1));
			ft_putchar(' ');
			ft_putchar(ft_decision(b, 0));
			ft_putchar(ft_decision(b, 1));
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
