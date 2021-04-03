/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 04:43:53 by sohan             #+#    #+#             */
/*   Updated: 2021/04/04 06:17:38 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	//int fibo0;
	static int fibo1 = 1;
	static int fibo2 = 1;
	static int fibo0 = 0;
	
	printf("%d ", fibo2);
	if (index == 0)
		return (fibo2 + fibo1);
	//fibo1 = fibo2;
	fibo0 = fibo1;
	fibo1 = fibo2;	
	fibo2 = fibo2 + fibo1;
	return (ft_fibonacci(index - 1));

}

int main()
{
	printf("%d\n", ft_fibonacci(10));
	return  0;
}
