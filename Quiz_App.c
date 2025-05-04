/* 
> 2. Quiz App with multiple-choice questions (using switch-case).  
> - Show score at the end.  
> - Use loops to allow retrying
    Developed by Amina Hasanaath .*/

#include<stdio.h>
int main(){

    int option_no;
    int points = 0;
    int Answer;
    int correct = 0;
    int retry = 1;
    while(retry == 1){
    points = 0;
    printf("----------Computer Knowledge Quiz-----------\n");
    printf("Start(1) or Stop(2)\n");
    scanf("%d",&option_no);

    switch(option_no){


    case 1 : 
        printf("\nQ1. Who is the father of Computer ?\n");
        printf("1.Dennnis Ritche \n2.Mark Zuckerberg \n3.Steve Jobs \n4.Cherles Babbage ");
        printf("\n\nYour Answer : \t");
        scanf("%d",&Answer);
        correct = 4;
        switch(Answer){
            case 4 :
                   printf("Correct Answer! \n+10Points\n");
                    points += 10;
                    printf("----\tPoints : %d\n",points);
                    break;
                    default: goto end;
        } 
        

        printf("\n\nQ2. What is the full form of RAM?\n");
        printf("1.Random Access Memory \n2.Ran And Met \n3.Roses and More \n4.Random Access Mouse ");
        printf("\n\nYour Answer : \t");
        scanf("%d",&Answer);
        correct = 1;
        switch(Answer){
            case 1 :
                   printf("Correct Answer! \n+10Points\n");
                    points += 10;
                    printf("----\tPoints : %d\n",points);
                    break;
                    default: goto end;
        } 
        

        printf("\nQ3. What does CPU stand for?\n");
        printf("1.Central Processing Unit\n2.Central Performance Unit \n3.Control Processing Unit \n4.Central Power Unit");
        printf("\n\nYour Answer : \t");
        scanf("%d",&Answer);
        correct = 1;
        switch(Answer){
            case 1 :
                   printf("Correct Answer! \n+10Points\n");
                    points += 10;
                    printf("----\tPoints : %d\n",points);
                    break;
                    default: goto end;
        } 
        

        printf("\nQ4.What is the brain of the Computer?\n");
        printf("1.Monitor\n2.CPU\n3.RAM\n4.KeyBoard");
        printf("\n\nYour Answer : \t");
        scanf("%d",&Answer);
        correct = 2;
        switch(Answer){
            case 2 :
                   printf("Correct Answer! \n+10Points\n");
                    points += 10;
                    printf("----\tPoints : %d\n",points);
                    break;
                    default: goto end;
        } 

        printf("\nQ5.Which one is the input device?\n");
        printf("1.Monitor\n2.Speaker\n3.Printer\n4.KeyBoard");
        printf("\n\nYour Answer : \t");
        scanf("%d",&Answer);
        correct = 4;
        switch(Answer){
            case 4 :
                   printf("Correct Answer! \n+10Points\n");
                    points += 10;
                    printf("----\tPoints : %d\n",points);
                    break;
                    default: goto end;
        } 
        

        printf("\nQ6.What is the full form of the HTTP?\n");
        printf("1.HyperText Transfer Protocol\n2.HyperText Transmission Program\n3.HyperText Transfer Program\n4.HyperText Translation Protocol");
        printf("\n\nYour Answer : \t");
        scanf("%d",&Answer);
        correct = 1;
        switch(Answer){
            case 1 :
                   printf("Correct Answer! \n+10Points\n");
                    points += 10;
                    printf("----\tPoints : %d\n",points);
                    break;
                    default: goto end;
        } 
        

        printf("\nQ7.Which company developed the Windows operating system?\n");
        printf("1.Apple\n2.IBM\n3.Microsoft\n4.Google");
        printf("\n\nYour Answer : \t");
        scanf("%d",&Answer);
        correct = 3;
        switch(Answer){
            case 3 :
                   printf("Correct Answer! \n+10Points\n");
                    points += 10;
                    printf("----\tPoints : %d\n",points);
                    break;
                    default: goto end;
        } 
        
        printf("\nQ8. Which memory is volatile?\n");
        printf("1.ROM\n2.Flash Memory\n3.RAM\n4.Hard Drive");
        printf("\n\nYour Answer : \t");
        scanf("%d",&Answer);
        correct = 3;
        switch(Answer){
            case 3 :
                   printf("Correct Answer! \n+10Points\n");
                    points += 10;
                    printf("----\tPoints : %d\n",points);
                    break;
                    default: goto end;
        } 
        

        printf("\nQ9. WWW stands for?\n");
        printf("1.Wide World Web\n2.Wide World Web\n3.Web World Wide\n4.World Wide Web");
        printf("\n\nYour Answer : \t");
        scanf("%d",&Answer);
        correct = 4;
        switch(Answer){
            case 4 :
                   printf("Correct Answer! \n+10Points\n");
                    points += 10;
                    printf("----\tPoints : %d\n",points);
                    break;
                    default: goto end;
        } 
        

        printf("\nQ10.What do we use to click and select items on a computer screen?\n");
        printf("1.Keyboard\n2.Monitor\n3.Mouse\n4.Printer");
        printf("\n\nYour Answer : \t");
        scanf("%d",&Answer);
        correct = 3;
        switch(Answer){
            case 3 :
                   printf("Correct Answer! \n+10Points\n");
                    points += 10;
                    printf("----\tPoints : %d\n",points);
                    printf("\t==Wohoo! You slayed!==\t");
                    printf("\\n==Your Score at the End :%d==\t",points);
                    break;
                    default: goto end;
                    break;
        } 
        default:
        printf("\nDo you want to retry the quiz? (1 for Yes, 2 for No): ");
        scanf("%d", &retry);
        continue;

        end:
            printf("\n Wrong answer! Your score: %d\n", points);
            printf("Do you want to retry the quiz? (1 for Yes, 2 for No): ");
            scanf("%d", &retry);
    
        }
        
    }
}
