#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int n = 2;
   char nomes[100][100],copia[100];
   printf("Digite dois nomes:\n");

   for(int i=0; i<n; i++){
      scanf("%s",nomes[i]);
   }

   for(int i=0; i<n; i++){
      for(int j=i+1; j<n; j++){
         if(strcmp(nomes[i],nomes[j])>0){
            strcpy(copia,nomes[i]);
            strcpy(nomes[i],nomes[j]);
            strcpy(nomes[j],copia);
         }
      }
   }

   printf("\nEm ordem alfabetica fica: \n");
   for(int i=0; i<n; i++){
      printf("%s\n",nomes[i]);
   }
}
