/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakgul <esakgul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:02:42 by esakgul           #+#    #+#             */
/*   Updated: 2025/03/13 12:06:35 by esakgul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	str = malloc (sizeof(int) * size);
	while (i < size)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
