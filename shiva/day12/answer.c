// 21doc, day 12, Shiva
/*#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

typedef struct SinglyLinkedListNode SinglyLinkedListNode;
typedef struct SinglyLinkedList SinglyLinkedList;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

struct SinglyLinkedList {
    SinglyLinkedListNode* head;
    SinglyLinkedListNode* tail;
};

SinglyLinkedListNode* create_singly_linked_list_node(int node_data) {
    SinglyLinkedListNode* node = malloc(sizeof(SinglyLinkedListNode));

    node->data = node_data;
    node->next = NULL;

    return node;
}

void insert_node_into_singly_linked_list(SinglyLinkedList** singly_linked_list, int node_data) {
    SinglyLinkedListNode* node = create_singly_linked_list_node(node_data);

    if (!(*singly_linked_list)->head) {
        (*singly_linked_list)->head = node;
    } else {
        (*singly_linked_list)->tail->next = node;
    }

    (*singly_linked_list)->tail = node;
}

void print_singly_linked_list(SinglyLinkedListNode* node, char* sep, FILE* fptr) {
    while (node) {
        fprintf(fptr, "%d", node->data);

        node = node->next;

        if (node) {
            fprintf(fptr, "%s", sep);
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}


SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode *p = head1;
SinglyLinkedListNode *q = head2;
SinglyLinkedListNode *r = head1;
if(head1==NULL)
{
    return head2;
}
else if(head2==NULL)
{
    return head1;
}

if (head1->data <= head2->data)  
    {  
        r = head1;  
        r->next = mergeLists(head1->next, head2);  
    }  
    else
    {  
        r = head2;  
        r->next = mergeLists(head1, head2->next);  
    }  
    return r;
}
// took me quite some time cuz i didnt realise most of the functions i needed were made already lol
// after that it is just ssimple logic

// nvm time was an issue too :/ had to trim my code

int main() */


// i couldnt take out much time for this today so this is all for today