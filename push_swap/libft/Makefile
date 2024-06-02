# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matemart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 20:29:24 by matemart          #+#    #+#              #
#    Updated: 2024/06/02 21:17:17 by matemart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = src/
OBJ_DIR = obj/
LIB_DIR = lib/
INC_DIR = include/
LIBNAME = $(LIB_DIR)$(NAME)

SRC = $(wildcard $(SRC_DIR)*.c)
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
IFLAGS = -I.

TOTAL_FILES 	:= $(words $(SRC))
CURRENT_FILE 	:= 0

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
	$(call progress_bar_libft)

all: $(LIBNAME)

$(LIBNAME): $(OBJ)
	@mkdir -p $(LIB_DIR)
	@ar rc $(LIBNAME) $(OBJ)

clean:
	@$(RM) $(OBJ)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@$(RM) $(LIBNAME)
	@rm -rf $(LIB_DIR)

re: fclean all

.PHONY: all clean fclean re
