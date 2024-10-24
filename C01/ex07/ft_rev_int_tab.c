/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 05:10:27 by frubio-i          #+#    #+#             */
/*   Updated: 2024/05/02 06:19:36 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = tab[0];
	tab[0] = tab[size - 1];
	tab[size - 1] = i;
}
/*	tab[3] = (int) [0, 2, 4];
	i = 0;

	while (i < size)
	{
		i++;
	}
}

int main(void)
{
    int tab[] = {0, 2, 4};
	int size = 3;
    ft_rev_int_tab(tab, size);
	printf("El numero es 024, su inverso es: %d %d %d",tab[1, 2, 3]);
	return (0);
}*/
