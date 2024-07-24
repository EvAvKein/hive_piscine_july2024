/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:55:45 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/01 09:01:44 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

//int	main()
//{
//	int a = 10;
//	int b = 3;

//	int *pa;
//	int *pb;

//	pa = &a;
//	pb = &b;

//	ft_ultimate_div_mod(pa, pb);

//	printf("%d\n%d", a, b);
//	return 0;
//}
