# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Library name
LIB_NAME = libft.a

# Directories
INCLUDES_DIR = includes
SRC_DIR = srcs

# Source and object files
SRC = ${SRC_DIR}/ft_memset.c ${SRC_DIR}/ft_bzero.c ${SRC_DIR}/ft_memcpy.c ${SRC_DIR}/ft_memccpy.c ${SRC_DIR}/ft_memmove.c \
		${SRC_DIR}/ft_memchr.c ${SRC_DIR}/ft_memcmp.c ${SRC_DIR}/ft_calloc.c ${SRC_DIR}/ft_atoi.c ${SRC_DIR}/ft_isalnum.c \
		${SRC_DIR}/ft_isalpha.c ${SRC_DIR}/ft_isascii.c ${SRC_DIR}/ft_isdigit.c ${SRC_DIR}/ft_isprint.c ${SRC_DIR}/ft_tolower.c \
		${SRC_DIR}/ft_toupper.c ${SRC_DIR}/ft_split.c ${SRC_DIR}/ft_strcat.c ${SRC_DIR}/ft_strchr.c ${SRC_DIR}/ft_strcmp.c \
		${SRC_DIR}/ft_strcpy.c ${SRC_DIR}/ft_strdup.c ${SRC_DIR}/ft_strjoin.c ${SRC_DIR}/ft_strlcat.c ${SRC_DIR}/ft_strlcpy.c \
		${SRC_DIR}/ft_strlen.c ${SRC_DIR}/ft_strncat.c ${SRC_DIR}/ft_strncmp.c ${SRC_DIR}/ft_strncpy.c ${SRC_DIR}/ft_strnstr.c
		${SRC_DIR}/ft_strrchr.c ${SRC_DIR}/ft_strstr.c
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
