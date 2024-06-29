/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:26:02 by frubio-i          #+#    #+#             */
/*   Updated: 2024/05/01 20:38:11 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{

  	int a;
	int b;
	int res;
	int rest;

	a = 5;
	b = 2;
    ft_div_mod(a, b, &res, &rest);
	printf("El resultado de la division es: %d\n", res);
	printf("El resto de la division es: %d", rest);
    return (0);
}*/
