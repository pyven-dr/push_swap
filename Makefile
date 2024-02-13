CC = cc

CFLAGS = -Wall -Wextra -Werror

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
	  sort.c

BONUS_SRC = main_bonus.c \
			parsing_bonus.c \
			exec_bonus.c \
			push_bonus.c \
			reverse_rotate_bonus.c \
			rotate_bonus.c \
			swap_bonus.c \
			is_sorted_bonus.c

BUILD_DIR = .build

BONUS_BUILD_DIR = .build_bonus

OBJ = $(addprefix $(BUILD_DIR)/, $(SRC:.c=.o))

BONUS_OBJ = $(addprefix $(BONUS_BUILD_DIR)/, $(BONUS_SRC:.c=.o))

DEP = $(OBJ:.o=.d)

BONUS_DEP = $(BONUS_OBJ:.o=.d)

SRC_DIR = src

BONUS_SRC_DIR = src_bonus

LIBS_DIR = libs

LIBFT_DIR = $(LIBS_DIR)/libft

LIBFT = libft.a

NAME = push_swap

NAME_BONUS = checker

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_DIR)/$(LIBFT)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJ) $(LIBFT_DIR)/$(LIBFT)

-include $(DEP)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(LIBFT_DIR)/$(LIBFT)
	mkdir -p .build
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

.PHONY: bonus
bonus : $(NAME_BONUS)

$(NAME_BONUS): $(BONUS_OBJ) $(LIBFT_DIR)/$(LIBFT)
	$(CC) -o $(NAME_BONUS) $(CFLAGS) $(BONUS_OBJ) $(LIBFT_DIR)/$(LIBFT)

-include $(DEP)

$(BONUS_BUILD_DIR)/%.o: $(BONUS_SRC_DIR)/%.c $(LIBFT_DIR)/$(LIBFT)
	mkdir -p .build_bonus
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(LIBFT_DIR)/$(LIBFT): FORCE
	$(MAKE) -C $(LIBFT_DIR) $(LIBFT)

.PHONY: clean
clean:
	$(RM) -r $(BUILD_DIR)
	$(RM) -r $(BONUS_BUILD_DIR)
	@$(MAKE) -C $(LIBFT_DIR) fclean

.PHONY: fclean
fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_BONUS)

.PHONY: FORCE
FORCE:

.PHONY: re
re: fclean
	$(MAKE) all