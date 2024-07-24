/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:10:12 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/10 18:23:13 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_find_next_prime(int nb);

int     main()
{
        printf("prime at/after 1: %d\n", ft_find_next_prime(1));
        printf("prime at/after 4: %d\n", ft_find_next_prime(4));
        printf("prime at/after 8: %d\n", ft_find_next_prime(8));
        printf("prime at/after 13: %d\n", ft_find_next_prime(13));
        printf("prime at/after 17: %d\n", ft_find_next_prime(17));
        printf("prime at/after 56: %d\n", ft_find_next_prime(56));
        printf("prime at/after 62: %d\n", ft_find_next_prime(62));
        printf("prime at/after 300: %d\n", ft_find_next_prime(300));
        printf("prime at/after 985: %d\n", ft_find_next_prime(985));
}

