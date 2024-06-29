/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:15:25 by frubio-i          #+#    #+#             */
/*   Updated: 2024/05/06 17:21:08 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main (void)
{
    //int n = 0;
    char dest[] = "Acho";
    char src[] = "Piscina";
    printf("La palabra a copiar es: %s\n", src);
    printf("La palabra a sobrescribir es: %s\n", dest);
	ft_strncpy(dest, src, 5);
    printf("La palabra copiada es: %s", dest);
    return (0);
}*/
