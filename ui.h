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
  printf("[1] Conectar vértices\n");
  printf("[2] Desconectar vértices\n");
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
