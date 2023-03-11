# -------- Definition of variables --------
CC = gcc
FLAGS = -Wall -Werror -Wextra
COMPILE = @$(CC) $(FLAGS)
NAME = libft.a
HEADER = libft.h

# -------- Dependencies --------
PART_1_SRC =	ft_isalpha.c	ft_isdigit.c \
		ft_isalnum.c	ft_isascii.c \
		ft_isprint.c	ft_strlen.c \
		ft_memset.c	ft_bzero.c \
		ft_memcpy.c	ft_memmove.c \
		ft_strlcpy.c	ft_strlcat.c \
		ft_toupper.c	ft_tolower.c \
		ft_strchr.c	ft_strrchr.c \
		ft_strncmp.c	ft_memchr.c \
		ft_memcmp.c	ft_strnstr.c \
		ft_atoi.c	ft_calloc.c \
		ft_strdup.c

#PART_2_SRC =	ft_substr.c	ft_strjoin.c \
		ft_strtrim.c	ft_split.c \
		ft_itoa.c	ft_strmapi.c \
		ft_striteri.c	ft_putchar_fd.c \
		ft_putstr_fd.c	ft_putendl_fd.c \
		ft_putnbr_fd.c

BONUS_SRC =	ft_lstadd_back_bonus.c	ft_lstadd_front_bonus.c \
		ft_lstclear_bonus.c	ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c	ft_lstlast_bonus.c \
		ft_lstmap_bonus.c	ft_lstnew_bonus.c \
		ft_lstsize_bonus.c

all: $(NAME)

COMPLETE_SRC	=	$(PART_1_SRC) $(PART_2_SRC)

COMPLETE_OBJ	=	$(COMPLETE_SRC:%.c=%.o)

BONUS_OBJ	=	$(BONUS_SRC:%.c=%.o)

$(NAME): $(COMPLETE_OBJ)
	@echo "Compiling complete library into ${NAME}"
	@ar -rcs $(NAME) $(COMPLETE_OBJ)
	ranlib ${NAME}
	@echo "OK"


# -------- CLEAN --------
.PHONY: re fclean

re: fclean all

clean:
	@echo "--Removing binary objects in ${NAME}"
	@rm -f $(COMPLETE_OBJ) $(BONUS_OBJ)
	@echo "OK"

fclean: clean
	@rm -f $(NAME)