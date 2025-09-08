SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = obj

SRCS = $(SRC_DIR)/Zombie.cpp \
	   $(SRC_DIR)/zombieHorde.cpp \
	   main.cpp

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

NAME     = zombieHordeTest
CXX      = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)

GREEN   = \033[0;32m
YELLOW  = \033[0;33m
BLUE    = \033[0;36m
RED     = \033[0;31m
MAGENTA = \033[0;35m
CYAN    = \033[0;36m
RESET   = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(GREEN)» 📦 Creating  $(RESET)» $(MAGENTA)$(NAME)$(RESET)\n"
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@printf "$(BLUE)» ⚙️  Compiling $(RESET)» $(YELLOW)%22s$(RESET) | $(GREEN)%s$(RESET)\n" "$<" "$@"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@printf "$(RED)» 🧹 Cleaning  $(RESET)» $(CYAN)./$(OBJ_DIR)$(RESET)\n"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@printf "$(RED)» 🔥 Removing  $(RESET)» $(MAGENTA)$(NAME)$(RESET)\n"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
