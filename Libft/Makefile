# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dreijans <dreijans@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/04 16:56:00 by dreijans      #+#    #+#                  #
#    Updated: 2023/03/28 15:06:07 by dreijans      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# NAME = libft.a
# CC = cc
# SRC = \
# ft_isalnum.c \
# ft_isalpha.c \
# ft_isdigit.c \
# ft_isascii.c \
# ft_isprint.c \
# ft_strlen.c \
# ft_memset.c \
# ft_bzero.c \
# ft_strlcpy.c \
# ft_toupper.c \
# ft_tolower.c \
# ft_strchr.c \
# ft_strrchr.c \
# ft_strncmp.c \
# ft_atoi.c \
# ft_strnstr.c \
# ft_strlcat.c \
# ft_memcpy.c \
# ft_memmove.c \
# ft_memchr.c \
# ft_memcmp.c \
# ft_calloc.c \
# ft_strdup.c \
# ft_substr.c \
# ft_strjoin.c \
# ft_putchar_fd.c \
# ft_putstr_fd.c \
# ft_putendl_fd.c \
# ft_strtrim.c \
# ft_striteri.c \
# ft_strmapi.c \
# ft_itoa.c \
# ft_putnbr_fd.c \
# ft_split.c \
# ft_lstnew.c \
# ft_lstadd_front.c \
# ft_lstlast.c \
# ft_lstsize.c \
# ft_lstadd_back.c \
# ft_lstdelone.c \
# ft_lstclear.c \
# ft_lstiter.c \
# ft_lstmap.c 
# OBJ_FILES = $(SRC:.c=.o)
# CFLAGS = -Wall -Wextra -Werror
# LIB = $(PRINTDIR)/printf.a
# PRINTDIR = ft_printf

# .PHONY: all clear fclean re

# all: $(NAME)

# $(LIB):
# 	$(MAKE) -C $(PRINTDIR) all --quiet
	
# $(NAME): $(OBJ_FILES) $(LIB)
# 		cp $(LIB) $(NAME) 
# 		ar -src $(NAME) $(OBJ_FILES)

# %.o: %.c
# 		@$(CC) -c $(CFLAGS) -o $@ $^

# clean:
# 		$(RM) $(OBJ_FILES)
# 		$(MAKE) -C $(PRINTDIR) clean 

# fclean: 
# 		$(RM) $(OBJ_FILES)
# 		$(RM) $(NAME)
# 		$(MAKE) -C $(PRINTDIR) fclean

# re: fclean all

NAME = libft.a
CC = cc
SRC = \
ft_isalnum.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_strlcpy.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_atoi.c \
ft_strnstr.c \
ft_strlcat.c \
ft_memcpy.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_strtrim.c \
ft_striteri.c \
ft_strmapi.c \
ft_itoa.c \
ft_putnbr_fd.c \
ft_split.c \
ft_lstnew.c \
ft_lstadd_front.c \
ft_lstlast.c \
ft_lstsize.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c \
ft_printf.c \
print_char.c \
print_hexlow.c \
print_hexup.c \
print_nbr.c \
print_ptr.c \
print_str.c \
print_unsigned.c
OBJ_FILES = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clear fclean re

all: $(NAME)
	
$(NAME): $(OBJ_FILES)
		ar -src $(NAME) $(OBJ_FILES)

%.o: %.c
		@$(CC) -c $(CFLAGS) -o $@ $^

clean:
		$(RM) $(OBJ_FILES)

fclean: 
		$(RM) $(OBJ_FILES)
		$(RM) $(NAME)
		
re: fclean all