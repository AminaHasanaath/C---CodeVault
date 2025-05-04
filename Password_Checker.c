/*
9. Password Validator 
> Input a password, check if it’s strong (length, digits, special chars) — use string handling.
Developed by Amina Hasanaath
*/


#include<stdio.h>
#include<string.h>

int main(){
    char Password[20];
    printf("Enter the password (must contain digits or alphabets): \t");
    fgets(Password,sizeof(Password),stdin);
    Password[strcspn(Password, "\n")] = 0;
    printf("The Password (12 charecters): \t %s",Password);

    printf("\n");

    printf("\nThe length of the Password :%d",strlen(Password));
    
    if(strlen(Password) >= 12){
        printf("\nRequried Length is reached! Good");
        char special_char[20] = {'@','!','$','%','&'};
    int n = strlen(Password);
    int found = 0;
    for(int i=0;i<n;i++){
        for (int j = 0; j < strlen(special_char); j++) {
            if (Password[i] == special_char[j]) {
                found = 1; 
                break;     
            }
        }
    }
        if(found){
            printf("\nPassword Strength : Strong!");
        }else {
            printf("\nPassword Strength : Good!");
        }




    } else{
        printf("\nThe Password must contain 12 charecters");
    }   
    
        return 0;
        

     
}
