#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

#define MATRIX_SIZE 12

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
      printf("Elemento adicionado!\n");
      // handleAddElement();
      break;
    case 2:
      printf("Elemento removido!\n");
      // handleAddElement();
      break;
    case 3:
      printf("Elemento editado!\n");
      // handleAddElement();
      break;
    default:
      break;
    }
  }

  return 0;
}
