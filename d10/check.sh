#!/bin/sh

if [ "$1" == "" ];
then
	norminette -R CheckForbiddenSourceHeader
else
	cd $1
	norminette -R CheckForbiddenSourceHeader

	gcc -Wall -Wextra -Werror
fi
