/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 13:29:36 by frubio-i          #+#    #+#             */
/*   Updated: 2024/05/12 01:15:17 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	char	s1[] = "Pijo";
	char	s2[] = "Acho";
	int		rescmp;

	rescmp = ft_strcmp (s1, s2);

	if (rescmp == 0)
	{
		printf("son iguales\n");
	}
	else if (rescmp < 0)
	{
		printf("cadena1 < cadena2\n");
	}
	else
	{
		printf("cadena1 > cadena2\n");
	}
	return (0);
}*/
