# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 19:58:31 by aursuare          #+#    #+#              #
#    Updated: 2024/07/30 21:37:13 by aursuare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAG = -Wall -Wextra -Werror

SRC = ft_memset.c		\
		  		ft_memmove.c	\
		  		ft_memchr.c		\
		  		ft_memcmp.c		\
		  		ft_memcpy.c		\
		  		ft_memcpy.c		\
		  		ft_bzero.c		\
		  		ft_atoi.c		\
		  		ft_strlen.c		\
		  		ft_strlcpy.c	\
		  		ft_strlcat.c	\
		 	 	ft_strchr.c		\
		 		ft_strrchr.c	\
		  		ft_strnstr.c	\
				ft_strncmp.c	\
		  		ft_isalnum.c	\
		  		ft_isdigit.c	\
		  		ft_isalpha.c	\
		  		ft_isascii.c	\
		 		ft_isprint.c	\
		  		ft_tolower.c	\
		  		ft_toupper.c	\
		  		ft_calloc.c		\
		  		ft_strdup.c		\
				ft_itoa.c		\
				ft_substr.c		\
				ft_strjoin.c	\
				ft_strtrim.c	\
				ft_split.c		\
				ft_strmapi.c	\
				ft_putchar_fd.c	\
				ft_putstr_fd.c	\
				ft_putendl_fd.c	\
				ft_putnbr_fd.c	\
				ft_striteri.c	

// Regla para definir que los .o dependen de su .c
OBJ = ${SRC:.c=.o}

all: $(NAME)

// Regla para compilar el ejecutable
// lo de detras del OBJ es para incluir el .h y el makefile a los relinks
$(NAME): $(OBJ) libft.h Makefile
// AR crea la libreria:
//	r = reemplaza o agrega archivos
//	c = crea la libreria si no existe
//	s = Indexa la libreria
	$(AR) rcs $(NAME) $(OBJ)
//  Genera/actualiza el indice de la biblioteca estatica (.a)
//		El indice enlaza todos los simbolos dentro de la biblioteca
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
