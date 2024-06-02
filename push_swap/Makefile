# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matemart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 21:05:37 by matemart          #+#    #+#              #
#    Updated: 2024/04/29 04:22:21 by matemart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

SRC_DIR		= src/
OBJ_DIR		= obj/
INC_DIR		= include/

SRC 		= $(wildcard $(SRC_DIR)*.c) $(wildcard $(SRC_DIR)moves/*.c)
OBJ			= $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

LIBFT 		= libft/lib/libft.a
LIBFT_PATH 	= libft/

CC			= gcc
RM			= rm -f
C_FLAGS		= -Wall -Wextra -Werror
INCS 		= -I$(INC_DIR) -I.

TOTAL_FILES 	:= $(words $(SRC))
CURRENT_FILE 	:= 0

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/moves
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	 $(CC) $(OBJ) -L$(LIBFT_PATH)lib -lft $(C_FLAGS) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

clean:
	$(MAKE) clean -C $(LIBFT_PATH) > /dev/null
	$(RM) $(OBJ_DIR)*.o

fclean: clean
	$(MAKE) fclean -C $(LIBFT_PATH) > /dev/null
	$(RM) $(NAME)
	$(RM) -r $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re
