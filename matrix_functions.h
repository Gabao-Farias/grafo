#include "config.h"

void createVertex(int createdVertexes[MATRIX_SIZE], int vertex)
{
  createdVertexes[vertex - 1] = 1;
}

int manipulateVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE], int createdVertexes[MATRIX_SIZE], int vertex1, int vertex2, char operation)
{
  vertex1 = vertex1 - 1;
  vertex2 = vertex2 - 1;

  if ((createdVertexes[vertex1] == 0) || (createdVertexes[vertex2] == 0))
    return 1;

  switch (operation)
  {
  case ADD:
    matrix[vertex1][vertex2] += 1;
    matrix[vertex2][vertex1] += 1;
    break;
  case REMOVE:
    matrix[vertex1][vertex2] == 0 ? matrix[vertex1][vertex2] = 0 : matrix[vertex1][vertex2] -= 1;
    matrix[vertex2][vertex1] == 0 ? matrix[vertex2][vertex1] = 0 : matrix[vertex2][vertex1] -= 1;
    break;
  default:
    break;
  }

  return 0;
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

int isMultimatrix(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  bool result = false;

  for (int i = 1; i < MATRIX_SIZE; i++)
    for (int j = 0; j < MATRIX_SIZE; j++)
      if (matrix[i][j] > 1)
        return true;

  return false;
}

void allNeighboursOfVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE], int neighbours[MATRIX_SIZE], int vertex)
{
  vertex -= 1;

  for (int i = 0; i < MATRIX_SIZE; i++)
    if (matrix[vertex][i] >= 1)
      neighbours[i] = 1;
}

void allUnconnectedVertexes(int matrix[MATRIX_SIZE][MATRIX_SIZE], int createdVertexes[MATRIX_SIZE], int unconnectedVertexes[MATRIX_SIZE])
{
  bool hasConnection = false;

  for (int i = 0; i < MATRIX_SIZE; i++)
  {
    if (createdVertexes[i] == 1)
    {
      hasConnection = false;

      for (int j = 0; j < MATRIX_SIZE; j++)
        if (matrix[i][j] == 1)
          hasConnection = true;

      if (!hasConnection)
        unconnectedVertexes[i] = 1;
    }
  }
}
