#include <stdio.h>

int handleInsertFirstVertex()
{
  int vertex;
  printf("\nOk, agora insira o vértice que se quer começar a operação: ");
  scanf("%d", &vertex);
  return vertex;
}

int handleInsertOtherVertex()
{
  int vertex;
  printf("\nOk, agora insira o outro vértice que se quer estabelecer a operação: ");
  scanf("%d", &vertex);
  return vertex;
}

int handleInsertVertexNumber()
{
  int vertex;
  printf("\nInsira o número de vértices do grafo: ");
  scanf("%d", &vertex);
  return vertex;
}

int handleInsertMaxConnections()
{
  int connections;
  printf("\nInsira o grau máximo para um vértice: ");
  scanf("%d", &connections);
  return connections;
}
