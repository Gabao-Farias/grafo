#include <stdio.h>

void wipeTerminal()
{
  printf("\e[1;1H\e[2J");
}

void printMenu()
{
  // wipeTerminal();

  printf("-----MENU-----\n");
  printf("[0] Sair\n");
  printf("[1] Adicionar elemento\n");
  printf("[2] Remover elemento\n");
  printf("[3] Editar elemento\n");
}

int getMenuOption()
{
  int menuOption = 1;

  printMenu();

  scanf("%d", &menuOption);
  return menuOption;
}
