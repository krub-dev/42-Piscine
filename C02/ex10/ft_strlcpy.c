/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 19:06:54 by frubio-i          #+#    #+#             */
/*   Updated: 2024/05/11 19:51:34 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	isrc;

	i = 0;
	isrc = 0;
	while (src[isrc] != '\0')
	{
		isrc++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (isrc);
}
/*
int main (void)
{
    char dest [] = "Hola";
    char src [] = "World!"; 
	printf("%u", ft_strlcpy(dest, src, 10));
	return (0);	
}*/
