NAME		= Bureaucrat
GREY 		= \033[1;30m
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
OBJDIR 		= .obj
FILES		=  AForm Bureaucrat PresidentialPardonForm RobotomyRequestForm ShrubberyCreationForm  Intern main 
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= AForm.hpp Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "$(GREY) 🎓 Bureaucrat!!"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(GREY) 🧬 Creating OBJS!!"

clean:
	@rm -rf $(OBJDIR) $(OBJ)
	@rm -rf *_shrubbery
	@echo  "$(GREY) 🔥 Deleting OBJS."

fclean: clean
	@rm -rf  $(NAME)
	@echo  "$(GREY) 👾 Deleting Bureaucrat."

re: fclean all
.PHONY: all clean fclean re