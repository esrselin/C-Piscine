/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakgul <esakgul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:31:41 by esakgul           #+#    #+#             */
/*   Updated: 2025/03/13 11:16:35 by esakgul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*temp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	size = max - min;
	temp = malloc (sizeof(int) * size);
	if (temp == NULL)
	{
		*range = 0;
		return (-1);
	}	
	*range = temp;
	while (i < size)
	{
		temp[i] = min + i;
		i++;
	}
	return (size);
}
