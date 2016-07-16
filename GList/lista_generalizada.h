typedef char elem;

typedef struct bloco {
        union {
              elem atomo;
              struct bloco *sublista;
        } info;
        int tipo;
        struct bloco *prox;
} no;

typedef no *ListaGen;


int esta_na_lista_principal(ListaGen L, elem x);
int esta_em_qualquer_parte_da_lista(ListaGen L, elem x);
int iguais(ListaGen L1, ListaGen L2);
int iguais_estruturalmente(ListaGen L1, ListaGen L2);
int profundidade(ListaGen L);
