NAME		= Zombie
GREEN 		= \033[1;32m
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
OBJDIR 		= .obj
FILES		= Zombie main newZombie randomChump 
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Zombie.hpp


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "$(GREEN) 🧟 Zombies are here!!"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(GREEN) 🩸 Zombies are coming!!"

clean:
	@rm -rf $(OBJDIR) $(OBJ)
	@echo  "$(GREEN) 💀 Zombies are so weak."

fclean: clean
	@rm -rf  $(NAME)
	@echo  "$(GREEN) 🌍 No Zombies left."

re: fclean all
.PHONY: all clean fclean re