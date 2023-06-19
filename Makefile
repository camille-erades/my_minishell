##
## EPITECH PROJECT, 2022
## task01
## File description:
## makefile
##

SRC	=	src/mysh.c \
		src/my_putchar.c \
		src/my_putnbr.c \
		src/my_putstr.c \
		src/my_strcat.c \
		src/my_strlen.c \
		src/my_str_to_word_array.c \
		src/my_strcpy.c \
		src/my_str_compare.c \
		src/dup_env.c \
		src/my_free.c \
		src/cd_command.c \
		src/my_clean_str.c \
		src/segfault.c \
		src/cd_go_back.c \
		src/set_or_unset_env.c \
		src/show_env.c \
		src/set_and_unsetenv_tools.c \
		src/do_tty_things.c \
		src/verif_setenv_args.c


OBJ	=	$(SRC:.c=.o)

%.o : %.c
	@gcc -Iinclude -c $< -o $@

NAME	=	mysh

all:	$(NAME)

$(NAME):	$(OBJ)
		@gcc -o $(NAME) $(OBJ) -Iinclude
		@echo "                              ▄████▀▀█████▀▀▀███████████████████"
		@echo "                             ▓▒╫█▒▒▓▓▓▓▒▒Ñ▒▒▒▀▀▓██████████▀▀▒╫██"
		@echo "                           ▄▓▓▓▒▒▒██▓▒▒▓▓▓Ñ▒▒▒▒░▒░▒▀▓████████▓▓█"
		@echo "                          ███▓▓▓▓▒▓▓▓█▓▓▒▒▒░░░░░▒▓▒▒▒╫████████╫╫"
		@echo "                         ████████████▓▓█▓░▒░░▒░░▒╫▓▒▒▓████████╫╫"
		@echo "                          █▀▀▀▀▀▀▓▓▓▓▓▓▓▓▒▒▒░░░▒▒███▓████▓▓███▓▓"
		@echo "                         █   🔵   ▌▓▓▓█▓▓▓▓▒▒▒▒▒▓▓▀▒▓█╫▓████▓█▓█"
		@echo "                          █▄▄▄▄▄▄█████▌▒▒▒▒▒▒███▓▒╫▓█████████▓██"
		@echo "                       ▄▓▓▓████████▓▓██▒▒▓▒▒█╫▓▓▓▒╫▓▓███▓▓▓█████"
		@echo "                     ▓█████████████████▓▓▓▓▓▓▓█▓▓▒▓▓████████████"
		@echo "                    ██▓█▓█▓▓▓███▓Ñ▓████████▓▓▓█▀▀▓█▓▓███████████"
		@echo "                    █████▓▓▓▓▓▓Ñ▓▓▓▓▓▓▓▓██▓██▀,▒▒▓█▓▓███████████"
		@echo "   BINARY IS        ██████▓██▓▓▓▓▓██▓████▓▀░▒▒▓▒▒▒██▓▓▓█████████"
		@echo "  READY PILOT!     █▒███████▓█████████████▓▓▒▒▒▓▒▒▓███▓███████▓▓"
		@echo "                    ▓████████▓▓▓█▓▓█▓█▓▓███▓▓█▀▒▒▒▒▓▓██████████▓"
		@echo "                  █▓▓▓▓▓▓█████▓▓███▓████▓███▓██████████▓███▀    "
		@echo "                ▄▓███▓▓█████▀    █▓▓█▓▓▓████████▓████████▀      "
		@echo "     ▓█▓     ▓█▓█▓▓░▀▀████▀       ████████████▓▓██████▀         "
		@echo "     █▓█▌  ▓█▓▓▓▓▓▓▓▓███       ▓▓█████████████▓███████          "
		@echo "    ▄█▓█▄████▓▓▓▓▓▓▓████    ▄▓█████████████████▀███▓██▄▒▒▄▄▄    "
		@echo "█▀▀▀▀████▓██████▓▓██▓██▀  ▓███▓█▒µµ¡``²▒▒█▌▒▒╥▒▒▓▓▓██▒▒▒▒▒▓▓██▓ "
		@echo "██▀▀▀▀███████████████▀  ▄█▓▓███Ñ▒░░░▒╩╫ ▓▓▒▒▒▒▒▓▓█▒▒▒▓▒▒▒▓██▓▓▓█"
		@echo "███▀▀▀▀████████████▀    ██▓▓▓██▒▒░░░▒▒▒▓█▓▓▓████▒Ñ▒▓▒▒▓▓██▓▓▒▓▓▓"
		@echo " ▀██▀▀▀██████████▀     █▓█████▒▒▒▒▒▒▒▒▒█████████▓▓▓▓▓▓███▓▒▓█▓█▓"
		@echo "  ▀▀▀▀▀░░░▀▀▀▀         ███████▒▒▒▒▒╫▒Ñ▓█████████████████▓Ñ▓█████"
		@echo "                     ▓▓███████▓▓▓▓▓▒▒▒█████████▓███████▓▓▓██████"
		@echo "                    ████▓███████▓█████████████▓▓███████▓▓██▓████"
		@echo "                    ██████████████████░       ██████████████████"
		@echo "                    ▒████████████████          ████▓██████████  "
		@echo "                 █▓▒▒▒▒███▓████████▀          █▒█████████████   "
		@echo "               ▄▓▒▓█████▓███▓█████            █▓▓██▓█████████   "
		@echo "              ▓█▓██████▓▓▓█▓███▀            ╫█▓█████████████    "
		@echo "              ╫█████████▓Ñ▓╫████             ██▒▒▒╫Ñ╫█▓█▒███▌   "
		@echo "               ██████████▓▓▓█████▄           ███▓Ñ▓▓▓█▓▓▓▒▒█▌   "
		@echo "                ████████████████████▄       ████████████▓▒Ñ▓▌   "
		@echo "                ▀███████████████████         ████████████████▓  "
		@echo "                   ░░▀██████████████           ▀████████████████"
		@echo "                         ▀██████████▌           ████████████████"
		@echo "                         ███████████             ███████████████"
		@echo "                        ▓█████████                 █████████████"

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)
		@echo "                                   ▄╫▀                          "
		@echo "                                ╫  ▀      ▒                     "
		@echo "                                 ╫▀ ╫▀  ╫   ▀  ▀                "
		@echo "                                    ╫    ╫ ▒    ╫               "
		@echo "                                     ╫   ╫ ╫    ╫               "
		@echo "                                   ╫      ╫ ▀   ▒▀              "
		@echo "                      ╫▀            ╫      ╫╫Ñ▒▌   ▀            "
		@echo "                       ▒▒▀            ▀       ░╫ ╫              "
		@echo "                        ▒▒▒▀             ▀    ▒▐  ▀▒  ▀╫  ╫     "
		@echo "                         ▄▒░╨▀                ▒░     ▀ ▄╫▀      "
		@echo "              ▒▀           ▄░░░╫          ╫   ▒▒╫╫▀ ╫ ╫   ▄     "
		@echo "               ▒▒▒▀          ▄░░▒        ▄▀╫  ██ ▒   ╫     ╫    "
		@echo "                ▄▒░░╨▀        Ü╥▒▀██         ╫ ██ ▒  ╫ ╫        "
		@echo "                   ▄µ░░▒╫          ██     ███  ██        ╫     ▀"
		@echo "                      ▄▒░░░▀▀      ███   █████▒▒████  ╫  ╫ ╫  Ñ"
		@echo "                         ▄░≥▒ ██    ████████▒▒███████  Ñ╫ ╫ ╫█  "
		@echo "            ███████       ▄   █████████████▒█▀▀████▒  ▄ ╫╫ Ñ█ "
		@echo "  GET      █▒█▒█▒██████████████████████████▒█▄▄▓█▒▒███████  ▄▀  "
		@echo "FCLEANED  █▒█▒█▒██████▓█████████████████████▀▀▀▀██   ╫▀█████ ╫▒╫"
		@echo "           █▒▌▒█▒█████████████████▓█████████████▌      ╫▀▀ ▀╫╫╫ "
		@echo "                   ▌▌ ▌ █████▀▀▒╩▀███▓███████████▌              "
		@echo "                       ▀╩░░░▒▐     ▓████████▌                   "
		@echo "                   ▀╩░░░░▄▄     ████▓███████                    "
		@echo "               ▀▒▒▒▒▒▄        ▀▒▒▒ ███████████                  "
		@echo "              ▄▄▄           ▀░░░▒ ██████████████████            "
		@echo "                          ╫▒░j     ███████████████████          "
		@echo "                        ▀▒▒▒▄    ████████████████████████       "
		@echo "                      ▀▒▒▒▐     ██████████ ████████████████     "
		@echo "                     ▄▄         █████████  █████████████████    "
		@echo "                                █████████  ███  ▌█████████████  "
		@echo "                                █████████   ▌        █████████  "
		@echo "                                ███████▌█               ████████"
		@echo "                                ███████                    ▓▓   "
		@echo "                                ▌█████▌                         "
		@echo "                                 ████                           "
		@echo "                                █████                           "
		@echo "                                 ███                            "


re:		fclean all

.PHONY : all clean fclean re