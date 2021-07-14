#include <stdio.h>
#include <stdlib.h>
#include "generalUI.h"
#include "insertValuesUI.h"
#include "Grafo.h"
#include "Grafo.c"
#include "FuncoesGrafo.h"

Grafo *startCreation()
{
  int numeroVertices = handleInsertVertexNumber();
  int grauMax = handleInsertMaxConnections();

  return cria_Grafo(numeroVertices, grauMax, 0);
}

// void handleCreateVertex(int createdVertexes[MATRIX_SIZE])
// {
//   int vertex1 = handleInsertFirstVertex();

//   if (createdVertexes[vertex1 - 1] == 1)
//   {
//     warningVertexAlreadyExistsMessage(vertex1);
//     return;
//   }

//   createVertex(createdVertexes, vertex1);
//   genericSuccessfullOperationMessage();
// }

// void handleConnectVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE], int createdVertexes[MATRIX_SIZE])
// {
//   int vertex1 = handleInsertFirstVertex();
//   int vertex2 = handleInsertOtherVertex();

//   int response = manipulateVertex(matrix, createdVertexes, vertex1, vertex2, ADD);
//   switch (response)
//   {
//   case 0:
//     genericSuccessfullOperationMessage();
//     break;
//   case 1:
//     warningUnavailableVertexMessage();
//     break;
//   default:
//     break;
//   }

//   if (DEBUG_MODE)
//     printMatrix(matrix);
// }

// void handleDisconnectVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE], int createdVertexes[MATRIX_SIZE])
// {
//   int vertex1 = handleInsertFirstVertex();
//   int vertex2 = handleInsertOtherVertex();

//   int response = manipulateVertex(matrix, createdVertexes, vertex1, vertex2, REMOVE);
//   switch (response)
//   {
//   case 0:
//     genericSuccessfullOperationMessage();
//     break;
//   case 1:
//     warningUnavailableVertexMessage();
//     break;
//   default:
//     break;
//   }

//   if (DEBUG_MODE)
//     printMatrix(matrix);
// }

// void handleVertexConnections(int matrix[MATRIX_SIZE][MATRIX_SIZE])
// {
//   int vertex1 = handleInsertFirstVertex();

//   int connections = connectionsOnVertex(matrix, vertex1);

//   connectionsOnVertexMessage(vertex1, connections);
// }

// void handleAllVertexConnections(int matrix[MATRIX_SIZE][MATRIX_SIZE], int createdVertexes[MATRIX_SIZE])
// {
//   int resultVertex[MATRIX_SIZE] = {0};

//   connectionsOnAllVertex(matrix, resultVertex, createdVertexes);

//   connectionsOnAllVertexMessage(resultVertex, createdVertexes);
// }

// void handleMaxMinMatrixConnections(int matrix[MATRIX_SIZE][MATRIX_SIZE], int createdVertexes[MATRIX_SIZE])
// {
//   int maxConnections = vertexMaxConnections(matrix, createdVertexes);
//   int minConnections = vertexMinConnections(matrix, createdVertexes);

//   maxAndMinConnectionsOnMatrixMessage(maxConnections, minConnections);
// }

// void handleIsVertexNeighbour(int matrix[MATRIX_SIZE][MATRIX_SIZE])
// {
//   int vertex1 = handleInsertFirstVertex();
//   int vertex2 = handleInsertOtherVertex();

//   bool result = isNeighbour(matrix, vertex1, vertex2);

//   isNeighbourMessage(vertex1, vertex2, result);
// }

// void handleMultiConnectionsOnVertexPair(int matrix[MATRIX_SIZE][MATRIX_SIZE])
// {
//   bool result = isMultimatrix(matrix);

//   isMultimatrixMessage(result);
// }

// void handlePathBetweenVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE])
// {
//   unnavailableFeatureMessage();
// }

// void handleIsPathACycle(int matrix[MATRIX_SIZE][MATRIX_SIZE])
// {
//   unnavailableFeatureMessage();
// }

// void handleAllNeighboursOfVertex(int matrix[MATRIX_SIZE][MATRIX_SIZE])
// {
//   int vertex1 = handleInsertFirstVertex();
//   int neighbours[MATRIX_SIZE] = {0};

//   allNeighboursOfVertex(matrix, neighbours, vertex1);

//   allNeighboursOfVertexMessage(neighbours, vertex1);
// }

// void handleIsFullConnected(int matrix[MATRIX_SIZE][MATRIX_SIZE], int createdVertexes[MATRIX_SIZE])
// {
//   bool result = isFullConnected(matrix, createdVertexes);

//   isFullConnectedMessage(result);
// }

// void handleUnconnectedVertexes(int matrix[MATRIX_SIZE][MATRIX_SIZE], int createdVertexes[MATRIX_SIZE])
// {
//   int unconnectedVertexes[MATRIX_SIZE] = {0};

//   allUnconnectedVertexes(matrix, createdVertexes, unconnectedVertexes);

//   allUnconnectedVertexesMessage(unconnectedVertexes);
// }

int main()
{
  int eh_digrafo = 0;

  Grafo *graf = startCreation();

  int menuOption = 1;
  while (menuOption != 0)
  {
    menuOption = getMenuOption();

    switch (menuOption)
    {
    case 1:

      break;
    case 2:

      break;
    case 3:

      break;
    case 4:

      break;
    case 5:

      break;
    case 6:

      break;
    case 7:

      break;
    case 8:

      break;
    case 9:

      break;
    case 10:

      break;
    case 11:

      break;
    case 12:

      break;
    case 13:

      break;
    case 14:

      break;
    default:
      break;
    }
  }

  libera_Grafo(graf);

  return 0;
}
