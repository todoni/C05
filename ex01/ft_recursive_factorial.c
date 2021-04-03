/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 03:30:52 by sohan             #+#    #+#             */
/*   Updated: 2021/04/04 03:47:25 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb  == 1 || nb == 0)
		return (1);
	return nb * ft_recursive_factorial(nb - 1);
}

int main()
{
	printf("%d\n", ft_recursive_factorial(10));
	return 0;
}
