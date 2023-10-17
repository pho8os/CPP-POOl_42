
NAME		= MegaPhone
GREEN 		= \033[1;32m
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
OBJDIR 		= .obj
FILES		= MegaPhone
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))


all: $(NAME)

$(NAME): $(OBJ) 
	@$(CC) $(OBJ)  -o $(NAME)
	@echo "$(GREEN) 🧪 MegaPhone!!"

$(OBJDIR)/%.o: %.cpp 
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS)  -c $< -o $@
	@echo "$(GREEN) 🧬 Creating OBJS!!"

clean:
	@rm -rf $(OBJDIR) $(OBJ)
	@echo  "$(GREEN) ❌ OBJS deleted."

fclean: clean
	@rm -rf  $(NAME)
	@echo  "$(GREEN) ❌ ALL deleted."

re: fclean all
.PHONY: all clean fclean re