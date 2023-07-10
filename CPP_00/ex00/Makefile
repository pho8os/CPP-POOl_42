NAME = Megakhroztk

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp 
	$(CPP) $(CPPFLAGS) -c $<

$(NAME):$(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all

