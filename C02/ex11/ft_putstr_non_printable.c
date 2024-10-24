/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <frubio-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:32:11 by frubio-i          #+#    #+#             */
/*   Updated: 2024/05/09 12:08:58 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_print_non(char *str)
{
	write(1, "\\", 1);
	write(1, str, 2);
}

char *convert_to_hex(char c)
{
    static char hex[3]; 
	int decstr = c;
    int decdiv;

    hex[0] = '\\'; 
	while (decstr > 0)
    {
        decdiv = decstr % 16;
        if (decdiv < 10)
        {
            hex[1] = '0' + decdiv;
        }
        else
        {
            hex[1] = 'a' + decdiv - 10;
        }
        decstr = decstr / 16;
        hex[2] = '\0';
    }
    return hex;
}

void	ft_check_non_to_hex(char *str)
{
	process_non_printable(str);
}

char	ft_putstr_non_printable(char *str)
{
	while (*str!= '\0')
	{
		if (*str < 32 || *str == 127)
		{
			ft_check_non_to_hex(str);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
	return (*str);
}
/*
int    main (void)
{
    char    str[] = "Coucou\ntu vas bien?";
	ft_putstr_non_printable(str);
    return (0);
}*/
