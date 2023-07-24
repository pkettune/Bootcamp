/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:45:02 by etattevi          #+#    #+#             */
/*   Updated: 2022/08/21 19:18:09 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "main.h"

void	solve(t_sudoku *sudoku);

//fill-function is to find correct number to be inserted in empty space(.).
void	fill(t_sudoku *sudoku, int i, int j)
{
	char	nb;

	nb = '1';//by default we start from number one. Because of sudoku.
	while (nb <= '9')//and going through all the possible numbers we can add.
	{
//checking if the current number nb is possible to be inserted in grid.
//Go to main.h to check possible-function.
		if (possible(sudoku, i, j, nb))
//this function come back with 0 or 1.
//if it's !!!!!0!!!!!! we move to the next number.
//and try again with new attempt of solution.

//So if it's 1 we'll continue with this function. 1 = true
		//so if we continued from above (return (1))...
		{
			sudoku->grid[i][j] = nb;//...we can add that number (current char nb) to the grid...
			solve(sudoku);//...we go again to solve-function.
//and after a while, if there's no proper number to be added to this certain cell...
//...we add dot a.k.a empty space
			sudoku->grid[i][j] = '.';
		}
		nb++;//!!!!!!0!!!!!!!
	}
}//and after all numbers done, we go back to solve-function where we were sent here.

//if solve-function has gone well we come here
void	solution_found(t_sudoku *sudoku)
{
	if (sudoku->solution_found == 1)
	{
		ft_putstr("Error\n");
		sudoku->solution_found++;
	}
	if (sudoku->solution_found == 0)//first time program enters here, value is 0
	{
		set_completed_grid(sudoku);//go to main.h
		sudoku->solution_found = 1;
	}
}

void	solve(t_sudoku *sudoku)
{
	int		i;//can be imagined as y-axis
	int		j;//--------||-------- x-axis  Remember these in fill-function

	i = 0;
	while (i < 9)//when total lines filled exceeds 9, this loop ends.
	{
		j = 0;
		while (j < 9)//when the current line's "columns filled" exceeds 9... and remember we start from the ZERO.
		{
			if (sudoku->grid[i][j] == '.')//so what if we have a empty space ('.') in our string?....
			{
				fill(sudoku, i, j);//...lets find out. See fill-function above.
				return ;//we return after coming back with either one filled cell or '.'.
			}
			j++;//moving to the next column/cell.
		}
		i++;//moving to the next line/row
	}
	//if the whole grid gets filled properly we move to solution_found above
	solution_found(sudoku);
}

int	main(int argc, char *argv[])
{
	t_sudoku	sudoku;//creating the pointer "sudoku". It points to struct t_sudoku from main.h (char **grid, char **completed_grid, int solution_found)
	init_grid(&sudoku, argc, argv);// sending address of sudoku and argument count 10 (argc)and 10 string (argv) of chars and dots (argv[0] is file's name.) to init.grid in in main.h

//HERE WE ARE BACK IN MAIN so now we have grid ready, it's time to solve the sudoku. Lets go to the solve-function above
	solve(&sudoku);
//by doing &sudoku it's kinda same as (char **grid, char **completed_grid, int solution_found)
//with fixed values (values inside these operators/variables came from init_grid).

//and after a while we come here to show our finished grid. Or error.
	if (sudoku.solution_found == 1)
		print(&sudoku);
	if (sudoku.solution_found == 0)
		ft_putstr("Error\n");
}
//and somehow after 1 solution has been completed, the process starts again...
//..trying to find second solution.
//How this happens?
//it's explained here extremely thoroughly:
// https://www.youtube.com/watch?v=fq3abPnEEGE