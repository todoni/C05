/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 01:02:56 by sohan             #+#    #+#             */
/*   Updated: 2021/04/07 01:19:46 by sohan            ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		nb = 0;
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}

int	main()
{
	printf("%d\n",ft_find_next_prime(998));
	return 0;
}
