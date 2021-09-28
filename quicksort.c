#include "quicksort.h"
//=============================================================================
void quicksortRec(int *array, int esq, int dir) {
    int i = esq, j = dir;

    int maior = array[0];
    for(int a=0;a<dir+1;a++)
    {
      if(array[a]> maior)
      {
        maior = array[a];
      }

    }



    int pivo = maior;
    while (i <= j) {
        while (array[i] < pivo) i++;
        while (array[j] > pivo) j--;
        if (i <= j) {
            swap(array + i, array + j);
            i++;
            j--;
        }
    }
    if (esq < j)  quicksortRec(array, esq, j);
    if (i < dir)  quicksortRec(array, i, dir);
}
//=============================================================================
void quicksort(int *array, int n) {
    quicksortRec(array, 0, n-1);
}
//=============================================================================
