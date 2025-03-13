/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakgul <esakgul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 05:49:54 by esakgul           #+#    #+#             */
/*   Updated: 2025/03/11 06:16:59 by esakgul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{	
	int	i;

	i = 2;
	if (nb == 1 || nb == 0)
		return (0);
	if (nb > 0)
	{
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb >= 2147483647)
		return (0);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
