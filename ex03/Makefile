# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/29 14:46:03 by phartman          #+#    #+#              #
#    Updated: 2025/03/04 14:58:00 by phartman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME :=interface
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
OBJDIR = objs
SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
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