#include <stdio.h>
#include <string.h>

#define MAXV 500 //quantidade máxima de vértices
#define ADJACENTE 1
#define NAO_ADJACENTE 0

#define BRANCO 0
#define CINZA 1
#define PRETO 2
#define NULO -1

char m[MAXV + 1][MAXV +1]; //matriz de adjacências
int N; //quantidade de vértices
int c[MAXV+1]; //cor
int d[MAXV+1]; //tempo de descoberta
int t[MAXV+1]; //tempo de término
int a[MAXV+1]; //antecessor na árvore de busca
int tempo; //tempo corrente durante execução do algoritmo

int idades[MAXV + 1];
int idade;

void DFS_VISIT(int u){
	c[u] = CINZA;
	tempo++;
	d[u] = tempo;

	int v;
	for(v = 1; v <= N; v++){
		if(m[u][v] == ADJACENTE){ //se v é adjacente a u
			if(c[v]==BRANCO){
        if (idades[v] < idade) idade = idades[v];
				a[v] = u;
				DFS_VISIT(v);
			}
		}
	}

	c[u] = PRETO;
	tempo++;
	t[u] = tempo;
}

void DFS(int funcionario){
  idade = 1000;
  int u;
	for(u = 1; u <= N; u++){
		c[u] = BRANCO;
		d[u] = NULO;
		t[u] = NULO;
		a[u] = NULO;
	}

	tempo=0;
	
	if(c[funcionario] == BRANCO)
		DFS_VISIT(funcionario);

}
void imprimir(int vet[]){
	int i;
	for(i = 1; i <= N; i++){
		printf("%d, ", vet[i]);
	}
	printf("\n");
}

void inicializar(){
	memset(m,NAO_ADJACENTE,sizeof(m));
}

void troca(int gerente, int gerido) {
  int auxiliar, i, j;
  for (i = 1; i <= N; i++) {
    auxiliar = m[gerente][i];
    m[gerente][i] = m[gerido][i];
    m[gerido][i] = auxiliar;
  }

  for (i = 1; i <= N; i++) {
    auxiliar = m[i][gerente];
    m[i][gerente] = m[i][gerido];
    m[i][gerido] = auxiliar;
  }
}

int main(){
  int numeroDePessoas, numeroDeRelacoes, numeroDeInstrucoes;
  int funcionario;
  while (scanf("%d %d %d",&numeroDePessoas ,&numeroDeRelacoes ,&numeroDeInstrucoes) != EOF) {
    inicializar();
    N = numeroDePessoas;

    int i, j;
    for (i = 1; i <= numeroDePessoas; i++) {
      scanf("%d", &idades[i]);
    }

    int gerente, gerido;
    for (i = 1; i <= numeroDeRelacoes; i++) {
      scanf("%d %d", &gerente, &gerido);
      m[gerido][gerente] = ADJACENTE;
    }

    char tipoInstrucao;
    for (i = 1; i <= numeroDeInstrucoes; i++) {
      scanf(" %c", &tipoInstrucao);

      if (tipoInstrucao == 'P') {
        scanf("%d", &funcionario);
        DFS(funcionario);
        if (idade == 1000) printf("*\n");
        else printf("%d\n", idade);
      }
      if (tipoInstrucao == 'T') {
        scanf("%d %d", &gerente, &gerido);
        troca(gerente, gerido);
      }
    }
  }
	return 0;
}