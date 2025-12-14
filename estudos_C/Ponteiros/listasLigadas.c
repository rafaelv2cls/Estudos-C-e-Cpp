#include <stdio.h>

typedef struct no {
    int valor; // dados
    struct no* prox; // ponteiro que liga a proxima struct
} No;

void imprime_lista(No* q);
void insere_final(No** p, int v);
void insere_inicio(No** p, int v);
void remove_final(No** p);
void remove_inicio(No** p);
void remove_valor(No** p, int v);
void libera_lista(No** p);

int main(){
    int i;
    No* L = NULL;

return 0;
}

void imprime_lista(No* q) { // q recebe uma cópia de L
    while(q != NULL){ // se q estiver com valor NULL, significa que está no fim da lista
        printf("%d\n", q->valor);
        q = q->prox; // q se torna o ponteiro prox da struct que ele estava apontando
    }
}

void insere_final(No** p, int v) { // p recebe &L
    No *aux, *q;
    q = (No*) malloc(sizeof(No)); // o nó é alocado para q
    q->valor = v; // o valor é inserido no nó
    q->prox = NULL; // q será último elemento da lista
    if (*p == NULL) *p = q; // se *p(que é o valor de L) estiver como NULL, L não estará apontando para nada, indicando que a lista está vazia, com isso, basta fazer o L ser igual ao q
    else {
        aux = *p;
        while(aux->prox != NULL) aux = aux -> prox; // o ponteiro auxiliar pega o valor de L e vai percorrendo toda a lista até o final
        aux->prox = q; // q é inserido no final
    }
}

void insere_inicio(No** p, int v) { // p recebe &L
    No* q;
    q = (No*) malloc(sizeof(No));
    q->valor = v;
    q->prox = *p; // o ponteiro prox do novo nó aponta para o mesmo endereço que L
    *p = q; // L aponta para o novo nó
}

void remove_final(No** p) { // p recebe &L
    No* q = *p;
    if(q==NULL) return; // a lista está vazia
    if (q->prox==NULL){ // há apenas 1 elemento na lista
        *p = NULL; // libera L
        free(q); // q ainda aponta para o elemento, limpa a memória alocada de q
        return; // com o return, q deixa de existir
    }
    while (q->prox->prox != NULL) q = q->prox; // o último elemento tem o prox=NULL, então procuramos o penúltimo para o desvencilhar do último 
    free(q->prox); // desaloca a memória
    q->prox = NULL; // transforma no último nó
}

void remove_inicio(No**p) { // p recebe &L
    No* q = *p; // clone de L
    if(q== NULL) return; // lista vazia
    *p = q->prox; // L aponta para o segundo elemento da lista ao invés do primeiro
    free(q); // q é liberado
}

void remove_valor(No** p, int v) {
    No* q = *p;
    if(q==NULL) return; // lista vazia
    if(q->valor==v){ // encontrou no primeiro elemento
        *p = q->prox;
        free(q);
        return;
    }
    while (q->prox != NULL){
        if(q->prox->valor==v) break; // quebra o laço ao encontrar o nó antecessor do nó com o valor buscado
        q = q->prox;
    }
    if(q->prox==NULL) return; // não encontrou o valor buscado
    No* aux = q->prox;
    q->prox = aux->prox;
    free(aux);
}
 void libera_lista(No** p) {
    No* q;
    while (*p != NULL) {
        q = *p;
        *p = (*p)->prox;
        free(q);
    } // L percorre a lista até o fim, q vai seguindo L e liberando cada nó 
 }