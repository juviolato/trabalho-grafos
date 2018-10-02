typedef struct nodo Lista;

/* define uma lista duplamente encadeada */
struct nodo
{
    int nodo;
    Lista *prox;
    Lista *ant;
};

Lista* insereLista (Lista* inicio, int valor);

Lista* retiraLista (Lista* inicio, int valor);

int ehVazia (Lista* inicio);
