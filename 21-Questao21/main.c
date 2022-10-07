#include <stdlib.h>
#include <stdio.h>

int main()
{
    int arr1[11], arr2[11], arr3[11];
    int i,j=0,k=0;
    int n = 12;

   printf("Digite 12 numeros para botar no array: \n");

   for(i=0;i<n;i++){
      printf("valor - %d : ",i);
      scanf("%d",&arr1[i]);
    }

    for(i=0;i<n;i++){
	if (arr1[i]%2 == 0){
	   arr2[j] = arr1[i];
	   j++;
        }else {
           arr3[k] = arr1[i];
           k++;
        }
    }

    printf("\nOs numeros pares sao: \n");

    for(i=0;i<j;i++){
	printf("%d ",arr2[i]);
    }

    printf("\nOs numeros impares sao:\n");
    for(i=0;i<k;i++){
	printf("%d ", arr3[i]);
    }

    return 0;
 }
