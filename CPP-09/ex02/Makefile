NAME		= PmergeMe
CC			= c++
FLAGS		= -Wall -Wextra -Werror  -std=c++98 
OBJDIR 		= .obj
FILES		=  PmergeMe main 
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= PmergeMe.hpp 


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME) 
	@echo "🧪 PmergeMe!!"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@ 
	@echo " 🧬 Creating OBJS!!"

clean:
	@rm -rf $(OBJDIR) $(OBJ)
	@echo  "🔥 Deleting OBJS."

fclean: clean
	@rm -rf  $(NAME)
	@echo  " 👾 Deleting PmergeMe."

re: fclean all
.PHONY: all clean fclean re