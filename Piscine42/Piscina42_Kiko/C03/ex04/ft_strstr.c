/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:39:13 by frubio-i          #+#    #+#             */
/*   Updated: 2024/05/13 21:36:08 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == *to_find)
		{
			while (str[i + j] != '\0' && str[i + j] == to_find[j])
			{
				j++;
			}
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
/*
int	main(void) 
{
	char	str[] = "Si pasamos la piscina, que la vamos a pasar...";
	char	to_find[] = "2";

	char	*res = ft_strstr(str, to_find);
	if (res) 
	{
		printf("%s\n", res);
	} 
	else 
	{
		printf("No se ha encontrado\n");
	}
	return 0;
}*/
