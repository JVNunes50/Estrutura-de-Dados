// Definição de estrutura para um nó de pilha
typedef struct Node{
  int data;
  struct Node* next;
} Node;

// Definição da estrutura da pilha
typedef struct Stack{
  Node* top;
} Stack;

/////////////// INSERIR (PUSH) ///////////////
// Função para adicionar um elemento a pilha (push)
void push(Stack* stack, int data){
  Node * newNode = (Node*)malloc(sizeof(Node));
// Verificação de erro
  if (newNode == NULL) {
    printf("Errro ao alocar memória.\n");
    exit(1);
  }
  newNode -> data = data;
  newNode -> next = stack -> top;
  stack -> top = newNode;
} 

/////////////// REMOVER (POP) ///////////////
//Função para remover e retornar o elemneto do topo da pilha (pop)
int pop(Stack* stack){
// Verificação de erro
  if (isEmpty (stack)){
    printf("Pilha vazia. Não é possivel fazer pop.\n");
    exit(1);
  }
  Node* temp = stack -> top;              // tem = variavel temporaria
  int data = tem -> data;
  stack -> top = temp -> next;
  free(temp);
  return data;
}

/////////////// ELEMENTO DO TOPO (PEEK) ///////////////
int peek(Stack* stack){
  if(isEmpty(stack)){
    printf("Pilha vazia");
    exit(1);
  }
  return stack -> top -> data;
}

