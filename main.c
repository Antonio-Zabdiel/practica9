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
    int array1[100];
    int array2[100];
    int array3[100];
    int i, j, k, l, m, n;//iteradores
    int nr;//para guardar ek numero random

    for (i = 0; i <= 99; i++){
        //printf("%d\n", i);
        nr = randomnum();
        array1[i] = nr;  
        nr = 0;
    }

    for (n = 0; n <= 99; n++)
    {
        printf("%d\n", array1[n]);
    }
    /*for (j = 0; j <= 99; j++){
        nr = randomnum();
        array2[j] = nr;   
        nr = 0; 
        j++;
    }

    for (k = 0; k <= 99; k++)
    {
        l = 0;//recorre array 1
        m = 0;//recorre array 2

        array3[k] = l*m;

        l++;m--;
    }

    for (n = 0; n <= 99; n++)
    {
        printf("%d\t%d\t%d\t\n", array1[n], array2[n], array3[n]);
    }
    //b = randomnum();
    //printf("%d\n",b);
*/
    return 0;
}

//pausa = getchar();
//char pausa = ' ';
int randomnum(){
    int a;
    srand(time(NULL));
    a = rand()%21;//valor entre [0,20]
    return a;
}
