NAME		= War
RED 		= \033[1;31m
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
OBJDIR 		= .obj
FILES		= HumanA HumanB Weapon main 
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= HumanA.hpp HumanB.hpp Weapon.hpp 


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "$(RED) 🗡️ Let's fight!!"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(RED) 🔫 Crafting Weapons!!"

clean:
	@rm -rf $(OBJDIR) $(OBJ)
	@echo  "$(RED) 🔥 No amo left."

fclean: clean
	@rm -rf  $(NAME)
	@echo  "$(RED) 🌍 Peace."

re: fclean all
.PHONY: all clean fclean re