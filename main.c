/*
dos arrays llenos de numeros random 
array1[0] * array 2[99] = array3[0]
array 1++ array 2-- array 3
que se pause cada 10 valores con un getchar 
mostrar resultados
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int randomnum();

int main(){
    srand(time(NULL));
    
    int array1[100];
    int array2[100];
    int array3[100];
    int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0;//iteradores
    int nr = 0;//para guardar ek numero random

    for (i = 0; i <= 99; i++){
        //printf("%d\n", i);
        //nr = randomnum();
        nr = rand()%11;
        array1[i] = nr;  
        nr = 0;
    }

    for (j = 0; j <= 99; j++){
        //nr = randomnum();
        nr = rand()%11;
        array2[j] = nr;   
        nr = 0; 
        //j++;
    }

    l = 0; m = 99;
    for (k = 0; k <= 99; k++)
    {
        array3[k] = array1[l]*array2[m];

        l++;m--;
    }

    for (n = 0; n <= 99; n++)
    {
        //printf("%d\t%d\t%d\t\n", array1[n], array2[n], array3[n]);
        printf("%d\t%d\t%d\n", array1[n], array2[n], array3[n]);
        //printf("%d\t\n", array2[n]);
    }

    //b = randomnum();
    //printf("%d\n",b);

    return 0;
}
