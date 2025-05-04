/* 
>8. Car Rental System 
> - Use nested structures for car details and rental record.  
> - Use array of structures.
Developed by Amina Hasanaath
    
*/
/*SAMPLE DATA :
Name: Mercedes-Benz S-Class
Model: S500 4MATIC (2024)
Warranty: 4 years / 50,000 miles
Price: ₹1.8 Crore (India) or $120,000 (USA approx)
Rental Info:
₹55,000 per day (India)
Adding a union to save memory when storing either PAN or Aadhaar.*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    struct Car{
        char Model[40];
        char Name[30];
        int Warrenty;
        float price;
        struct Car *next;
        struct RentalInfo{
           float  Rental_amt;
        }info;

    };
    union AdhaarNumber{
       char adhaar[40];
    }Number;
     
int main(){
    struct Car *Car = malloc(sizeof(struct Car)); 
    union AdhaarNumber *Number = malloc(sizeof(union AdhaarNumber));
    char Carname[30];
        printf("Carname : \t");
        fgets(Carname,sizeof(Carname),stdin);
        Carname[strcspn(Carname, "\n")] = 0;
        strcpy(Car->Name,Carname);
    char Model[40];
        printf("Model : \t");
        fgets(Model,sizeof(Model),stdin);
        Model[strcspn(Model, "\n")] = 0;
        strcpy(Car->Model,Model);

        printf("Warrenty : \t");
        scanf("%d",&Car->Warrenty);
        printf("Price: ");
        scanf("%f",&Car->price);

        printf("\nCar Details");
        printf("\nCarname : %s\t",Car->Name);
        printf("\nModel : %s\t",Car->Model);
        printf("\nWarrenty : %d\t",Car->Warrenty);
        printf("\nPrice: $%0.2f\t",Car->price);
        rental(Car,Number);

}
void rental(struct Car *Car,union AdhaarNumber *Number);
void rental(struct Car *Car,union AdhaarNumber *Number){
    printf("\n");
    printf("\nBy the Price: $%0.2f\t",Car->price);
    printf("\nThe rental payment:\t  ");
    float rp  = 55.000;
    Car->price += rp;

    printf("%0.2f\n",Car->price);
    getchar();


    printf("\nWe need yourAdhaar Details to proceed.........");
    printf("\nEnter the Adhaar number /PAN:\t ");
    char Num[40];
    fgets(Num, sizeof(Num), stdin);
    Num[strcspn(Num, "\n")] = 0;
    strcpy(Number->adhaar, Num);  

    

    printf("\n=====Car Details=====");
        printf("\nCarname : %s\t",Car->Name);
        printf("\nModel : %s\t",Car->Model);
        printf("\nWarrenty : %d\t",Car->Warrenty);
        printf("\nPrice + Rental payment: $%0.2f\t",Car->price);
        printf("\nAdhaar Number: %s\t",Number->adhaar);
        
}
