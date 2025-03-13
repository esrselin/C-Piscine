/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakgul <esakgul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:40:43 by esakgul           #+#    #+#             */
/*   Updated: 2025/03/11 07:19:08 by esakgul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (ac >= 2)
	{
		while (argv[i])
		{
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			j = 0;
			write(1, "\n", 1);
			i++;
		}
	}
}
