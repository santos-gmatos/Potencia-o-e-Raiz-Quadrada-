#include <stdio.h>

//Função potência
int pot(int u, int v)
{
int p, i;
p=u;
for(i=1; i<v; i++)
{
    p=p*u;
}
printf("%d\n", p);
return 0;
}

//Função Raiz (com aproximações decimais para números menores ou iguais a 60)
float sqroot(int u)
{

int m, p;

//Caso exista raiz exata:
    for(m=1; m<u; m++){

p=m*m;

    if(p==u){
printf("%d\n", m);
break;}

//Caso não exista raiz não exata:
    if(m==u-1){
float ui, vi, x, y, j;
float aprox;
ui=1;
vi=1;  
do{
y=vi;
vi = ui+vi;
ui = y*u + ui;
aprox=ui/vi;

j=aprox*aprox/u;

}while(j>=1.000001 || j<=0.999999);

printf("%.15f\n",aprox);

}
                    }

return 0;
}


//Calculadora
int main (void){

    int u, v, k;
    printf("AVISO:\n Caso o numero nao seja um quadrado perfeito,\n a opcao de raiz funciona somente para numeros\n menores que 35.\n");
while("")
{
printf("\nDigite 1 para [Potenciacao] ou 2 para [Raiz Quadrada]\n");
scanf("%d", &k);

    switch(k) {

case 1:
{
printf("Potencia [selecionada]\n");
printf("Digite dois Numeros inteiros:\n");
scanf("%d", &u);
scanf("%d", &v);
printf("%d elevado a %d é: ", u, v);
pot(u, v);}
break;

case 2:
printf("Raiz Quadrada [selecionada]\n");
printf("Digite um Numero:\n");
	{scanf("%d", &u);
    printf("A raiz de %d é: ", u);
    sqroot(u);
    }
break;


}
}

}