/* 
>5. Matrix Calculator using 2D arrays.  
> - Perform addition, subtraction, and multiplication via functions.
Developed By Amina Hasanaath  */

#include<stdio.h>
int add_2D_Matrix(int row,int column,int matrix_A[3][3],int matrix_B[3][3], int added_matrix[3][3]);
int sub_2D_Matrix(int row,int column,int matrix_A[3][3],int matrix_B[3][3], int subtracted_matrix[3][3]);
int multiply_2D_Matrix(int row,int column,int matrix_A[3][3],int matrix_B[3][3], int multiplied_matrix[3][3]);
int main(){
    printf("\n=====|=====MATRIX CALCULATOR=====|=====\n");
    int matrix_A[3][3];
    int matrix_B[3][3];
    int added_matrix[3][3];
    int subtracted_matrix[3][3];
    int multiplied_matrix[3][3];
    int i,j,row,column;
    printf("Enter the row size: ");
    scanf("%d",&row);
    printf("Enter the column size: ");
    scanf("%d",&column);
    
    printf("\nEnter the matrix_A entries:");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&matrix_A[i][j]);
        }
        printf("\n");
        
    }
    printf("\nEnter the matrix_B entries:");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&matrix_B[i][j]);
        }
        printf("\n");
        
    }

    printf("\nThe matrix_A entries are :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d  ",matrix_A[i][j]);
        }
        printf("\n");
    }

    printf(" ");

    printf("\nThe matrix_B entries are :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d  ",matrix_B[i][j]);
        }
        printf("\n");
    }
    add_2D_Matrix(row,column,matrix_A,matrix_B,added_matrix);
    printf("Added matrix :\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d  ", added_matrix[i][j]);
        }
        printf("\n");
    }

    
    sub_2D_Matrix(row,column,matrix_A,matrix_B,subtracted_matrix);
    printf("Subtracted matrix :\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d  ", subtracted_matrix[i][j]);
        }
        printf("\n");
    }

    multiply_2D_Matrix(row,column,matrix_A,matrix_B,multiplied_matrix);
    printf("Multiplied matrix :\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d  ", multiplied_matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}
    


int add_2D_Matrix(int row,int column,int matrix_A[3][3],int matrix_B[3][3], int added_matrix[3][3]){
   
    printf("\nThe matrix_A :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d\t",matrix_A[i][j]);
        }
        printf("\n");
    }

    printf("  ");

    printf("\nThe matrix_B :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d\t",matrix_B[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            added_matrix[i][j] = matrix_A[i][j] + matrix_B[i][j];
        }
    
    }
    return 0;
}

int sub_2D_Matrix(int row,int column,int matrix_A[3][3],int matrix_B[3][3], int subtracted_matrix[3][3]){
   
    printf("\nThe matrix_A :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d\t",matrix_A[i][j]);
        }
        printf("\n");
    }

    printf("  ");

    printf("\nThe matrix_B :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d\t",matrix_B[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            subtracted_matrix[i][j] = matrix_A[i][j] - matrix_B[i][j];
        }
    
    }
    return 0;
}

int multiply_2D_Matrix(int row,int column,int matrix_A[3][3],int matrix_B[3][3], int multiplied_matrix[3][3]){
   
    printf("\nThe matrix_A :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d\t",matrix_A[i][j]);
        }
        printf("\n");
    }

    printf("  ");

    printf("\nThe matrix_B :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d\t",matrix_B[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            multiplied_matrix[i][j] = 0;
            for(int k=0; k<column; k++) {
                multiplied_matrix[i][j] += matrix_A[i][k] * matrix_B[k][j];
            
        
        }
    
    }
    
}
return 0;
}
