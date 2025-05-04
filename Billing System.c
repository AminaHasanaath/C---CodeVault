/*  Build a Billing System for a small store.  
> - Using control statements to loop through items, take input, calculate total + discount.  
> - Display final bill with tax and itemized list.
Developed by Amina Hasanaath*/
#include<stdio.h>
#include<string.h>
int main(){
    printf("=====================DMART MALL===================\n");
    printf("\t \tWelcome to our store!\t");

    char items[100][100];
    int total_items;
    int amt[100];
    float disc[100];
    float total_amt;
    float total_discount;
    float tax;
    
    printf("\nEnter the total number of items purchased:\t");
    scanf("%d",&total_items);
    getchar();
    for(int i =0;i<total_items;i++){
        printf("item[%d]: ",i+1);
        fgets(items[i],sizeof(items[i]),stdin);
        printf("Enter amount: \t");
        scanf("%d",&amt[i]);
        getchar();
        printf("Enter discount: \t");
        scanf("%f",&disc[i]);
        getchar();
       
        printf("\n");
        

    }
    printf("The items are :");
    for(int i =0;i<total_items;i++){
        printf("\nitem[%d] :     \t\t%s",i+1,items[i]);
        printf("amount paid [%d]: \t%d ",i+1,amt[i]);
        printf("\n");
        printf("discount paid [%d] : \t%0.2f" ,i+1,disc[i]);
        printf("\n");
    }
   for(int i =0;i<total_items;i++){
    total_amt+=amt[i];
     }
     printf("\nTotal amount : %0.2f", total_amt);

 for(int i =0;i<total_items;i++){
    total_discount += disc[i];
         }
         printf("\nTotal discount: %0.2f", total_discount);

         total_amt -= total_discount;
         //printf("\n\nThe payment :%0.2f",total_amt);
printf("\nEnter the tax : \t");
scanf("%f",&tax);
printf("\nTax : %0.2f",tax);
total_amt += tax;
printf("\nTotal bill: \t%0.2f",total_amt);

printf("\n\n\t=========THANKYOU FOR VISITING=========\t");
printf("\n\t============Visit Again===============");
printf("\n=======================DMART MALL=====================");

}
