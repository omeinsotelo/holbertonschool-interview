#ifndef SANDPILES_H_
#define SANDPILES_H_

#include <stdlib.h>
#include <stdio.h>

void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
int instable(int grid1[3][3], int backUp[3][3]);
void changeSand(int grid1[3][3], int i, int j);
void printGrids(int grid1[3][3]);


#endif /* SANDPILES_H_ */
