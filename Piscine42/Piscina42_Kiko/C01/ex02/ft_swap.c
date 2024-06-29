/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:09:16 by frubio-i          #+#    #+#             */
/*   Updated: 2024/05/01 19:25:02 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int main(void)
{
	int a = 1;
	int b = 2;
    	
	printf("El valor de a antes del cambio es: %d\n", a);
	printf("El valor de b antes del cambio es: %d\n", b);
    ft_swap(&a, &b);
    printf("El valor de a es: %d\nEl valor de b %d", a, b);
    return (0);
}*/
