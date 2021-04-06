/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:55:10 by sohan             #+#    #+#             */
/*   Updated: 2021/04/07 00:59:44 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_sqrt(int nb)
{
	int square_root;

	square_root = 1;
	if (nb <= 0)
		return (0);
	while (square_root != nb / square_root)
	{
		if (square_root > nb / square_root)
			return (square_root - 1);
		square_root++;
	}
	return (square_root);
}

int	ft_is_prime(int nb)
{
	int n;
	int square_root_of_nb;

	n = 2;
	square_root_of_nb = ft_sqrt(nb);
	if (nb == 1 || nb <= 0)
		return (0);
	else if (nb == 2)
		return (1);
	while (nb % n != 0 && n <= square_root_of_nb)
	{
		n++;
	}
	if (nb % n == 0)
		return (0);
	return (1);
}

int main()
{	
	int i = -2147483648;
	//for (int i = 0; i <= 2147483647; ++i)
		if (ft_is_prime(i) == 1)
			printf("%d is a prime number.\n", i);
		else if (ft_is_prime(i) == 0)
			printf("%d is not a prime number.\n", i);
	//printf("%d\n",j);
	//else
		//printf("Unexpected Behavior.\n");
	
	return 0;
}
