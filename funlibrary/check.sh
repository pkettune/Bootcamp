#!/bin/sh

if [ "$1" == "" ];
then
	norminette -R CheckForbiddenSourceHeader
else
	cd $1
	norminette -R CheckForbiddenSourceHeader
	echo --------------------------------------------------
	gcc -Wall -Wextra -Werror -o rush-1 *.c
fi
