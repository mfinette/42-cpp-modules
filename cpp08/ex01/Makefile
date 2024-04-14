# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/14 16:16:44 by mfinette          #+#    #+#              #
#    Updated: 2024/04/14 16:46:23 by mfinette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# //// Executable Name /////
NAME = Span

# //// Compiler and flags /////
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

# //// Command to remove files /////
RM = rm -rf

# //// Directory for object files /////
OBJDIR = .objFiles

# //// Source files /////
SRCS = main.cpp Span.cpp

# //// Object files /////
OBJS = $(addprefix $(OBJDIR)/,$(SRCS:.cpp=.o))

# //// Header file /////
HEADER = Span.hpp

# //// Colors for terminal output /////
GREEN = \e[92;118m
YELLOW = \e[93;226m
RESET = \e[0m

# //// Rule to build all /////
all: $(NAME)

# //// Rule to build the executable /////
$(NAME): $(OBJS) $(HEADER)
	@$(CPP) $(OBJS) -o $(NAME)
	@printf "$(GREEN)- $(NAME) ready.$(RESET)\n"

# //// Rule to compile source files to object files /////
$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CPP) $(CPPFLAGS) -c $< -o $@

# //// Rule to clean object files /////
clean:
	@$(RM) $(OBJDIR) $(OBJS)
	@printf "$(YELLOW)- Object files removed.$(RESET)\n"

# //// Rule to clean object files and executable /////
fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)- $(NAME) removed.$(RESET)\n"

# //// Rule to clean and rebuild /////
re: fclean all

# //// Phony targets ////
.PHONY: all clean fclean re
