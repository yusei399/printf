NAME =  libftprintf.a

DIR_SRC = src/

DIR_LIB = include/

DIR_OBJS = obj/

SRCS	=	ft_print.c printf_str.c printf_num.c printf_unsingned.c \
			printf_ptr.c printf_hex.c 

OBJS	=	${SRCS:.c=.o}

CC = gcc 
	
C = -c 

CFLAGS = -Wall -Wextra -Werror

AR = ar 

ARFLGS = crs

RM = rm

LIBF = libft/

all: $(NAME)



$(NAME): 
	@make -C $(LIBF)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@mkdir obj
	@cp src/* .
	@$(CC) $(C) $(SRCS)
	@$(AR) $(ARFLGS) $(NAME) $(OBJS)
	@mv *.o $(DIR_OBJS)
	@rm *.c


.PHONY: clean fclean re
clean:
	@$(RM) -r obj/
	@make clean -C $(LIBF)


fclean: clean
	@rm libftprintf.a
	@make clean -C $(LIBF)
	@$(RM) $(LIBF)libft.a


re: fclean all