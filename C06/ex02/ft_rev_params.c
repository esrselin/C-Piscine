/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakgul <esakgul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:56:26 by esakgul           #+#    #+#             */
/*   Updated: 2025/03/11 07:07:27 by esakgul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **argv)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = ac - 1;
		j = 0;
		while (i > 0)
		{
			while (argv[i][j])
			{	
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			i--;
		}
	}
}
