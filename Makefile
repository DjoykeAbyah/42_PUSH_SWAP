# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dreijans <dreijans@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/01 19:24:21 by dreijans      #+#    #+#                  #
#    Updated: 2023/04/11 16:20:25 by djoyke        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
SRC = \
check_and_assemble.c \
rotate.c \
reverse_rotate.c \
push.c \
swap.c \
make_list.c \
utils.c \
sort.c \
main.c 
OBJ_FILES = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -g
LIB = $(LIBDIR)/libft.a
LIBDIR = Libft

.PHONY: all clear fclean re

all: $(NAME)

$(LIB):
	$(MAKE) -C $(LIBDIR) all --quiet
	
$(NAME): $(OBJ_FILES) $(LIB)
		cp $(LIB) $(NAME)
		$(CC) -o $(NAME) $(LIB) $(OBJ_FILES) -fsanitize=address -g

%.o: %.c
		@$(CC) -c $(CFLAGS) -o $@ $^

clean:
		$(RM) $(OBJ_FILES)
		$(MAKE) -C $(LIBDIR) clean 

fclean: 
		$(RM) $(OBJ_FILES)
		$(RM) $(NAME)
		$(MAKE) -C $(LIBDIR) fclean

re: fclean all
