#include <stdio.h>

void MoveTorre(int casastorre){

    if (casastorre > 0){
        printf ("Torre: direita \n");
        MoveTorre (casastorre - 1);
    }
}

void MoveBispo(int casasbispo){

    if (casasbispo > 0){
        printf ("Bispo: esquerda e cima \n");
        MoveBispo (casasbispo - 1);
    }
}

void MoveRainha(int casasrainha){

    if(casasrainha > 0){
        printf ("Rainha: direita \n");
        MoveRainha (casasrainha - 1);
    }
}

void MoveCavalo(int casascavalo){

    int c;
    
    while(casascavalo--){
        for( c = 1; c <= 2; c++){
            printf("Cavalo: direita \n");
        }
        printf("Cavalo: cima \n");
    }
}

int main(){

    MoveTorre(5);
    MoveBispo(5);
    MoveRainha(5);
    MoveCavalo(1);
    
return 0;
}