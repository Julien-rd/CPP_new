C		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME		= Weapon

OBJDIR		= obj
DEPDIR		= $(OBJDIR)

SRCS		= Weapon.cpp HumanA.cpp HumanB.cpp main.cpp 

OBJS		= $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
DEPS		= $(addprefix $(DEPDIR)/, $(SRCS:.cpp=.d))

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(C) $(CFLAGS) -MMD -MP -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

-include $(DEPS)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re