# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 16:05:42 by akdovlet          #+#    #+#              #
#    Updated: 2023/09/15 22:16:19 by akdovlet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

SRCS = ft_atoi.c		\
	ft_isascii.c		\
	ft_isalnum.c		\
	ft_isalpha.c		\
	ft_isdigit.c		\
	ft_isprint.c		\
	ft_split.c			\
	ft_strjoin.c		\
	ft_strdup.c			\
	ft_strlcpy.c		\
	ft_strlcat.c		\
	ft_strlen.c			\
	ft_strnstr.c		\
	ft_tolower.c		\
	ft_toupper.c		\
	ft_itoa.c			\
	ft_memcmp.c			\
	ft_memcpy.c			\
	ft_putstr_fd.c		\
	ft_putchar_fd.c		\
	ft_putnbr_fd.c		\
	ft_calloc.c			\
	ft_putendl_fd.c		\
	ft_strncmp.c		\
	ft_bzero.c			\
	ft_strchr.c			\
	ft_strrchr.c		\
	ft_memmove.c 		\
	ft_memset.c 		\
	ft_memchr.c 		\
	ft_substr.c 		\
	ft_strmapi.c 		\
	ft_striteri.c 		\
	ft_strtrim.c

BONUS = ft_lstnew.c 	\
	ft_lstadd_front.c	\
	ft_lstsize.c		\
	ft_lstlast.c		\
	ft_lstadd_back.c	\
	ft_lstdelone.c		\
	ft_lstclear.c		\
	ft_lstiter.c		\
	ft_lstmap.c

define AK
          :::     :::    :::   :::     :::::::: 
       :+: :+:   :+:   :+:   :+:     :+:    :+: 
     +:+   +:+  +:+  +:+   +:+ +:+        +:+   
   +#++:++#++: +#++:++   +#+  +:+      +#+      
  +#+     +#+ +#+  +#+ +#+#+#+#+#+  +#+         
 #+#     #+# #+#   #+#      #+#   #+#           
###     ### ###    ###     ###  ##########      
 
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣠⣦⣤⣴⣤⣤⣄⣀⣀⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣤⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡀⠀⠀⣀⣀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣛⣛⣻⣿⣦⣀⠀⢀⣀⣀⣏⣹⠀
⢠⣶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠭⠭⠽⠽⠿⠿⠭⠭⠭⠽⠿⠿⠛
⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠛⠉⢻⣿⣿⣿⡟⠏⠉⠉⣿⢿⣿⣿⣿⣇⠀⠀⠀⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⣿⣿⣿⣿⣿⣿⣿⡿⠿⠛⠉⠁⠀⠀⠀⢠⣿⣿⣿⠋⠑⠒⠒⠚⠙⠸⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⣿⣿⡿⠿⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⡿⠃⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠛⠛⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣿⣿⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⢿⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
endef
export AK

CC = cc

CCFLAGS = -Wall -Werror -Wextra

RM = rm -f

OBJS := ${SRCS:.c=.o}

BONUSOBJS := ${BONUS:.c=.o}

all: title ${NAME}

${NAME}: title ${OBJS}
	@ar rc ${NAME} ${OBJS}

%.o:%.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

bonus: ${OBJS} ${BONUSOBJS}
	ar rc $(NAME) ${OBJS} ${BONUSOBJS}

title:
	@echo "$$AK"

clean:
	@${RM} ${OBJS}
	@echo "\033[0;32mObject files have been deleted\033[0m"

fclean: clean
	@${RM} ${NAME}
	@echo "\033[0;32mArchive file ${NAME} has been deleted\033[0m"

re: fclean all

.PHONY:
	clean all fclean re bonus title
