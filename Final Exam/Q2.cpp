#include<stdio.h>
void delete_duplicates(struct Node* head) 
{ 
    struct Node* current = head; 
    struct Node* next_next;  
    if (current == NULL)  
       return;  
    while (current->next != NULL)  
    { 
       if (current->data == current->next->data)  
       		{              
           		next_next = current->next->next; 
           		free(current->next); 
           		current->next = next_next;   
       		} 
       else 
       		{ 
          		current = current->next;  
       		} 
    } 
} S
