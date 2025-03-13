/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakgul <esakgul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 06:46:47 by esakgul           #+#    #+#             */
/*   Updated: 2025/03/11 08:18:54 by esakgul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	swap(char **p1, char **p2)
{
	char	*temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	print_params(int argc, char *argv[])
{
	int	i;
	int	s;

	i = 1;
	while (i < argc)
	{
		s = 0;
		while (argv[i][s] != '\0')
		{
			ft_putchar(argv[i][s]);
			s++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	c;

	c = 1;
	while (c < argc - 1)
	{
		if (ft_strcmp(argv[c + 1], argv[c]) < 0)
		{
			swap(&argv[c], &argv[c + 1]);
			c = 1;
		}
		else
			c++;
	}
	print_params(argc, argv);
	return (0);
}
