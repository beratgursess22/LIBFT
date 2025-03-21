NAME			= libft.a
CC				= cc
RM				= rm -f
AR    			= ar rc
CFLAGS			= -Wall -Wextra -Werror 

SRCS = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
		ft_strchr.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlcpy.c ft_atoi.c \
		ft_memset.c ft_memcpy.c ft_bzero.c ft_memchr.c ft_memcmp.c \
		ft_memmove.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_striteri.c ft_strmapi.c ft_strtrim.c ft_split.c ft_itoa.c \
		

BONUSSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c \
		ft_lstiter_bonus.c

OBJS			= $(SRCS:.c=.o)
BONUS_OBJS		= $(BONUSSRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

bonus:			$(BONUS_OBJS)
				$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re bonus