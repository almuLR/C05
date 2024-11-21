/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:18:10 by almlopez          #+#    #+#             */
/*   Updated: 2024/11/21 17:30:01 by almlopez         ###   ########.fr       */
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
			m = nb * 1;
		}
		if(power == 1)
		{
			return (ft_recursive_power(m, power - 1));
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
