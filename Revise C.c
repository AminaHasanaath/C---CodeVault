//1.AREA - BASIC C PROGRAM
#include<stdio.h>  //Input Output Library
int main(){ //starting of the program
    int area = 0; // datatype <var> = initialization
    int s=9;
    area = s * s; 
    printf("The area of the square is : %d",area); //i/o functions prints on screen
    return 0; //every function ends with return(the stmt returns either value or 0 or 1)

}

//2.ODD & EVEN - IF ELSE STMT
#include<stdio.h>
int main()
{
    int num;        
    printf("Enter the num :");        
    scanf("%d", &num);        // i/o funtion that takes the input from the user 
        //%d stands for the format specifier ; "&" operator acts as address of the value

        /*conditional statements that runs only if condition is true else it returns nothing*/
    if(num%2 == 0){         //if stmt takes one condition then prints the statements
        printf("%d is even", num);
    }
    else{        //if the "if" condition fails it executes the else
        printf("%d is odd",num);

        }
}

//3.leap year -  NESTED IF 
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                printf("%d is a leap year",year); //nested if , one if in another if block
            }else{
                printf("%d is not a leap year",year);
            }
        }else{
            printf("%d is a leap year",year);
        }
        }else{
        printf("%d is not a leap year",year);
        }
}

//4.greater - TERNARY OPERATOR
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the numbers : ");
    scanf("%d",&a);
    scanf("%d",&b);
        //condition?exp1:exp2
    (a>b)?printf("%d is greater than %d",a,b):printf("%d is greater than %d",b,a);
        
    return 0;
}


//5. calculator - SWITCH
#include<stdio.h>
int main(){
    int n1 , n2;
    char ch;

    printf("Enter the numbers :");
    scanf("%d%d",&n1,&n2);

    printf("Enter the operator (+,-,*,/):");//arithematic operators
    scanf("%c", &ch);
        /*the switch stmt runs according to the choice of the user, whichever blocks matches
        with the users given a choice*/
    switch(ch){
        case '+': {
            int add = n1 + n2;
            printf("%d",add);
            break; /*the "break" statement acts as the jumping statements it breaks 
            the current sitution*/

        }
        
            
        case '-': {
         int sub = n1 - n2;
        printf("%d",sub);
        break;
        }

        case '*': {
        int mult =  n1 * n2;
        printf("%d",mult);
        break;
        }

        case '/': {
        int div = n1 / n2;
        printf("%d",div);
        break;
        }

        default: {        /* The default statememt is the sitution when no case matches with
                  the choice of user*/
            printf("Invalid operator");
        break;
    }
        
}
}

//6.Hello World - FOR LOOP
//hello world loop
#include<stdio.h>
int main(){
     for(int i = 0 ;i< 3; i++)
        //for(declaration(init); condition ;increment)
     {
        printf("Hello World! \n");
    }
}

//odd - CONTINUE
#include<stdio.h>
int main(){
    int num ;
    printf("Enter the num :");
    scanf("%d",&num);
    for(int i = 0 ; i < num ; i++){
        if(i%2 == 0){
                /*continue skips the current iteration or the excution of the statement and 
                        continues" the another one*/
            continue;
        }
        else
        printf("%d",i);
    

    }
}

//7. printing Numbers - WHILE
#include<stdio.h>
int main(){
    int i = 100;
    while(i>=0){        /* it uses a condition and checks if the statement can get executed 
            it results out , but if it fails it doesn't return any value */
        printf("%d\n",i);
        i--;
    }
}
//8. printing Numbers - DO-WHILE
#include<stdio.h>
int main(){
    int i=1;
    do{
        printf("%d\n",i); /*first it executes the statement then checks whether it matches 
            given condition*/
        i++;
   }
   while(i<=10);//atleast once the execution is possible
   }
 
//9. count - DO WHILE
#include<stdio.h>
int main(){
    int c=0,n;
    printf("Enter the num : ");
    scanf("%d",&n);
    while(n!=0)
    {
        n = n/10;
       c++;        //counts the digit in the given number 
     }
      printf("%d",c);
      }

