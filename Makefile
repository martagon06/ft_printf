NAME = libftprintf.a
SOURCES = \
\

OBJECTS = $(SOURCES:.C=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.C
	%(CC) -c $(CFLAGS) $?

clean: 
	rm -f $(OBJECTS) 

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all bonus clean fclean re