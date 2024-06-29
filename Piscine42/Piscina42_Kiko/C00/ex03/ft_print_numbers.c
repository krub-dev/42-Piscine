/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:39:32 by frubio-i          #+#    #+#             */
/*   Updated: 2024/04/30 16:09:56 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		x;
	char	c;

	x = 0;
	while (x <= 9)
	{
		c = x + '0';
		write(1, &c, 1);
		x++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
