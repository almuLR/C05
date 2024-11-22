/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:18:10 by almlopez          #+#    #+#             */
/*   Updated: 2024/11/22 14:06:25 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_recursive_power(int nb, int power)
{
	int	m;

	m = 1;	
	if (power >= 0)
	{
		if (power == 0)
		{
			return (1);
		}
		else
		{
			return (nb * ft_recursive_power(nb, power - 1));
		}
	}
	return (0);
}
#include <stdio.h>
int	main(){
	printf("%d\n", ft_recursive_power(0, 0));
        printf("%d\n", ft_recursive_power(3, 4));
        printf("%d\n", ft_recursive_power(2, 1));
        printf("%d\n", ft_recursive_power(-2, 2));
}
