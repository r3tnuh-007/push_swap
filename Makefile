NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = srcs/main.c \
       srcs/operations/push.c \
       srcs/operations/swap.c \
       srcs/operations/rotate.c \
       srcs/operations/reverse_rotate.c \
       srcs/utils/stack_utils.c \
       srcs/utils/ft_split.c \
       srcs/utils/ft_atol.c \
       srcs/utils/stack_init.c \
       srcs/utils/free_utils.c \
       srcs/utils/ft_strjoin.c \
	   srcs/utils/ft_strlen.c \
	   srcs/utils/ft_strdup.c \
	   srcs/utils/ft_memcpy.c \
	   srcs/utils/parser.c \
       srcs/algorithms/small_sort.c \
       srcs/algorithms/big_sort.c \
       srcs/algorithms/push_swap_init.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
