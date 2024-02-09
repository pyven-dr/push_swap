CC = cc

CFLAGS = -g -Wall -Wextra -Werror

INCLUDE_DIR = include

IFLAGS = \
		 -I $(INCLUDE_DIR) \
		 -I $(LIBFT_DIR)/$(INCLUDE_DIR)

SRC = main.c \
	  parsing.c \
	  swap.c \
	  push.c \
	  rotate.c \
	  reverse_rotate.c \
	  is_sorted.c \
	  push_to_b.c \
	  adjust_values.c \
	  find_biggest.c \
	  push_to_a.c \
	  sort_3.c \

BUILD_DIR = .build

OBJ = $(addprefix $(BUILD_DIR)/, $(SRC:.c=.o))

DEP = $(OBJ:.o=.d)

SRC_DIR = src

LIBS_DIR = libs

LIBFT_DIR = $(LIBS_DIR)/libft

LIBFT = libft.a

NAME = push_swap

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_DIR)/$(LIBFT)
	$(CC) -o $(NAME) $(CFLAGS) $(LFLAGS) $(OBJ) $(LIBFT_DIR)/$(LIBFT)

-include $(DEP)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(LIBFT_DIR)/$(LIBFT)
	mkdir -p .build
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(LIBFT_DIR)/$(LIBFT): FORCE
	$(MAKE) -C $(LIBFT_DIR) $(LIBFT)

.PHONY: clean
clean:
	$(RM) -r $(BUILD_DIR)
	@$(MAKE) -C $(LIBFT_DIR) fclean

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: FORCE
FORCE:

.PHONY: re
re: fclean
	$(MAKE) all