//Insira seu nome
#define NOME_FAT "Pedro Vilela"


int fatorial(int n){
  if(n < 2) return 1;
	return n * fatorial(n-1);
}
