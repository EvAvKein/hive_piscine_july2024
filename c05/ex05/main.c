/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:50:42 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/10 16:57:50 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_sqrt(int nb);

int     main()
{
        printf("Sqrt of -1: %d\n", ft_sqrt(-1));
        printf("Sqrt of 0: %d\n", ft_sqrt(0));
        printf("Sqrt of 1: %d\n", ft_sqrt(1));
        printf("Sqrt of 2: %d\n", ft_sqrt(2));
        printf("Sqrt of 4: %d\n", ft_sqrt(4));
        printf("Sqrt of 8: %d\n", ft_sqrt(8));
        printf("Sqrt of 9: %d\n", ft_sqrt(9));
        printf("Sqrt of 40: %d\n", ft_sqrt(40));
        printf("Sqrt of 54: %d\n", ft_sqrt(64));
}
