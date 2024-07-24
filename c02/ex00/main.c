/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:10:35 by REDACTED             #+#    #+#             */
/*   Updated: 2024/07/06 17:12:09 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main (void)
{
        char o[] = "Destination";
        char p[] = "Source";
	char x[] = "Destination";
	char y[] = "Source";

        strcpy (o, p);
	ft_strcpy (x, y);

        printf("This is what the strcpy function does:\n");
        printf("%s\n", o);
        printf("%s\n", p);
        printf("This is what my function does:\n");
        printf("%s\n", x);
        printf("%s\n", y);
        return 0;
}

