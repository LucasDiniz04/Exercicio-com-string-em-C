#include <stdio.h> //cabeçalho
#include <string.h> //cabeçalho
#include "character.h" //cabeçalho
  
int main() 
{ 
    //desenvolver um programa onde o usuario vai escolher qual funcao executar 
    //1: concatenação de strings
    //2: copiar uma string em outra 
    //3: comparar strings 
    //4: comparar por tamanho 
    //5: Tamanho da string 
     
    int opcao = 0; 
     
    printf("--Menu de escolhas--\n"); 
    printf("1: Concatenação "); 
    printf("\n2: Copiar uma string em outra "); 
    printf("\n3: Comparar strings"); 
    printf("\n4: Comparar por tamanho"); 
    printf("\n5: tamanho da string\n"); 
    scanf("%d", &opcao); //momento em que o usuário irá escolher uma das 5 opções disponíveis 
     
    switch(opcao){ //função de escolha
        case 1: //caso digitado 1 , vá para função
        concatenar(); 
        break; //Para o programa
         
        case 2: 
        copiar(); 
        break; 
         
        case 3: 
        comparar(); 
        break; 
         
        case 4: 
        comparartam(); 
        break; 
         
        case 5: 
        tamstring(); 
        break; 
         
        default: //caso não for digitado números de 1 a 5:
        printf("Valor não encontrado\nFechando programa..."); // Imprime na tela
        break; //Para o programa
    } 

    return 0; 
} 