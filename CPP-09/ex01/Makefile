NAME		= RPN
GREY 		= \033[1;30m
CC			= c++
FLAGS		= -Wall -Wextra -Werror -fsanitize=address -g -std=c++98 
OBJDIR 		= .obj
FILES		=  RPN main 
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= RPN.hpp 


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)  -fsanitize=address -g
	@echo "$(GREY) 🧪 RPN!!"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(GREY) 🧬 Creating OBJS!!"

clean:
	@rm -rf $(OBJDIR) $(OBJ)
	@echo  "$(GREY) 🔥 Deleting OBJS."

fclean: clean
	@rm -rf  $(NAME)
	@echo  "$(GREY) 👾 Deleting RPN."

re: fclean all
.PHONY: all clean fclean re