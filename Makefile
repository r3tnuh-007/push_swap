CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME =  push_swap
SRCS =  srcs/main.c \

OBJ = $(SRCS:.c=.o)

all: $(NAME)


.PHONY: all clean fclean re
