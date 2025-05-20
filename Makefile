# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Library name
LIB_NAME = libft.a

# Directories
INCLUDES_DIR = includes
SRC_DIR = srcs

# Source and object files
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_calloc.c ft_atoi.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c \
		ft_toupper.c ft_split.c ft_strcat.c ft_strchr.c ft_strcmp.c \
		ft_strcpy.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnstr.c \
		ft_strrchr.c ft_strstr.c ft_substr.c ft_strtrim.c ft_striteri.c \
		ft_strmapi.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
		ft_itoa.c
OBJ = ${SRC:.c=.o}

all: ${LIB_NAME}

${LIB_NAME} : ${OBJ}
	ar rcs $@ $^

%.o: %.c
	${CC} ${CFLAGS} -I${INCLUDES_DIR} -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${LIB_NAME}

re: fclean all

.PHONY: clean fclean re all
