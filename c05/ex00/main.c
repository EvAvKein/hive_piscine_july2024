/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 09:57:16 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/07 10:03:34 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main()
{
	printf("Factorial of -1: %d\n", ft_iterative_factorial(-1));
	printf("Factorial of 0: %d\n", ft_iterative_factorial(0));
	printf("Factorial of 1: %d\n", ft_iterative_factorial(1));
	printf("Factorial of 4: %d\n", ft_iterative_factorial(4));
	printf("Factorial of 7: %d\n", ft_iterative_factorial(7));
	printf("Factorial of 10: %d\n", ft_iterative_factorial(10));
}
