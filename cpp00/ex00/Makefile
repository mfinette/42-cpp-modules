# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 10:20:32 by mfinette          #+#    #+#              #
#    Updated: 2023/10/09 10:40:13 by mfinette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC		= c++
CFLAGS	= -Wall -Wextra -std=c++98
AR		= ar rcs
RM		= @rm -f
DEF_COLOR = \033[0;39m
YELLOW = \033[0;93m
GREEN = \033[0;92m
BLUE = \033[0;94m
CYAN = \033[0;96m

FILES = megaphone

all: $(NAME)

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .cpp, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

%.o:%.cpp
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "$(GREEN)😳😎executable compiled!😎😳$(DEF_COLOR)"
	@${CC} ${FLAGS} ${SRCS} -o ${NAME}


clean:
	@$(RM) $(OBJS)
	@echo "$(CYAN)executable object files cleaned!$(DEF_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(CYAN)3$(DEF_COLOR)"
	@sleep 0.2
	@echo "$(CYAN)2$(DEF_COLOR)"
	@sleep 0.2
	@echo "$(CYAN)1$(DEF_COLOR)"
	@sleep 0.2
	@echo "$(GREEN)executable files cleaned!$(DEF_COLOR)"


re: fclean all

.PHONY: all clean fclean re