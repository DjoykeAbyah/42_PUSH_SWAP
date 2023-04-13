# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dreijans <dreijans@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/01 19:24:21 by dreijans      #+#    #+#                  #
#    Updated: 2023/04/13 17:37:05 by dreijans      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
SRC = \
main.c \
make_list.c \
parse.c \
push.c \
reverse_rotate.c \
rotate.c \
sort.c \
swap.c \
utils.c 
OBJ_FILES = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
LIB = $(LIBDIR)/libft.a
LIBDIR = Libft

.PHONY: all clear fclean re

all: $(NAME)

$(LIB):
	$(MAKE) -C $(LIBDIR) all --quiet
	
$(NAME): $(OBJ_FILES) $(LIB)
		cp $(LIB) $(NAME)
		$(CC) -o $(NAME) $(LIB) $(OBJ_FILES) $(CFLAGS)

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