//10. reverse of num - WHILE
#include<stdio.h>
int main(){
    int n;
    printf("Enter the num : ");
    scanf("%d",&n);
    int r = 0;
    while(n != 0){
        r = r * 10 + n % 10;
        n = n / 10;
    }
    printf("%d ", r);
}

//11. goodbye - FUNCTION
#include<stdio.h>
void printFunction(); // no argument function
void printFunction(){ // returnType FucntionName (arguments)
    printf("Hello\n");
}
void printGoodbye();
void printGoodbye(){
    printf("Goodbye !");
}
int main(){
    printFunction();
    printGoodbye();
    return 0;

}

//12. sum - ARGUMENT FUNCTION
#include<stdio.h>
   int sum(int a , int b);
/*declaration of the function*/

int main(){
    int a,b,r;
    int sum(int a , int b){ // definition of the function , reference values
        return a + b;
    }
    printf("Enter the values : ");
    scanf("%d%d",&a,&b);
    r = sum(a,b);// calling function by passing values , actual values
    printf("Sum = %d",r);
    }

/*13. factorial - RECURSIVE FUNCTION*/
#include<stdio.h>
int fact(int n);
int fact(int n){
    if(n == 0 || n == 1) {
        return 1;
        }
    return n * fact(n-1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, fact(n)); /* a function calling itself 
            is called recursive function*/

 
}

//14. Swap - FUNCTION USING POINTER
#include<stdio.h>
int swap(int a, int b);

int swap(int a , int b){
    int *p1, *p2;// pointer variables 
    int t;
    p1 = &a;
    p2 = &b; //pointer variable storing the value of a and b respectively

     t = *p1;// attacks the address
    *p1 = *p2;
    *p2 = t;
    
    printf("The numbers after swapping :%d and %d ", a,b);
    }
int main(){
    int a,b,*p1,*p2,t;
    printf("Enter the num : ");
    scanf("%d",&a);
    scanf("%d",&b);
    swap(a,b); // call by reference 
}


/*15. adhar - 1D ARRAYS*/
#include<stdio.h>
int main(){
int a[10];  // Array of 10 numbers - members with the same datatype
int *ptr;        // pointer 
 *ptr = a[10]; //a set of array in the pointer variable 
printf("Enter the adhaar numbers : ");
for(int i = 0; i < 10; i++){
    printf("\nN :" );
    scanf("%d",&a[i]); // i is the Index , the starting of the value
    ptr++; /* We can use the ptr to take the values from the array using increment 
    decrement using ptr variable*/
    printf("\n the numbers at %u is : %d", *ptr,a[i]);
}
}

/*16. marks - 2D ARRAY*/
#include <stdio.h>
int main(){
    int r,c,i,j; /* rows (r), columns(c), 
        i(loop variable for rows ), j(loop variable for column)*/
    int a[10][10]; /*array of rows and columns, HERE 10 10 in the i and
        j places respectively is CAPACITY OF THR ARRAY*/
    printf("Enter the size of the array: ");// size means the rows and columns kitne hai?
    scanf("%d%d",&r,&c); 
    printf("Enter the elements of the array: ");// elements of the ARRAY one by one using loop
    for(i=0;i<r;i++){ // row loop
         for(j=0;j<c;j++){ //coloumn loop
    scanf("%d",&a[i][j]);
}
    }
    printf("Entered array is:\n");
     for(i=0;i<r;i++){ 
        for(j=0;j<c;j++){
    printf("\t %d",a[i][j]); // printing the array
}
    printf("\n"); /* \t \n are the escape sequences that we use for the structure of the o/p*/
}
}


/*17. Slicing - Strings*/
#include<stdio.h> 
#include<string.h> // string library
void slice(char *str); // a function using the call by reference topic
void slice(char *str){
    int m,n;
    printf("Enter the string :",str); /*strings are the set of charecters  in " "*/
    scanf("%s",str);//%s is the string format specifier
    printf("\n%s is the string :",str);
    printf("Enter the start index :");
    scanf("%d",&m);
    printf("Enter the end index :");
    scanf("%d",&n);

        //the logical operators || && 
    if(m<0 || m>strlen(str) || n<0 || n>strlen(str)){
        printf("Invalid index");
    }
    char str2[n-m+2];
    str2[n-m+1] = '\0';
    strncpy(str2,str+m,n-m);
    printf("The sliced string is :%s",str2);
    
    }

