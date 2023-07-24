#!/bin/sh
	norminette -R CheckForbiddenSourceHeader
	echo --------------------------------------------------
	gcc -Wall -Wextra -Werror -o rush-1 *.c