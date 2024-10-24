/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:11:16 by frubio-i          #+#    #+#             */
/*   Updated: 2024/05/06 23:20:23 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32) && (str[i] <= 126)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main (void)
{
	char	str[] = "achO";
	ft_str_is_printable(str);
	return (0);
}*/
