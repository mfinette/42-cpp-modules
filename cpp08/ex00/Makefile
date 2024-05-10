# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/14 16:16:44 by mfinette          #+#    #+#              #
#    Updated: 2024/04/14 16:45:50 by mfinette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# ************************************ VARIABLES ************************************ #
NAME = EasyFind
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
OBJDIR = .objFiles
SRCS = main.cpp
OBJS = $(addprefix $(OBJDIR)/,$(SRCS:.cpp=.o))
HEADER = easyfind.hpp
GREEN = \e[92;118m
YELLOW = \e[93;226m
RESET = \e[0m

# ************************************ RULES **************************************** #
all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CPP) $(OBJS) -o $(NAME)
	@printf "$(GREEN)- $(NAME) ready.$(RESET)\n"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	mkdir -p $(dir $@)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJDIR) $(OBJS)
	@printf "$(YELLOW)- Object files removed.$(RESET)\n"

fclean: clean
	$(RM) $(NAME)
	@printf "$(YELLOW)- $(NAME) removed.$(RESET)\n"
	
re: fclean all
.PHONY: all clean fclean re
