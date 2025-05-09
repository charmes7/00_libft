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
		ft_strrchr.c ft_strstr.c
OBJ = ${SRC:.c=.o}

# Default target (all)
all: ${LIB_NAME}

# Rule to create the library
${LIB_NAME} : ${OBJ}
	ar rcs $@ $^

# Rule to compile .c file to .o files
%.o: %.c
	${CC} ${CFLAGS} -I${INCLUDES_DIR} -c $< -o $@

# Rule to remove all temporary generated files
clean:
	rm -f ${OBJ}

# Rule like clean but also removing all binaries generated with make all
fclean: clean
	rm -f ${LIB_NAME}

# Rule for fclean + all
re: fclean all

.PHONY: clean fclean re all
