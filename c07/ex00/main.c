/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:56:05 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/16 14:59:18 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strdup(char *src);

int	main()
{
	char	*og;
	char	*dup;

	og = "abcd";
	dup = ft_strdup(og);

	printf("dup: %s\n", dup);
	printf("og addr: %p\ndup addr: %p", &og, &dup);
}
