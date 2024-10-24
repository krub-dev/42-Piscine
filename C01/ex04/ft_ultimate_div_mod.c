/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:53:45 by frubio-i          #+#    #+#             */
/*   Updated: 2024/05/01 22:36:52 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = x / *b;
	*b = x % *b;
}
/*
int main(void)
{
    
    int q;
    int w;

    q = 5;
    w = 2;
    ft_ultimate_div_mod(&q, &w);
    

    return (0);
}*/
