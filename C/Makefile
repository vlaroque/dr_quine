# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlaroque <vlaroque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/20 10:33:13 by vlaroque          #+#    #+#              #
#    Updated: 2020/07/10 21:35:27 by vlaroque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# GLOBAL

NAME1 = Colleen
NAME2 = Grace
NAME3 = Sully
CC = clang
CFLAGS = -Wextra -Werror -Wall -g3
CFLAGS = -Wextra -Wall -g3

#-fsanitize=address#
# SOURCES

SRC_NAME1 = Colleen.c
SRC_NAME2 = Grace.c
SRC_NAME3 = Sully.c

# PATH

OBJ_PATH = obj

# ASSIGNATION

NAME1_OBJ = $(addprefix $(OBJ_PATH)/,$(SRC_NAME1:.c=.o))
NAME2_OBJ = $(addprefix $(OBJ_PATH)/,$(SRC_NAME2:.c=.o))
NAME3_OBJ = $(addprefix $(OBJ_PATH)/,$(SRC_NAME3:.c=.o))

DEPENDS += $(VM_OBJ:%.o=%.d)

.PHONY: all
all : $(NAME1) $(NAME2) $(NAME3)

$(NAME1) : $(NAME1_OBJ)
	@echo "\tLinking $@'s files"
	@$(CC) $(NAME1_OBJ) -o $@ $(CFLAGS)
	@echo "\t\tDone !"

$(NAME2) : $(NAME2_OBJ)
	@echo "\tLinking $@'s files"
	@$(CC) $(NAME2_OBJ) -o $@ $(CFLAGS)
	@echo "\t\tDone !"

$(NAME3) : $(NAME3_OBJ)
	@echo "\tLinking $@'s files"
	@$(CC) $(NAME3_OBJ) -o $@ $(CFLAGS)
	@echo "\t\tDone !"

-include $(DEPENDS)
$(OBJ_PATH)/%.o : ./%.c
	@mkdir -p $(@D)
	@echo "\tCompiling $@"
	@$(CC) $(CFLAGS) -MMD -c $< -o $@

.PHONY: clean
clean :
	@echo "\tCleaning..."
	@rm -Rf obj
	@echo "\t\tDone !"

.PHONY: fclean
fclean : clean
	@rm -Rf $(NAME1) $(NAME2) $(NAME3)

.PHONY: re
re :
	@$(MAKE) fclean
	@$(MAKE)
