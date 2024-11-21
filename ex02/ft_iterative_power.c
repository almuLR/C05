/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:12:43 by almlopez          #+#    #+#             */
/*   Updated: 2024/11/21 16:37:42 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	if (power >= 0)
	{
		int m;
		int i;

		i = 0;
		m = 0;
		if (nb == 0 || power == 0)
			return (1);
		while (i < power)
		{
			if( i == 0)
			{
				m = nb * 1;
			}
			if ( i == 1)
			{
				m = nb * nb;
			}
			else
			{
				m = nb * m;
			}
			i++;
		}
		return(m);
	}
	return (0);
}
/*#include <stdio.h>
int	main(){
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(3, 4));
	printf("%d\n", ft_iterative_power(2, 1));
	printf("%d\n", ft_iterative_power(-2, 2));
}*/
