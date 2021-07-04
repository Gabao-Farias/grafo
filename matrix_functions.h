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
          matrix[i][j] += 1;
          matrix[j][i] += 1;
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

int connectionsOnVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE], int vertex)
{
  vertex -= 1;
  int connections = 0;
  for (int i = 0; i < MATRIX_SIZE; i++)
    matrix[vertex][i] == 1 ? connections += 1 : connections += 0;
  return connections;
}

void connectionsOnAllVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE], int resultMatrix[MATRIX_SIZE])
{
  for (int i = 0; i < MATRIX_SIZE; i++)
    resultMatrix[i] = connectionsOnVertex(matrix, i);
}

int vertexMaxConnections(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  int highestAmountOfConnections = 0;

  for (int i = 0; i < MATRIX_SIZE; i++)
    connectionsOnVertex(matrix, i) > highestAmountOfConnections
        ? highestAmountOfConnections = connectionsOnVertex(matrix, i)
        : highestAmountOfConnections = highestAmountOfConnections;

  return highestAmountOfConnections;
}

int vertexMinConnections(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  int lowestAmountOfConnections = 0;

  for (int i = 0; i < MATRIX_SIZE; i++)
    connectionsOnVertex(matrix, i) < lowestAmountOfConnections
        ? lowestAmountOfConnections = connectionsOnVertex(matrix, i)
        : lowestAmountOfConnections = lowestAmountOfConnections;

  return lowestAmountOfConnections;
}

bool isNeighbour(int matrix[MATRIX_SIZE][MATRIX_SIZE], int vertex1, int vertex2)
{
  vertex1 -= 1;
  vertex2 -= 1;

  return matrix[vertex1][vertex2] == 1 ? true : false;
}
