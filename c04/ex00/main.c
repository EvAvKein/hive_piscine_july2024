/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:20:34 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/05 12:20:58 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int main()
{
    printf("%d = 11\n", ft_strlen("Hello World"));
    printf("%d = 6\n", ft_strlen("Hello "));
    printf("%d = 0\n", ft_strlen(""));
    return 0;
}
