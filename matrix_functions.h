#include "config.h"

void manipulateVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE], int vertex1, int vertex2, char operation)
{
  vertex1 = vertex1 - 1;
  vertex2 = vertex2 - 1;
  for (int i = 0; i < MATRIX_SIZE; i++)
  {
    for (int j = 0; j < MATRIX_SIZE; j++)
    {
      if (i == vertex1 && j == vertex2)
      {
        switch (operation)
        {
        case ADD:
          matrix[i][j] = 1;
          matrix[j][i] = 1;
          break;
        case REMOVE:
          matrix[i][j] = 0;
          matrix[j][i] = 0;
          break;
        default:
          break;
        }
        return;
      }
    }
  }
}

// int connectionsOnVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE], int vertex)
// {
//   vertex = vertex - 1;
//   for (int i = 0; i < MATRIX_SIZE; i++)
//   {
//     matrix
//   }
// }
