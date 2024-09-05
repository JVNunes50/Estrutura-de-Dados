#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node* insert(Node* head, int data){
  Node* newNode = (Node*)malloc(sizeof(Node));
  if (newNode == NULL){
    printf("Falha na alocação de memória.\n");
    return head;
  }
  
  newNode->data = data;
  newNode->next = head;
  return newNode;
}

void printList(struct Node* head){
  struct Node* current = head;
  
  while (current != NULL){
    printf("%d ", current->data);
    current = current->next;
  }
  printf("NULL\n");
}

void insereFim(int x, Node **head){
  Node *nova = malloc(sizeof(Node));
  
  if(nova == NULL){
    return;
  }
  nova->data = x;
  nova->next = NULL;
  
  if(*head == NULL){
    *head = nova;
  }
  else{
    Node *temp = *head;
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next = nova;
  }
}

int main(void) {
  Node* head = NULL;

  head = insert(head, 10);
  head = insert(head, 20);

  return 0;
}
