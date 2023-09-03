#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char* RLE(char *vet,int TAM, char *vetF){
   
    int cont = 0;
    char *vet2 = calloc(TAM*2, sizeof(char));
    char var = vet[0];
    char temp[4];
    char num, letra;

    for(int i = 0; i < strlen(vet)+1; i++){
        if(vet[i] == var){
            cont++;
        }else{
            sprintf(temp, "%d%c", cont, var);
            strcat(vet2,temp);
            var = vet[i];
            cont = 1;
        }
        
    }
   
   strcpy(vetF, vet2);
}



int main(){
    
    char vet[40];
    char vet2[strlen(vet)*2];
    strcpy(vet, "zzssssssssssasaafarqdf");
    
    RLE(vet,strlen(vet), vet2);
    

    for(int i = 0; i < strlen(vet2); i++){
        printf("%c", vet2[i]);
    }

    return 0;
}
