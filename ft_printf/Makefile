OBJ_DIR	 = ./obj

LIB_DIR	 = ./libft

NAME	 = libftprintf.a

LIBFT 	 = $(LIB_DIR)/libft.a

SRC 	 = ft_printf.c \
           parse.c \
           int_dec.c \
           char_str.c \
           width.c \
           unsigned.c \
           sharp.c \
           octal.c \
           lhex.c

OBJ 	 = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

DIROBJLIB = ./libft/obj

LIBOBJ = *.o

LDOBJ = $(addprefix $(DIROBJLIB)/, $(LIBOBJ))

CC	 = gcc
CFLAGS	 = -Wall -Wextra -Werror
LIB_INC  = -I $(LIB_DIR)/includes
LIB_LINK = -L $(LIB_DIR) -lft

all: $(NAME)

$(LIBFT):
	@make -C $(LIB_DIR) --no-print-directory	

$(OBJ_DIR):
	@mkdir -p $@

$(NAME): $(LIBFT) $(OBJ)
	ar rcs $(NAME) $(OBJ) $(LDOBJ)
	ranlib $(NAME)
 
$(addprefix $(OBJ_DIR)/, %.o):%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(LIB_INC) -c $< -o $@

clean:
	@make -C $(LIB_DIR) clean --no-print-directory
	rm -rf $(OBJ_DIR)
	@echo printf Object files deleted.

fclean: clean
	@make -C $(LIB_DIR) fclean --no-print-directory
	rm -f $(NAME)
	@echo printf Executable deleted.

re: fclean all

