/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:21:57 by almlopez          #+#    #+#             */
/*   Updated: 2024/11/22 14:16:23 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{       if (nb >= 0)
        {
                int     n;

                n = 0;
                while (n < nb)
                {
                        if (n * n != nb)
                        {
                                n++;
                        }
                        else
                        {
                                return (n);
                        }
                }

        }
        return(0);
}
#include <stdio.h>
int main()
{
        printf("%d\n", ft_sqrt(16));
        printf("%d\n", ft_sqrt(4));
        printf("%d\n", ft_sqrt(0));
        printf("%d\n", ft_sqrt(5));
        printf("%d\n", ft_sqrt(-2));
}
