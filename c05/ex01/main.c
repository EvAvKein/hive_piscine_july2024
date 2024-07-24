/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 09:57:16 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/07 11:41:04 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main()
{
	printf("Factorial of -1: %d\n", ft_recursive_factorial(-1));
	printf("Factorial of 0: %d\n", ft_recursive_factorial(0));
	printf("Factorial of 1: %d\n", ft_recursive_factorial(1));
	printf("Factorial of 4: %d\n", ft_recursive_factorial(4));
	printf("Factorial of 7: %d\n", ft_recursive_factorial(7));
	printf("Factorial of 10: %d\n", ft_recursive_factorial(10));
}
