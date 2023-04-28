# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dreijans <dreijans@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/01 19:24:21 by dreijans      #+#    #+#                  #
#    Updated: 2023/04/28 13:13:05 by djoyke        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
LIBFT	= ./libft/libft.a
CC	= gcc
CFLAGS	= -Wall -Werror -Wextra -g
SRC	= sort.c \
main.c \
make_list.c \
push.c \
parse.c \
reverse_rotate.c \
rotate.c \
swap.c \
utils.c \

OBJ	= $(addprefix $(OBJDIR)/, $(notdir $(SRC:.c=.o)))

OBJDIR	= obj

all:	$(NAME)

$(NAME): $(LIBFT) $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT): 
		@$(MAKE) -C ./libft

$(OBJDIR)/%.o: %.c
		@mkdir -p $(OBJDIR)
		$(CC) $(CFLAGS) -c -o $@ $^

$(OBJDIR)/%.o:
		@mkdir -p $(OBJDIR)
		$(CC) $(CFLAGS) -c -o $@ $^

clean:
		@$(MAKE) clean -C ./libft
		@rm -rf $(OBJDIR)

fclean: clean
		@$(MAKE) fclean -C ./libft
		@rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
