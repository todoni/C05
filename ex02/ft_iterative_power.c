/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 03:51:17 by sohan             #+#    #+#             */
/*   Updated: 2021/04/04 04:02:25 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int num;
	
	if (power < 0)
		return (0);
	else if (nb == 0 || power == 0)
		return (1);
	num = nb;
	while (--power)
	{
		nb = nb * num;
	}
	return (nb);
}

int main()
{
	printf("%d",ft_iterative_power(-2, 10));
	return 0;
}
