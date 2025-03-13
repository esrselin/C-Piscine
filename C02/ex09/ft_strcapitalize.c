/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakgul <esakgul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:02:08 by esakgul           #+#    #+#             */
/*   Updated: 2025/03/09 21:09:51 by esakgul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*p;
	int		word;

	word = 1;
	p = str;
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')
			|| (*str >= '0' && *str <= '9'))
		{
			if (*str >= 'a' && *str <= 'z' && word)
				*str -= 32;
			else if (!word && *str >= 'A' && *str <= 'Z')
				*str += 32;
			word = 0;
		}
		else
			word = 1;
		str++;
	}
	return (p);
}
