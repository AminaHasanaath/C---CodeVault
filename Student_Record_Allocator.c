/* 
> Dynamic Student Record Allocator.  
> - Ask user for number of students.  
> - Use malloc() to dynamically create space.  
> - Store and display their details using structures and pointers.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

    int num_of_students;
    printf("Enter the number of Students:\t");
    scanf("%d",&num_of_students);

    char *students[num_of_students];
    printf("Enter Students Name :\t");
    for(int i=0;i<num_of_students;i++){
          students[i] = malloc(100*sizeof(char));
            scanf("%s",students[i]);
        }

        printf("Students Name :\n");
        for(int i=0;i<num_of_students;i++){
             printf("%d : %s\n",i+1,students[i]);
            }
    
//creating the Students Data record

            struct Record{
                char name[20];
                int roll;
                int DOB[20];
                struct record *next;
            };
            struct Record *studentData[num_of_students];
            for(int i = 0; i < num_of_students; i++) {
                studentData[i] = malloc(sizeof(struct Record));

                strcpy(studentData[i]->name, students[i]);  // Copy the name from the students array
                printf("\nEnter details for Student %d:\n", i + 1);
                printf("Enter the Roll Number: ");
                scanf("%d",&studentData[i]->roll);  // Roll number input
                printf("Enter DOB (Day Month Year): ");
                scanf("%d %d %d", &studentData[i]->DOB[0], &studentData[i]->DOB[1], &studentData[i]->DOB[2]);  // DOB input
                studentData[i]->next = NULL;  // Set the next pointer to NULL
        
                // Display student details
                printf("\nDetails of Student %d:\n", i + 1);
                printf("Name: %s\n", studentData[i]->name);
                printf("Roll Number: %d", studentData[i]->roll);
                printf("\nDOB: %02d-%02d-%d\n", studentData[i]->DOB[0], studentData[i]->DOB[1], studentData[i]->DOB[2]);
            }
        
            // Freeing allocated memory for students and student data after all operations
            for (int i = 0; i < num_of_students; i++) {
                free(students[i]);      // Free memory for student names
                free(studentData[i]);   // Free memory for student data (struct Record)
            }
        
                return 0;
        }
