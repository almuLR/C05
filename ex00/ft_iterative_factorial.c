/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:21:46 by almlopez          #+#    #+#             */
/*   Updated: 2024/11/21 16:17:08 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	if (nb >= 0)
	{
		int	i;
		int	m;

		i = 1;
		m = 1;
		while(m < nb)
		{
			i = i * (m + 1);
			m++;
		}
		return (i);
	}
	return(0);
}
/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(0));
	return(0);
}*/
