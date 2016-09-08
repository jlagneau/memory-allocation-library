# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/21 08:29:58 by jlagneau          #+#    #+#              #
#    Updated: 2016/09/08 15:56:02 by jlagneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME      = libft_malloc

# Libraries
FT_PATH   = libft/

# Directories
SRCS_PATH = src/
HEAD_PATH = include/

OBJS_PATH = .obj/
DEPS_PATH = .dep/

# Exec
RM        = rm -rf

# Flags
CFLAGS    = -Wall -Wextra -Werror -pedantic -DLIBFT_MALLOC_INTERNAL -fPIC
CPPFLAGS  = -I$(HEAD_PATH) -I$(FT_PATH)include
DEPSFLAGS = -MMD -MF"$(DEPS_PATH)$(notdir $(@:.o=.d))"
LDFLAGS   = -L$(FT_PATH) -lft

# OS
HOSTTYPE := $(shell uname -m)_$(shell uname -s)

# Files
SRCS     := $(shell find src -type f)
DEPS      = $(addprefix $(DEPS_PATH), $(notdir $(SRCS:.c=.d)))
OBJS      = $(addprefix $(OBJS_PATH), $(notdir $(SRCS:.c=.o)))

DEB_OBJS  = $(OBJS:.o=_debug.o)
DEB_DEPS  = $(addprefix $(DEPS_PATH), $(notdir $(DEB_OBJS:.o=.d)))

# Phony
.PHONY: all clean fclean norme re redebug

# Rules
$(NAME).so: CFLAGS += -O3
$(NAME).so: $(OBJS)
	@-git submodule update --init --recursive
	@make -C $(FT_PATH)
	$(CC) -shared -o $@ $^ $(LDFLAGS)
	ln -sf $@ $(NAME)_$(HOSTTYPE).so

$(NAME)_debug.so: CFLAGS += -g3
$(NAME)_debug.so: $(DEB_OBJS)
	@-git submodule update --init --recursive
	@make -C $(FT_PATH) debug
	$(CC) -shared -o $@ $^ $(LDFLAGS)
	ln -sf $@ $(NAME)_debug_$(HOSTTYPE).so

$(OBJS_PATH)%.o: $(SRCS_PATH)%.c
	@mkdir -p $(OBJS_PATH) $(DEPS_PATH)
	$(CC) $(CPPFLAGS) $(DEPSFLAGS) $(CFLAGS) -c $< -o $@

$(OBJS_PATH)%_debug.o: $(SRCS_PATH)%.c
	@mkdir -p $(OBJS_PATH) $(DEPS_PATH)
	$(CC) $(CPPFLAGS) $(DEPSFLAGS) $(CFLAGS) -c $< -o $@

debug: $(NAME)_debug.so

norme:
	@norminette ./**/*.{h,c}

all: $(NAME).so

clean:
	@make -C $(FT_PATH) clean
	$(RM) $(OBJS_PATH) $(DEPS_PATH)

fclean:
	@make -C $(FT_PATH) fclean
	$(RM) $(OBJS_PATH) $(DEPS_PATH)
	$(RM) $(NAME).so $(NAME)_$(HOSTTYPE).so
	$(RM) $(NAME)_debug.so $(NAME)_debug_$(HOSTTYPE).so

re: fclean all

redebug: fclean debug

-include $(DEPS)
-include $(DEB_DEPS)
