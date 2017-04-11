
#include <stdio.h>
#define capacidade 30

struct stack
{
    int topo, item[capacidade];
};

/*============== Inicia Pilha ======================*/
void inic_pilha(struct stack *p)
{
    p->topo = -1;
}

/*=============== Verifica pilha Cheia ==============*/
int pilha_cheia(struct stack *p)
{
    if (p->topo == (capacidade - 1))
    {
        printf("\n\n\t\tA Pilha esta Cheia!!!");
        return 1;
    }
    else
        return 0;
}

/*=============== Verifica pilha Vazia ==============*/
int pilha_vazia(struct stack *p)
{
    if (p->topo == -1)
    {
        printf("\n\n\t\tA Pilha esta Vazia!!!");
        return 1;
    }
    else
        return 0;
}

/*=============== Verifica pilha Vazia 2 ============*/
int pilha_vazia2(struct stack *p)
{
    if (p->topo == -1)
        return 1;
    else
        return 0;
}

/*================== Empilha  ========================*/
int push(struct stack *p, int valor)
{
    return (p->item[++(p->topo)] = valor);
}

/*================== Desempilha  =====================*/
int pop(struct stack *p)
{
    int aux;
    aux = p->item[(p->topo)--];
    return aux;
}

/*================== Mostra Pilha  ===================*/
int mostra(struct stack *p)
{
    int aux;
    if (pilha_vazia2(p))
        return 1;
    else
    {
        aux = pop(p);
        printf("%d,", aux);
        mostra(p);
        return 0;
    }
}





/*======================== MAIN ===============================*/
int main()
{
    struct stack pilha;
    inic_pilha(&pilha);
    push(&pilha, 4);
    push(&pilha, 4);
    push(&pilha, 3);
    push(&pilha, 42);
    mostra(&pilha);
    int value = pop(&pilha);
    printf("%i",value);
    return 0;
}