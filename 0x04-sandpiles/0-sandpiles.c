#include "sandpiles.h"
/**
 * sandpiles_sum - sum sand piles
 *
 * @grid1: sand pile 1
 * @grid2: sand pile 2
 *
 * Return: none
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i = 0, j = 0;
	int backUp[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
		}
	}

	while (instable(grid1, backUp) != 0)
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (backUp[i][j] == 1)
					changeSand(grid1, i, j);
			}
		}
	}
}
/**
 * instable - copy instables num in grid
 *
 * @grid1: sand pile 1 to verify
 * @backUp: grid with backup
 *
 * Return: 0 is stable, otherwise not is instable
 */
int instable(int grid1[3][3], int backUp[3][3])
{
	int i = 0, j = 0, cnt = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid1[i][j] > 3)
			{
				cnt++;
				backUp[i][j] = 1;
			}
			else
				backUp[i][j] = 0;
		}
	}

	if (cnt != 0)
		printGrids(grid1);

	return (cnt);
}
/**
 * changeSand - redistribution sand
 *
 * @grid1: sand pile 1
 * @i: row
 * @j: column
 *
 * Return: none
 */
void changeSand(int grid1[3][3], int i, int j)
{
	int topx = i - 1, leftx = i, rightx = i, bottomx = i + 1;
	int topy = j, lefty = j - 1, righty = j + 1, bottomy = j;

	grid1[i][j] -= 4;
	if (topx >= 0 && topx < 3 && topy >= 0 && topy < 3)
		grid1[topx][topy] += 1;
	if (leftx >= 0 && leftx < 3 && lefty >= 0 && lefty < 3)
		grid1[leftx][lefty] += 1;
	if (rightx >= 0 && rightx < 3 && righty >= 0 && righty < 3)
		grid1[rightx][righty] += 1;
	if (bottomx >= 0 && bottomx < 3 && bottomy >= 0 && bottomy < 3)
		grid1[bottomx][bottomy] += 1;
}
/**
 * printGrids - print the grid
 *
 * @grid1: sand pile 1
 *
 * Return: none
 */
void printGrids(int grid1[3][3])
{
	int i, j;

	printf("=\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid1[i][j]);
		}
		printf("\n");
	}
}
