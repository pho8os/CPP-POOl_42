NAME		= Account
PURPLE 		= \033[1;31m
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
OBJDIR 		= .obj
FILES		= tests Account
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Account.hpp


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(PURPLE) ⏳ Waiting...!"

clean:
	@rm -rf $(OBJDIR) $(OBJ)
	@echo  "$(PURPLE) 🗑️ Cleaning OBJS."

fclean: clean
	@rm -rf  $(NAME)
	@echo  "$(PURPLE) 🗑️ Cleaning PhoneBook."

re: fclean all
.PHONY: all clean fclean re