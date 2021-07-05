#include <stdio.h>
#include <stdlib.h>
#include "ui.h"
#include "config.h"
#include "matrix_functions.h"
#include "connectVertexUI.h"

void handleCreateVertex(int createdVertexes[MATRIX_SIZE])
{
  int vertex1 = handleInsertFirstVertex();

  if (createdVertexes[vertex1 - 1] == 1)
  {
    warningVertexAlreadyExistsMessage(vertex1);
    return;
  }

  createVertex(createdVertexes, vertex1);
  genericSuccessfullOperationMessage();
}

void handleConnectVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  int vertex1 = handleInsertFirstVertex();
  int vertex2 = handleInsertOtherVertex();

  manipulateVertex(matrix, vertex1, vertex2, ADD);

  genericSuccessfullOperationMessage();

  if (DEBUG_MODE)
    printMatrix(matrix);
}

void handleDisconnectVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  int vertex1 = handleInsertFirstVertex();
  int vertex2 = handleInsertOtherVertex();

  manipulateVertex(matrix, vertex1, vertex2, REMOVE);

  genericSuccessfullOperationMessage();

  if (DEBUG_MODE)
    printMatrix(matrix);
}

void handleVertexConnections(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  int vertex1 = handleInsertFirstVertex();

  int connections = connectionsOnVertex(matrix, vertex1);

  connectionsOnVertexMessage(vertex1, connections);
}

void handleAllVertexConnections(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  int resultVertex[MATRIX_SIZE] = {0};

  connectionsOnAllVertex(matrix, resultVertex);

  connectionsOnAllVertexMessage(resultVertex);
}

void handleMaxMatrixConnections(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  int maxConnections = vertexMaxConnections(matrix);
  int minConnections = vertexMinConnections(matrix);

  maxAndMinConnectionsOnMatrixMessage(maxConnections, minConnections);
}

void handleIsVertexNeighbour(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  int vertex1 = handleInsertFirstVertex();
  int vertex2 = handleInsertOtherVertex();

  bool result = isNeighbour(matrix, vertex1, vertex2);

  isNeighbourMessage(vertex1, vertex2, result);
}

void handleMultiConnectionsOnVertexPair(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  bool result = isMultimatrix(matrix);

  isMultimatrixMessage(result);
}

void handlePathBetweenVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  unnavailableFeatureMessage();
}

void handleIsPathACycle(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  unnavailableFeatureMessage();
}

void handleAllNeighboursOfVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  int vertex1 = handleInsertFirstVertex();
  int neighbours[MATRIX_SIZE] = {0};

  allNeighboursOfVertex(matrix, neighbours, vertex1);

  allNeighboursOfVertexMessage(neighbours, vertex1);
}

void handleUnconnectedVertexes(int matrix[MATRIX_SIZE][MATRIX_SIZE], int createdVertexes[MATRIX_SIZE])
{
  int unconnectedVertexes[MATRIX_SIZE] = {0};

  allUnconnectedVertexes(matrix, createdVertexes, unconnectedVertexes);

  allUnconnectedVertexesMessage(unconnectedVertexes);
}

int main()
{
  int createdVertexes[MATRIX_SIZE] = {0};
  int matrix[MATRIX_SIZE][MATRIX_SIZE] = {0};

  int menuOption = 1;
  while (menuOption != 0)
  {
    menuOption = getMenuOption();

    switch (menuOption)
    {
    case 1:
      handleVertexConnections(matrix);
      break;
    case 2:
      handleAllVertexConnections(matrix);
      break;
    case 3:
      handleMaxMatrixConnections(matrix);
      break;
    case 4:
      handleIsVertexNeighbour(matrix);
      break;
    case 5:
      handleMultiConnectionsOnVertexPair(matrix);
      break;
    case 6:
      handlePathBetweenVertex(matrix);
      break;
    case 7:
      handleIsPathACycle(matrix);
      break;
    case 8:
      handleAllNeighboursOfVertex(matrix);
      break;
    case 10:
      handleUnconnectedVertexes(matrix, createdVertexes);
      break;
    case 11:
      handleCreateVertex(createdVertexes);
      break;
    case 12:
      handleConnectVertex(matrix);
      break;
    case 13:
      handleDisconnectVertex(matrix);
      break;
    default:
      break;
    }
  }

  return 0;
}
