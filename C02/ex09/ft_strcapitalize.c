/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:27:13 by frubio-i          #+#    #+#             */
/*   Updated: 2024/05/11 17:09:11 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	*ft_checktomin(char *str)
{
	int	minus;

	minus = 0;
	while (str[minus] != '\0')
	{
		if ((str[minus] >= 'A') && (str[minus] <= 'Z'))
		{
			str[minus] = str[minus] + 32;
		}
		minus++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_checktomin(str);
	while (str[i] != '\0')
	{
		if ((str[0] >= 'a') && (str[0] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		if ((((str[i] >= 32) && (str[i] <= 47))
				|| ((str[i] >= 58 && str[i] <= 64))
				|| ((str[i] >= 91) && (str[i] <= 96))
				|| ((str[i] >= 123) && (str[i] <= 126)))
			&& ((str[i + 1] >= 'a') && (str[i + 1] <= 'z')))
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
/*
int    main (void)
{
    char    str[] = "salut, !comment tu vas ? 
	^42mots ~quarante-[deux; cinquante+et+un";
    printf("La frase es: %s\n", str);
	ft_strcapitalize(str);
    printf("La frase corregida es: %s\n", str);
    return (0);
}*/
