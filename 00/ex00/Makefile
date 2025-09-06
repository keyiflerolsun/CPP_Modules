CPPFILES = megaphone.cpp

OBJDIR = obj
OBJS   = $(addprefix $(OBJDIR)/, $(CPPFILES:.cpp=.o))

NAME     = megaphone
CXX      = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

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

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@printf "$(BLUE)» ⚙️  Compiling $(RESET)» $(YELLOW)%11s$(RESET) | $(GREEN)%s$(RESET)\n" "$<" "$@"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@printf "$(RED)» 🧹 Cleaning  $(RESET)» $(CYAN)./$(OBJDIR)$(RESET)\n"
	@rm -rf $(OBJDIR)

fclean: clean
	@printf "$(RED)» 🔥 Removing  $(RESET)» $(MAGENTA)$(NAME)$(RESET)\n"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
