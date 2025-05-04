/* 4. Create a program to sort names using pointers and arrays.  
> - Input N names.  
> - Use pointer logic to sort and display in alphabetical order.
Developed by Amina Hasanaath
*/
#include<stdio.h>
#include<string.h>
int main(){
    
   char *Names[100];
   int i = 0;

   printf("Enter the Names to be stored : ");
   for(i = 0;i<4;i++){
    Names[i] = malloc(100 * sizeof(char));
    scanf("%s",Names[i]);
   }
   
   printf("The Names stored :\n");
   for(i = 0;i<4;i++){
    printf("%s\n",Names[i]);
    }


    printf("Sorting the List\n");
   for(i = 0;i<4;i++){
   printf("%s\n",Names[i]);
   }
   printf("Sorting.......");
   for(i = 0; i < 4 - 1; i++) {
    for(int j = i + 1; j < 4; j++) {
        if(strcmp(Names[i], Names[j]) > 0) {
           
            char *temp = Names[i];
            Names[i] = Names[j];
            Names[j] = temp;
        }
    }
}
printf("The Names stored :\n");
   for(i = 0;i<4;i++){
    printf("%s\n",Names[i]);
    }
    for(i = 0;i<4;i++){
        free(Names[i]);
        }

    return 0;


}
