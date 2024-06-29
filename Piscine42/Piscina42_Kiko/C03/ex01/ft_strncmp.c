/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 01:18:19 by frubio-i          #+#    #+#             */
/*   Updated: 2024/05/12 04:17:08 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char	s1[] = "QSF";
	char	s2[] = "AAAAAASA";
	int		resncmp;

	resncmp = ft_strncmp(s1, s2, 10);

	if (resncmp == 0)
	{
		printf("son iguales\n");
	}
	else if (resncmp < 0)
	{
		printf("cadena1 < cadena2\n");
	}
	else
	{
		printf("cadena1 > cadena2\n");
	}
	return (0);
}*/
