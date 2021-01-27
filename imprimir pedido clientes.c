#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
char cliente[20];
char saboracai1[20];
char saboracai2[20];
char saboracai3[20];
char sorvete1[20];
char sorvete2[20];
char sorvete3[20];
char cobertura1[20];
char cobertura2[20];
char endereco[90];
int fin;
char telefone[15];



FILE *file;

    //começo do chat
    do
    {
    
    printf("Ola!\nA Sorvetes company fica feliz com o seu contato!\nPor gentileza, digite o seu nome\n");
    setbuf(stdin, 0);

    fgets(cliente, 20, stdin);

    cliente[strlen(cliente)-1] ='\0';

    printf("Agora digite seu telefone\n");
    setbuf(stdin, 0);

    fgets(telefone, 20, stdin);

    telefone[strlen(telefone)-1] ='\0';

    printf("Ola %s, sera um prazer atende-lo\n", cliente);

    printf("Por gentileza, escolha o primeiro sabor de acai que voce deseja\n(um por vez)");
    printf("\nAcai tardicional\nAcai com Mel\nAcai com acucar\n");
    fgets(saboracai1, 20, stdin);

    saboracai1[strlen(saboracai1)-1] ='\0';

    printf("Escolha o segundo sabor de acai que voce deseja\n(um por vez)\n");
    fgets(saboracai2, 20, stdin);

    saboracai2[strlen(saboracai2)-1] ='\0';

    printf("Escolha o terceiro sabor de acai que voce deseja\n(um por vez)\n");
    fgets(saboracai3, 20, stdin);

    saboracai3[strlen(saboracai3)-1] ='\0';
 
    printf("Agora escolha o promeiro sabor de sorvete que voce deseja\n(um por vez)\n");
    printf("Mornago\nChocolate\nLeite Ninho\nDelicia de abacaxi\nSerenata de amor\n");
    fgets(sorvete1, 20, stdin);

    sorvete1[strlen(sorvete1)-1] ='\0';

    printf("Agora escolha o segundo sabor de sorvete que voce deseja\n(um por vez)\n");
    fgets(sorvete2, 20, stdin);

    sorvete2[strlen(sorvete2)-1] ='\0';    

    printf("Agora escolha o terceiro sabor de sorvete que voce deseja\n(um por vez)\n");
    fgets(sorvete3, 20, stdin);

    sorvete3[strlen(sorvete3)-1] ='\0';

    printf("Para finalizarmos escolheremos 2 sabores de cobertura\n Escolha a primeira cobertura\n(um por vez)\n");
    printf("Morango\nChocolate\nMenta\nDoce de leite\n");
    fgets(cobertura1, 20, stdin);

    cobertura1[strlen(cobertura1)-1] ='\0';

    printf("Escolha a segunda cobertura e seu pedido estara ponto\n(um por vez)\n");
    fgets(cobertura2, 20, stdin);

    cobertura2[strlen(cobertura2)-1] ='\0';

    printf("\nEm qual endereco devemos entregar?\nPor gentileza informe Rua, numero, bairro e ponto de referencia\n");
    fgets(endereco, 90, stdin);

    endereco[strlen(endereco)-1] ='\0';

    printf("\nMuito obrigado!\n");
    printf("\nO pedido do(a) Sr(a) %s sera entregue em %s", cliente, endereco);
    printf("\nO pendido consiste em Acai dos seguintes sabores:\n%s\n%s\ne %s\nSorvete dos seguintes sabores\n%s\n%s\ne %s\nCom as seguintes coberturas\n%s\n%s\n", saboracai1, saboracai2, saboracai3, sorvete1, sorvete2, sorvete3,cobertura1,cobertura2);


    printf("\nPara confirmar o pedido digite 5\n");
    scanf ("%i", &fin);
    }
    // adicionando o retorno pro começo do codigo
    while (fin!=5);
    
    char pedido [30];

    sprintf( pedido,"%s%s.txt", cliente, telefone);

    file = fopen(pedido, "w");
    fprintf (file,"\nO pedido do(a) Sr(a) %s sera entregue em %s\nO pedido consiste em Acai dos seguintes sabores:\n%s\n%s\ne %s\nSorvete dos seguintes sabores\n%s\n%s\ne %s\nCom as seguintes coberturas\n%s\n%s\n", cliente, endereco, saboracai1, saboracai2, saboracai3, sorvete1, sorvete2, sorvete3,cobertura1,cobertura2);
    fclose(file);

    //TENTANDO IMPRIMIR
    LPCTSTR teste = "pedido.txt";
    ShellExecute(NULL, "print", pedido, NULL, NULL, SW_SHOWNORMAL);

    printf("FIM");



return 0;

}