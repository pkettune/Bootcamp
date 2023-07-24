/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:05:33 by etattevi          #+#    #+#             */
/*   Updated: 2022/08/21 19:18:06 by pkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H//must be "if not defined". That will protect it from multi-references. At the end of this file is #endif for end this #ifndef
# define MAIN_H//and we're defining it here, safely.
# include "helper.h"

typedef struct t_sudoku {
	char	**grid;// grid-named pointer to char pointer
	char	**completed_grid;//completed_grid-named pointer to char pointer
	int		solution_found;// integer variable "solution_found"
}			t_sudoku;	//with struct variable named t_sudoku. Define pointers with (t_sudoku  "operator name")
					    //in main.c line 74, declaring pointer named sudoku

void	init_grid(t_sudoku *sudoku, int argc, char *argv[])//values from main function. sudoku-named pointer to struct t_sudoku
{
	int	i;
	int	j;
//The dot (.) operator is used to access a member of a struct,
//while the arrow operator (->) in C is used to access a member
//of a struct which is referenced by the pointer in question.

//Forming sudoku grid, which only works with variables declared inside t_sudoku
	sudoku->solution_found = 0;//in other way it's  (*sudoku).solution_found = 0;
	sudoku->grid = malloc(sizeof(char *) * 9);// grid is forming it's number of arrays(rows) from the memory size of empty char pointer (1 byte because of '/0') and multiplied with 9. 
	sudoku->completed_grid = malloc(sizeof(char *) * 9);//same here. *sudoku inserts this value inside t_sudoku's *completed_grid
	i = 1;
	while (i < argc)// as long as i is less than argument count (10)
	{
		sudoku->grid[i - 1] = malloc(sizeof(char) * 9);//grid is forming the number of columns(cells) is in array (9 columns in array, 9 arrays of the like)
		sudoku->completed_grid[i - 1] = malloc(sizeof(char) * 9);// aaaand same here. Both sended to t_sudoku
		j = 0;
		while (j < 9)// until the last char/number of the string
		{
			sudoku->grid[i - 1][j] = argv[i][j];			 // current row [i] is being filled with the characters[j] from input strings
			j++;// "moving to next character of the string"  // it starts from argv[1][0] because argv[0][0] is pointing to filename's first character
		}
		i++;// moving to the next row or line whatevs
	}//when i = 10, we have completed filling 9 full rows and this function will come to an end
}//BACK TO THE MAIN (in main.c)

int	check_square(t_sudoku *sudoku, int y, int x, char nb)
{//we came from possible-function below.
	int	corner_y;
	int	corner_x;
	int	i;
	int	j;

	corner_y = get_corner(y);//we must be sure that program knows what is the... 
	corner_x = get_corner(x);//...valid corner of 3x3 grid. JUMP TO helper.h -file

	//BACK FROM THE GET_CORNER
	i = corner_y;
	while (i < corner_y + 3)//going through the loop 3 times. Making sure the loop takes only 3 lines in account
	{
		j = corner_x;
		while (j < corner_x + 3)//and inside other while-loop same as above but with columns instead of lines.
	//and now we've magically created an illusion of 3x3 grid.
		{
			if (sudoku->grid[i][j] == nb)//if there's same number as (char nb)...
				return (0);//...we'll return 0 which means it's not good grid for nb...
			j++;//otherwise we go through next number and 3rd at max.
		}
		i++;//until we change the line.
	}
	return (1);//and if this function has come this far, we know there's no same number as (char nb)...
}// so we can return value 1 to previous function. look down


//Here we are bouncing back and fourth with fill-function from main.c.
int	possible(t_sudoku *sudoku, int y, int x, char ch)
{
	int	i;

	i = 0;
	while (i < 9)//you know the drill
	{
		if (sudoku->grid[y][i] == ch)//goes through every cell/column[i] of the current[y]string 
						// if it finds the same number we pointed from char ch
			return (0);//we return from this function to possible-function and come back with different number(ch)
		
		i++;//moves to the next cell/column
	}
	i = 0;//reseting i is muy importante
	while (i < 9)
	{
		if (sudoku->grid[i][x] == ch)//through current column position[x] of every string[i].
			return (0);
		i++;//moving to next line. x stays the same /possible-function call
	}
	//if possible-function don't find same number (char ch) from x- or y-axis
	//we check if the 3x3 grids are also valid with this one number. See above for check_square
	return (check_square(sudoku, y, x, ch));
	//check_square give us either 0 or 1. Not good or good. Let's return to fill-function in main.c
}

void	print(t_sudoku *sudoku)
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(sudoku->completed_grid[i][j]);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

//came from solution_found in main.c
//copying grid to completed_grid so we can reset grid later.
void	set_completed_grid(t_sudoku *sudoku)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			sudoku->completed_grid[i][j] = sudoku->grid[i][j];
			j++;
		}
		i++;
	}
}

#endif