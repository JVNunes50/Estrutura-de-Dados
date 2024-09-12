// Definição de estrutura para uma fila
struct Node{
  int data;
  struct Node* next;
};
struct Fila {
  struct Node *inicio, *fim;
};

//////////////// ENFILEIRAR (ENQUEUE) ////////////////
void enqueue(struct Fila* q, int data){
  struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
  temp -> data = data;
  temp -> next = NULL;

  if (q -> fim == NULL){
    q -> inicio = q -> fim = temp;
    return;
  }
  q -> fim -> next = temp;
  q -> fim = temp;
}

//////////////// DESENFILEIRAR (DEQUEUE) ////////////////
int dequeue(struct Fila* q){
  if (q -> inicio == NULL)
    return -1;
  struct Node* temp = q -> inicio;
  int data = temp -> data;
  q -> inicio = q -> inicio -> next;

  if (q -> inicio == NULL)
    q -> fim = NULL;
  
  free(temp);
  return data;
}

int is_empty(struct Fila* q){
  return q -> inicio == NULL;
}
