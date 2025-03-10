NAME = libftprintf.a
SOURCES = ft_calloc.c \
ft_filter.c\
ft_hex_num_len.c\
ft_hexa_max.c\
ft_hexa_min.c\
ft_itoa.c\
ft_print_int.c\
ft_print_string.c\
ft_print_unsigned_int.c\
ft_printf.c\
ft_printpunt.c\
ft_putchar.c\
ft_strlen.c\
ft_to_hex.c\
ft_bzero.c\
ft_uitoa.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) $<

clean: 
	rm -f $(OBJECTS) 

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all bonus clean fclean re