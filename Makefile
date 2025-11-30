NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = srcs/main.c \
       srcs/operations/push.c \
       srcs/operations/swap.c \
       srcs/operations/rotate.c \
       srcs/operations/reverse_rotate.c \
       srcs/utils/input_validation.c \
       srcs/utils/stack_utils.c \
       srcs/utils/ft_split.c \
       srcs/utils/ft_atol.c \
       srcs/utils/list_utils.c \
       srcs/utils/free_utils.c \
       srcs/algorithms/small_sort.c \
       srcs/algorithms/big_sort.c \
       srcs/algorithms/sort_utils.c \
       srcs/algorithms/move_a_to_b.c \
	   srcs/algorithms/move_b_to_a.c \
       srcs/algorithms/push_prep.c \
       srcs/algorithms/cost_calculation.c

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
