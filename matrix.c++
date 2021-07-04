#include <stdio.h>
#include <stdlib.h>
#include "ui.h"
#include "config.h"
#include "matrix_functions.h"
#include "connectVertexUI.h"

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

int main()
{
  int matrix[MATRIX_SIZE][MATRIX_SIZE] = {0};

  int menuOption = 1;
  while (menuOption != 0)
  {
    menuOption = getMenuOption();

    switch (menuOption)
    {
    case 1:
      handleConnectVertex(matrix);
      break;
    case 2:
      handleDisconnectVertex(matrix);
      break;
    case 3:
      handleVertexConnections(matrix);
      break;
    case 4:
      handleAllVertexConnections(matrix);
      break;
    default:
      break;
    }
  }

  return 0;
}
