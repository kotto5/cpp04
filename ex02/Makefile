NAME = exefile
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -g -O -DDEBUG
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	rm -rf $(NAME)

re:
	make clean
	make all

run:

debug:
	$(MAKE) re CXXFLAGS='$(CXXFLAGS) -fsanitize=address -DDEBUG'

.PHONY: all clean re run

