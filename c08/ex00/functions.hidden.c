/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hidden.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:31:42 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/12 11:50:25 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_swap(int *a, int *b)
{
        int             temp;

        temp = *a;
        *a = *b;
        *b = temp;
}

int     ft_strlen(char *str)
{
        int             i;

        i = 0;
        while (str[i])
                i++;
        return (i);
}

void    ft_putstr(char *str)
{
        write(1, str, ft_strlen(str));
}

int     ft_strcmp(char *s1, char *s2)
{
        int             i;

        i = 0;
        while (s1[i])
        {
                if ((s1[i] - s2[i]) != 0)
                {
                        return (s1[i] - s2[i]);
                }
                i++;
        }
        if (s2[i])
        {
                return (-1);
        }
        return (0);
}
