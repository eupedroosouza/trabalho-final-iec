//Utilize a Struct abaixo para apresentar na tela o cadastro de uma pessoa:
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
struct tipo_endereco {
char rua [50];
int numero;
char bairro [20];
char cidade [30];
char sigla_estado [3];
long int CEP;
}endereco;
struct ficha_pessoal {
char nome [50];
long int telefone;
struct tipo_endereco endereco;
}pessoal;

int main(){
printf("digite a rua em que mora:");
fgets(endereco.rua,50,stdin);
printf("digite o numero da casa:");
scanf("%d",& endereco.numero);
getchar();
printf("digite a bairro em que mora:");
fgets(endereco.bairro,20,stdin);
printf("digite a cidade em que mora:");
fgets(endereco.cidade,30,stdin);
printf("digite a sigla do estado em que mora:");
fgets(endereco.sigla_estado,3,stdin);
printf("digite o numero do CEP:");
scanf("%d",& endereco.CEP);
getchar();
printf("digite seu nome:");
fgets(pessoal.nome,50,stdin);
printf("digite o numero do telefone:");
scanf("%d",& pessoal.telefone);
getchar();
printf("\n\n CADASTRO DA PESSOA:\n\n");
printf("rua:%s",endereco.rua);
printf("numero:%d\n",endereco.numero);
printf("bairro:%s\n",endereco.bairro);
printf("cidade:%s\n",endereco.cidade);
printf("estado:%s\n",endereco.sigla_estado);
printf("CEP:%d\n",endereco.CEP);
printf("nome:%s\n",pessoal.nome);
printf("telefone:%d\n",pessoal.telefone);



return 0;
}
