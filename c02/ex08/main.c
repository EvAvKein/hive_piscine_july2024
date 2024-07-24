/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:29:05 by REDACTED             #+#    #+#             */
/*   Updated: 2024/07/06 17:17:52 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strlowcase(char *str);

int main (void)
{
	char a[] = "I DoN't HaVe UpPeR CaSeS";
	printf("%s\n", ft_strlowcase(a));
}
