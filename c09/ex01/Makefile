# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/14 08:46:38 by REDACTED           #+#    #+#              #
#    Updated: 2024/07/14 16:00:27 by REDACTED          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

result_file = libft.a

src_files = $(wildcard srcs/*.c)
object_files = $(wildcard srcs/*.o)

header_files = $(wildcard includes/*.h)
compiled_headers = $(wildcard includes/*.gch)


all:
	make libft.a

libft.a:
	cc -c -Wall -Wextra -Werror $(src_files) $(header_files) && ar rcsv ${result_file} $(object_files) $(compiled_headers) && mv *.o srcs/

clean:
	rm ${object_files} && rm ${compiled_headers}

fclean:
	make clean && rm $(result_file)

re: 
	make fclean && make all

