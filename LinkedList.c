#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the book node structure
struct BookNode {
    char title[100];
    float price;
    int pages;
    char language[50];
    float weight;
    int publication_year;
    struct BookNode *next;
};

// Function to create a new book node
struct BookNode* createBookNode(const char* title, float price, int pages, const char* language, float weight, int publication_year) {
    struct BookNode* newBook = (struct BookNode*)malloc(sizeof(struct BookNode));
    if (newBook == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    strcpy(newBook->title, title);
    newBook->price = price;
    newBook->pages = pages;
    strcpy(newBook->language, language);
    newBook->weight = weight;
    newBook->publication_year = publication_year;
    newBook->next = NULL;
    return newBook;
}

// Function to print the book list
void printBookList(struct BookNode *head) {
    struct BookNode* current = head;
    while (current != NULL) {
        printf("Title: %s\n", current->title);
        printf("Price: $%.2f\n", current->price);
        printf("Pages: %d\n", current->pages);
        printf("Language: %s\n", current->language);
        printf("Weight: %.2f kg\n", current->weight);
        printf("Publication Year: %d\n", current->publication_year);
        printf("-----------------------------\n");
        current = current->next;
    }
}

int main() {
    // Initialize book nodes
    struct BookNode *head = NULL;
    struct BookNode *book1 = NULL;
    struct BookNode *book2 = NULL;
    struct BookNode *book3 = NULL;
    struct BookNode *book4 = NULL;
    struct BookNode *book5 = NULL;
    struct BookNode *book6 = NULL;
    struct BookNode *book7 = NULL;

    // Create and link books
    book1 = createBookNode("Harry Potter and the Philosopher's Stone", 20.99f, 223, "English", 0.5f, 1997);
    book2 = createBookNode("Harry Potter and the Chamber of Secrets", 22.99f, 251, "English", 0.6f, 1998);
    book3 = createBookNode("Harry Potter and the Prisoner of Azkaban", 23.99f, 317, "English", 0.7f, 1999);
    book4 = createBookNode("Harry Potter and the Goblet of Fire", 24.99f, 636, "English", 0.9f, 2000);
    book5 = createBookNode("Harry Potter and the Order of the Phoenix", 29.99f, 766, "English", 1.1f, 2003);
    book6 = createBookNode("Harry Potter and the Half-Blood Prince", 28.99f, 607, "English", 1.0f, 2005);
    book7 = createBookNode("Harry Potter and the Deathly Hallows", 34.99f, 607, "English", 1.2f, 2007);

    // Connect book nodes
    book1->next = book2;
    book2->next = book3;
    book3->next = book4;
    book4->next = book5;
    book5->next = book6;
    book6->next = book7;
    book7->next = NULL;

    // Set head to the first book
    head = book1;

    // Print the book list
    printf("Harry Potter Series:\n");
    printBookList(head);

    // Free memory
    struct BookNode *current = head;
    struct BookNode *nextBook;
    while (current != NULL) {
        nextBook = current->next;
        free(current);
        current = nextBook;
    }

    return 0;
}
