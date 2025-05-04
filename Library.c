/* 
3. Library Book Management System (basic version).  
> - Use arrays of book structures.  
> - Use functions to add, delete, search, and display books.
Developed By Amina Hasanaath
*/
#include<stdio.h>
#include<string.h>
int adding_Book(int *total_no_books,char books_collection_names[100][100]);
int delete_Book(int *total_no_books,char books_collection_names[100][100]);
int search_book(int *total_no_books,char books_collection_names[100][100]);
void display_Books_list(int *total_no_books,char books_collection_names[100][100]);

int main(){
     printf("=== \tLIBRARY BOOK MANAGEMENT SYSTEM\t ===");
    int total_no_books =70;
    char books_collection_names[100][100]=
    {"Atomic Habits","The Power of Now","The 7 Habits of Highly Effective People", "The Mountain Is You", "Can't Hurt Me", "Think Like a Monk", "The Four Agreements", "Deep Work", "Ego Is the Enemy",
    "Make Time", "Eat That Frog", "Getting Things Done", "Essentialism", "The 5 AM Club",
    "Clean Code", "Introduction to Algorithms", "Cracking the Coding Interview", "The Pragmatic Programmer", "Code: The Hidden Language of Computer Hardware and Software",
    "Grokking Algorithms", "Artificial Intelligence: A Modern Approach", "Design Patterns", "The Mythical Man-Month", "The Self-Taught Programmer",
    "Reclaim Your Heart", "Secrets of Divine Love", "Purification of the Heart", "In the Early Hours", "Don't Be Sad",
    "The Book of Assistance", "Light upon Light", "Inner Dimensions of Islamic Worship", "The Alchemist", "Forty Rules of Love",
    "The Kite Runner", "A Thousand Splendid Suns", "To Kill a Mockingbird", "The Book Thief", "Pride and Prejudice",
    "1984", "The Catcher in the Rye", "Little Women", "The Fault in Our Stars", "The Great Gatsby",
    "Big Magic", "Steal Like an Artist", "Show Your Work", "The Artist's Way", "Bird by Bird",
    "Rich Dad Poor Dad", "The Millionaire Fastlane", "The Psychology of Money", "I Will Teach You to Be Rich", "Think and Grow Rich",
    "The Lean Startup", "Zero to One", "Start With Why", "The 4-Hour Work Week", "Shoe Dog",
    "Thinking, Fast and Slow", "The Power of Habit", "Influence", "Quiet", "Emotional Intelligence",
    "Flow", "Man’s Search for Meaning", "Attached", "The Body Keeps the Score", "The Courage to Be Disliked","Harry Potter"
};
    
    printf("\nADDING THE BOOK--------");
    adding_Book(&total_no_books,books_collection_names);

    printf("\nDELETING THE BOOK--------");
    delete_Book(&total_no_books,books_collection_names);

    printf("\nSEARCHING FOR THE BOOK--------");
    search_book(&total_no_books,books_collection_names);

    printf("\n\nDISPLAYING THE LIST--------");
    display_Books_list(&total_no_books,books_collection_names);
    return 0; 
}

int adding_Book(int *total_no_books,char books_collection_names[100][100]){
    int quantity;
    char book_names[20][100];
    printf("\nFill the Details to add the book !");
    printf("\nEnter the number of books you added(Quantity):\t");
    scanf("%d",&quantity);
    getchar();
    printf("\nEnter the book name : ");
    for(int i=0;i<quantity;i++){
    fgets(book_names[i],sizeof(book_names[i]),stdin);
    book_names[i][strcspn(book_names[i], "\n")] = '\0';
    }
   

    for(int i=0;i<quantity;i++){
        strcpy(books_collection_names[*total_no_books + i], book_names[i]);
    }
    *total_no_books += quantity;
    printf("\n\n\t====Presenting the Updated Books====\n\n");
    for(int i=0;i<*total_no_books;i++){
        printf(" %d: %s\n", i + 1, books_collection_names[i]);
    }
    
    return 0;

}

int delete_Book(int *total_no_books,char books_collection_names[100][100]){
    char book_names[20][100];
    int no;

    printf("\nFill the Details to remove the book !");
    printf("\nEnter the Book Number:\t");
    scanf("%d",&no);
    getchar();
    no = no-1;
    if(no >= 0 && no < *total_no_books){
    printf(" deleting' %s ' book \t",books_collection_names[no]);
    
    for (int i = no; i < *total_no_books - 1; i++) {
        strcpy(books_collection_names[i], books_collection_names[i + 1]);
    }

   (*total_no_books)--;


}   return 0;
   
 }

 int search_book(int *total_no_books,char books_collection_names[100][100]){
    char book_names[20][100];
    int no;


    printf("\nFill the Details to Search the book !");
    printf("\nEnter the Book Number:");
    scanf("%d",&no);
    getchar();
    no = no-1;
    if(no >= 0 && no < *total_no_books){
    printf(" Searching for the' %s ' book \n",books_collection_names[no]);

        for(int i=0;i<*total_no_books;i++) {
        if(i==no){
        printf(" %s book found at Position :\t %d" ,books_collection_names[i],i+1);
        }
        
     }

}
else{
    printf("\n Book Not Found!");
}
    
    
    return 0;

}

void display_Books_list(int *total_no_books,char books_collection_names[100][100]){
    printf("\n\t====Presenting the Updated Books====\n\n");
    for(int i=0;i<*total_no_books;i++){
        printf(" %d: %s\n", i + 1, books_collection_names[i]);
    }
    return;
}
