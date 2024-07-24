/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:10:12 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/10 17:14:54 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_is_prime(int nb);

int     main()
{
        printf("1 is prime: %d\n", ft_is_prime(1));
        printf("2 is prime: %d\n", ft_is_prime(2));
        printf("4 is prime: %d\n", ft_is_prime(4));
        printf("5 is prime: %d\n", ft_is_prime(5));
        printf("10 is prime: %d\n", ft_is_prime(10));
        printf("11 is prime: %d\n", ft_is_prime(11));
        printf("12 is prime: %d\n", ft_is_prime(12));
        printf("13 is prime: %d\n", ft_is_prime(13));
        printf("41 is prime: %d\n", ft_is_prime(41));
}
