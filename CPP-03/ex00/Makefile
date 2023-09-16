NAME		= ClapTrap
GREY 		= \033[1;30m
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
OBJDIR 		= .obj
FILES		= ClapTrap main 
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= ClapTrap.hpp 


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "$(GREY) 👏 ClapTrap!!"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(GREY) 🧬 Creating OBJS!!"

clean:
	@rm -rf $(OBJDIR) $(OBJ)
	@echo  "$(GREY) 🔥 Deleting OBJS."

fclean: clean
	@rm -rf  $(NAME)
	@echo  "$(GREY) 👾 Deleting ClapTrap."

re: fclean all
.PHONY: all clean fclean re