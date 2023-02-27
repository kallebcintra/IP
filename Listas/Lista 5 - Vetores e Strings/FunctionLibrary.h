#include <stdio.h>

int menorValor(int *V, int T)
{
    int x;
    int y = T;
    int menor;

    menor = V[0];
    for (x = 1; x < y; x++) 
    {
        if (V[x] < menor) 
        {
            menor = V[x];  
        } 
    }

    return menor;
}

int menorValor2(int *V, int T)
{
    int i;
    int y = T;
    int menor;
    int secondsmallest;

     if (V[0] < V[1]) {
        menor = V[0];
        secondsmallest = V[1];
    }
    else {
      menor = V[1];
      secondsmallest = V[0];
    }
    for (i = 2; i < y; i++) {
        if (V[i] < menor) {
        secondsmallest = menor;
        menor = V[i];
        }
        else if (V[i] < secondsmallest) {
            secondsmallest = V[i];
        }
    }
    return secondsmallest;
}