/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:46:07 by sohan             #+#    #+#             */
/*   Updated: 2021/04/06 20:52:57 by sohan            ###   ########.fr       */
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
			return (0);
		square_root++;
	}
	return (square_root);
}

int main()
{
	printf("%d\n",ft_sqrt(0));
	return 0;
}

