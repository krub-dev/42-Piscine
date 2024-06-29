/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:36:47 by frubio-i          #+#    #+#             */
/*   Updated: 2024/05/06 14:01:06 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main (void)
{
	
    char dest [] = "Hola";
    char src[] = "Piscina";
    printf("La palabra a copiar es: %s\n", src);
    *ft_strcpy(dest, src);
    printf("La palabra copiada es: %s", dest);
    return (0);
}
*/
