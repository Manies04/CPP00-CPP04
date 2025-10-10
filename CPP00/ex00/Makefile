# Program name
NAME = megaphone

# Compiler and flags
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Colors
RESET = \033[0m
GREEN = \033[32m
YELLOW = \033[33m
RED = \033[31m

# Default target
all: $(NAME)

# Build directly from source
$(NAME): megaphone.cpp
	@echo "$(YELLOW)[ BUILDING ]$(RESET) Compiling $<..."
	@$(CXX) $(CXXFLAGS) $< -o $(NAME)
	@echo "$(GREEN)[ SUCCESS ]$(RESET) $(NAME) built successfully!"

# Clean executable
clean:
	@echo "$(RED)[ CLEAN ]$(RESET) Removing $(NAME)..."
	@rm -f $(NAME)
	@echo "$(GREEN)[ OK ]$(RESET) Clean complete."

fclean: clean

# Rebuild
re: clean all

.PHONY: all clean fclean re