
NAME		= Sed
GREY 		= \033[1;30m
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
OBJDIR 		= .obj
FILES		= main
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))


all: $(NAME)

$(NAME): $(OBJ) 
	@$(CC) $(OBJ)  -o $(NAME)
	@echo "$(GREY) Sed is ready"

$(OBJDIR)/%.o: %.cpp 
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS)  -c $< -o $@
	@echo "$(GREY) Waiting...!"

clean:
	@rm -rf $(OBJDIR) $(OBJ)
	@echo  "$(GREY) 🗑️ Cleaning OBJS."

fclean: clean
	@rm -rf  $(NAME)
	@rm -rf *.replace
	@echo  "$(GREY) 🗑️ Cleaning Sed."

re: fclean all
.PHONY: all clean fclean re