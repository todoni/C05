/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 04:03:06 by sohan             #+#    #+#             */
/*   Updated: 2021/04/04 04:42:58 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{	
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return nb * ft_recursive_power(nb, power - 1);
}

int main()
{
	printf("%d\n", ft_recursive_power(2,10));
	return 0;
}
