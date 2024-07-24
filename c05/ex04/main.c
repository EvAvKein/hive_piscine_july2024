/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:15:38 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/09 16:37:55 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main()
{
	printf("Fib: %d\n", ft_fibonacci(0));
	printf("Fib of 1: %d\n", ft_fibonacci(1));
	printf("Fib of 4: %d\n", ft_fibonacci(4));
	printf("Fib of 6: %d\n", ft_fibonacci(6));
	printf("Fib of 9: %d\n", ft_fibonacci(9));
	printf("Fib of 13: %d\n", ft_fibonacci(13));
}
