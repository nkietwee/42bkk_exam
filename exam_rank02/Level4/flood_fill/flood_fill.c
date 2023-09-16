/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:43:53 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/27 00:39:03 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Passed Moulinette 2019.09.01

// This code is heavily influenced by @jochang's solution: github.com/MagicHatJo

// #include

/*
typedef struct 	s_point {
	int			x;				// x : Width  | x-axis
	int			y;				// y : Height | y-axis
}				t_point;

void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x
		|| tab[cur.y][cur.x] != to_fill)
		return;

	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}

#include<stdio.h>
#include<stdlib.h>

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
*/


/*
typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;



void  fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.x < 0 || cur.x >= size.x || cur.y < 0 || cur.y >= size.y
		|| tab[cur.y][cur .x] != to_fill)
		return;

	tab[cur.y][cur.x] = 'F';
	fill (tab, size, (t_point){cur.x-1 ,cur.y}, to_fill);
	fill (tab, size, (t_point){cur.x+1 ,cur.y}, to_fill);
	fill (tab, size, (t_point){cur.x ,cur.y - 1}, to_fill);
	fill (tab, size, (t_point){cur.x ,cur.y + 1}, to_fill);

}
void  flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}

#include<stdio.h>
#include<stdlib.h>

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
*/

//#include <stdio.h>

typedef struct  s_point
  {
    int           x;
    int           y;
} t_point;

void	ff(char **tab, t_point size, t_point begin, char this);

void 	flood_fill(char **tab, t_point size, t_point begin)
{
//	if(!( begin.x >= 0 && begin.y >= 0 && begin.x < size.x && begin.y < size.y))
//		return;
//	else
	//if ( begin.x >= 0 && begin.y >= 0 && begin.x < size.x && begin.y < size.y)
//	{
//		if (tab[begin.y][begin.x] == '1')
//		{
	//		tab[begin.y][begin.x] = 'F';
		//}
		//begin.x += 1;
 		//flood_fill(tab, size, begin);
		//begin.x -= 2;
 		//flood_fill(tab, size, begin);
		//begin.x += 1;
		//begin.y += 1;
 		//flood_fill(tab, size, begin);
		//begin.y -= 2;
 		//flood_fill(tab, size, begin);
	//	begin.y += 1;
//	}
	ff(tab, size, begin, tab[begin.y][begin.x]);
}
void	ff(char **tab, t_point size, t_point begin, char this)
{
	if (begin.x < 0 || begin.y < 0 || begin.x >= size.x || begin.y >= size.y)
		return ;
	if (tab[begin.y][begin.x] == 'F' || tab[begin.y][begin.x] != this)
		return ;
	tab[begin.y][begin.x] = 'F';

	ff(tab, size, (t_point){begin.x - 1, begin.y }, this);
	ff(tab, size, (t_point){begin.x + 1, begin.y }, this);
	ff(tab, size, (t_point){begin.x, begin.y - 1 }, this);
	ff(tab, size, (t_point){begin.x, begin.y + 1}, this);


}
/*
#include <stdlib.h>
#include <stdio.h>

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10000001",
		"10010101",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}*/
