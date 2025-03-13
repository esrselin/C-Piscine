/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakgul <esakgul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 01:53:41 by esakgul           #+#    #+#             */
/*   Updated: 2025/03/11 06:03:50 by esakgul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (nb > 0)
		{
			n = n * nb;
			nb --;
		}
		return (n);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