int main(){
    char str[100];
     slice(str);
    return 0;


}


/*18. address - STRUCTURE*/
#include<stdio.h>
typedef struct addressOf_5{ /* structure is the word which includes the different kind of memebers*/
    int house_no[10];
    int block;
    char city[10];
    char state[10];
}a; //typedef is nothing but when we use the nick name<Alias> rather than complete struct name : 'a'
int main(){
    a a1,a2,a3,a4,a5;
    printf("Enter the address of person 1:\n");
    scanf("%d %d %s %s",&a1.house_no[0],&a1.block,a1.city,a1.state);
    printf("The address of person 1 : \n");
    printf("house no :%d\nBlock: %d\nCity : %s\nState: %s\n",a1.house_no[0],a1.block,a1.city,a1.state);

    printf("Enter the address of person 2:\n");
    scanf("%d %d %s %s",&a2.house_no[0],&a2.block,a2.city,a2.state);
    printf("The address of person 2 : \n");
    printf("house no :%d\nBlock: %d\nCity : %s\nState: %s\n",a2.house_no[0],a2.block,a2.city,a2.state);
    
    printf("Enter the address of person 3:\n");
    scanf("%d %d %s %s",&a3.house_no[0],&a3.block,a3.city,a3.state);
    printf("The address of person 3 : \n");
    printf("house no :%d\nBlock: %d\nCity : %s\nState: %s\n",a3.house_no[0],a3.block,a3.city,a3.state);
    
    printf("Enter the address of person 4:\n");
    scanf("%d %d %s %s",&a4.house_no[0],&a4.block,a4.city,a4.state);
    printf("The address of person 4 : \n");
    printf("house no :%d\nBlock: %d\nCity : %s\nState: %s\n",a4.house_no[0],a4.block,a4.city,a4.state);
    
    printf("Enter the address of person 5:\n");
    scanf("%d %d %s %s",&a5.house_no[0],&a5.block,a5.city,a5.state);
    printf("The address of person 5 : \n");
    printf("house no :%d\nBlock: %d\nCity : %s\nState: %s\n",a5.house_no[0],a5.block,a5.city,a5.state);
    return 0;


}

/*19. replace - FILE HANDLING */
#include <stdio.h>
#include <string.h>
int main(){
    FILE *f; /*"FILE" datatype is used , *f is the file pointer  to access the rom*/
    f = fopen("replace.txt", "r");// read mode - 'r'
        // fopen is the function used by files to open 
    /*"the file name" and the mode is written*/
        if(f == NULL){
        printf(" file doesn't exist !\n");// checking whether the file is empty or not
        return 1;
    }
    char ch[20];
    fgets(ch, 20, f); // getting the charecters from the files using this function
    printf("Current content: %s", ch);
    printf("\nEnter the new content: ");
    char new_content[20];
    scanf("%s", new_content);
     f = fopen("replace.txt", "w");/* write mode*/
     fprintf(f, "%s", new_content); // writng something in the file


    fclose(f); /*closing the file*/
}


/* 20. price - MEMORY ALLOCATION */
#include <stdio.h>
#include <stdlib.h>

int main() {
    float *f;
    int n;
    printf("Enter the n:");
    scanf("%d", &n); /* type casting to extend the memory*/
    f = (float *)malloc(n * sizeof(float));// calloc(n,sizeof(float))
    if (f == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Enter the value for element %d: ", i + 1);
        scanf("%f", &f[i]);
    }
    printf("Memory allocated successfully\n");

    // reallocating memory
    f = realloc(f, (n + 1) * sizeof(float));
    if (f == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
    printf("Memory reallocated successfully\n");

    float price[5];
    printf("Enter the prices : ");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &price[i]);
        printf("The price of item %d is %f\n", i + 1, price[i]);
    }

    // freeing memory
    free(f);
    printf("Memory freed successfully\n");

    return 0;
}


