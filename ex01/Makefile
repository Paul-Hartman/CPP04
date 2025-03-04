# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 18:08:35 by phartman          #+#    #+#              #
#    Updated: 2025/03/04 14:55:49 by phartman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME :=animals
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
OBJDIR = objs
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJS := $(SRCS:%.cpp=$(OBJDIR)/%.o)

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re