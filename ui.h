#include <stdio.h>
#include "config.h"

void wipeTerminal()
{
  printf("\e[1;1H\e[2J");
}

void printMainMenu()
{
  printf("-----MENU-----\n");
  printf("[0] Sair\n");
  printf("[1] Grau de um vértice\n");
  printf("[2] Grau de todos os vértices\n");
  printf("[3] Grau máximo e mínimo do grafo\n");
  printf("[4] Verificar se vértices são vizinhos\n");
  printf("[5] Verificar se o grafo é multigrafo\n");
  printf("[8] Verificar todos os vizinhos de um vértice\n");
  printf("-----EDIÇÃO GRAFO-----\n");
  printf("[11] Conectar vértices\n");
  printf("[12] Desconectar vértices\n");
}

int getMenuOption()
{
  int menuOption = 1;

  printMainMenu();

  scanf("%d", &menuOption);
  return menuOption;
}

void printMatrix(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
  for (int i = 0; i < MATRIX_SIZE; i++)
  {
    printf("| ");
    for (int j = 0; j < MATRIX_SIZE; j++)
    {
      printf("%d", matrix[i][j]);
      printf(" | ");
    }
    printf("\n");
  }
}

void genericSuccessfullOperationMessage()
{
  printf("Operação realizada com sucesso!\n\n");
}

void connectionsOnVertexMessage(int vertex, int connections)
{
  printf("O vértice %d tem grau %d\n", vertex, connections);
}

void connectionsOnAllVertexMessage(int resultVertex[MATRIX_SIZE])
{
  for (int i = 0; i < MATRIX_SIZE; i++)
  {
    printf("Vértice: %d | Grau: %d\n", i + 1, resultVertex[i]);
  }
}

void maxAndMinConnectionsOnMatrixMessage(int max, int min)
{
  printf("Grau máximo: %d\n", max);
  printf("Grau mínimo: %d\n", min);
}

void isNeighbourMessage(int vertex1, int vertex2, int isNeighbour)
{
  isNeighbour
      ? printf("Os vértices %d e %d são vizinhos.\n", vertex1, vertex2)
      : printf("Os vértices %d e %d não são vizinhos.\n", vertex1, vertex2);
}

void isMultimatrixMessage(bool isMultimatrix)
{
  isMultimatrix
      ? printf("O grafo é um multigrafo.\n")
      : printf("O grafo não é um multigrafo.\n");
}

void allNeighboursOfVertexMessage(int neighbours[MATRIX_SIZE], int vertex)
{
  printf("Os vizinhos do vértice %d são: ", vertex);

  for (int i = 0; i < MATRIX_SIZE; i++)
  {
    if (neighbours[i] == 1)
      printf("%d | ", i + 1);
  }
  printf("\n");
}
