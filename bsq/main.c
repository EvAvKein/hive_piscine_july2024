/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:21:10 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/15 13:54:58 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	file_path;
	int	file_size;
	char	*file_contents;

	if (!argc)
	{
		write(1, "No files provided", 17);
		return (1);
	}
	
	 = read(file_path);
	return (0);
}
