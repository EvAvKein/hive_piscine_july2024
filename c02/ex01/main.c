/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:22:22 by REDACTED             #+#    #+#             */
/*   Updated: 2024/07/03 14:34:10 by REDACTED            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main (void)
{
        int n = 100;

	char x[100] = "Destination";
	char y[100] = "Source";
        char o[100] = "Destination";
        char p[100] = "Source";

	strncpy(o, p, n);
        ft_strncpy(x, y, n);

        printf("This is what the strncpy function does:\n");
        printf("%s\n", o);
        printf("%s\n", p);
        printf("This is what my function does:\n");
        printf("%s\n", x);
        printf("%s\n", y);
        return (0);
}

