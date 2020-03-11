#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "cartas.h"

//colocar cada tipo de carta no struct 'cartas'

cartas_t baralho[TAM]={
  {0,ZERO,AZUL,"0/Az",0},
  {1,UM,AZUL,"1/Az",1},
  {2,UM,AZUL,"1/Az",1},
  {3,DOIS,AZUL,"2/Az",2},
  {4,DOIS,AZUL,"2/Az",2},
  {5,TRES,AZUL,"3/Az",3},
  {6,TRES,AZUL,"3/Az",3},
  {7,QUATRO,AZUL,"4/Az",4},
  {8,QUATRO,AZUL,"4/Az",4},
  {9,CINCO,AZUL,"5/Az",5},
  {10,CINCO,AZUL,"5/Az",5},
  {11,SEIS,AZUL,"6/Az",6},
  {12,SEIS,AZUL,"6/Az",6},
  {13,SETE,AZUL,"7/Az",7},
  {14,SETE,AZUL,"7/Az",7},
  {15,OITO,AZUL,"8/Az",8},
  {16,OITO,AZUL,"8/Az",8},
  {17,NOVE,AZUL,"9/Az",9},
  {18,NOVE,AZUL,"9/Az",9},
  {19,PULA,AZUL,"Pu/Az",20},
  {20,PULA,AZUL,"Pu/Az",20},
  {21,INVERTE,AZUL,"In/Az",20},
  {22,INVERTE,AZUL,"In/Az",20},
  {23,COMPRA2,AZUL,"+2/Az",20},
  {24,COMPRA2,AZUL,"+2/Az",20},
  {25,ZERO,AMARELO,"0/Am",0},
  {26,UM,AMARELO,"1/Am",1},
  {27,UM,AMARELO,"1/Am",1},
  {28,DOIS,AMARELO,"2/Am",2},
  {29,DOIS,AMARELO,"2/Am",2},
  {30,TRES,AMARELO,"3/Am",3},
  {31,TRES,AMARELO,"3/Am",3},
  {32,QUATRO,AMARELO,"4/Am",4},
  {33,QUATRO,AMARELO,"4/Am",4},
  {34,CINCO,AMARELO,"5/Am",5},
  {35,CINCO,AMARELO,"5/Am",5},
  {36,SEIS,AMARELO,"6/Am",6},
  {37,SEIS,AMARELO,"6/Am",6},
  {38,SETE,AMARELO,"7/Am",7},
  {39,SETE,AMARELO,"7/Am",7},
  {40,OITO,AMARELO,"8/Am",8},
  {41,OITO,AMARELO,"8/Am",8},
  {42,NOVE,AMARELO,"9/Am",9},
  {43,NOVE,AMARELO,"9/Am",9},
  {44,PULA,AMARELO,"Pu/Am",20},
  {45,PULA,AMARELO,"Pu/Am",20},
  {46,INVERTE,AMARELO,"In/Am",20},
  {47,INVERTE,AMARELO,"In/Am",20},
  {48,COMPRA2,AMARELO,"+2/Am",20},
  {49,COMPRA2,AMARELO,"+2/Am",20},
  {50,ZERO,VERDE,"0/Vd",0},
  {51,UM,VERDE,"1/Vd",1},
  {52,UM,VERDE,"1/Vd",1},
  {53,DOIS,VERDE,"2/Vd",2},
  {54,DOIS,VERDE,"2/Vd",2},
  {55,TRES,VERDE,"3/Vd",3},
  {56,TRES,VERDE,"3/Vd",3},
  {57,QUATRO,VERDE,"4/Vd",4},
  {58,QUATRO,VERDE,"4/Vd",4},
  {59,CINCO,VERDE,"5/Vd",5},
  {60,CINCO,VERDE,"5/Vd",5},
  {61,SEIS,VERDE,"6/Vd",6},
  {62,SEIS,VERDE,"6/Vd",6},
  {63,SETE,VERDE,"7/Vd",7},
  {64,SETE,VERDE,"7/Vd",7},
  {65,OITO,VERDE,"8/Vd",8},
  {66,OITO,VERDE,"8/Vd",8},
  {67,NOVE,VERDE,"9/Vd",9},
  {68,NOVE,VERDE,"9/Vd",9},
  {69,PULA,VERDE,"Pu/Vd",20},
  {70,PULA,VERDE,"Pu/Vd",20},
  {71,INVERTE,VERDE,"In/Vd",20},
  {72,INVERTE,VERDE,"In/Vd",20},
  {73,COMPRA2,VERDE,"+2/Vd",20},
  {74,COMPRA2,VERDE,"+2/Vd",20},
  {75,ZERO,VERMELHO,"0/Vm",0},
  {76,UM,VERMELHO,"1/Vm",1},
  {77,UM,VERMELHO,"1/Vm",1},
  {78,DOIS,VERMELHO,"2/Vm",2},
  {79,DOIS,VERMELHO,"2/Vm",2},
  {80,TRES,VERMELHO,"3/Vm",3},
  {81,TRES,VERMELHO,"3/Vm",3},
  {82,QUATRO,VERMELHO,"4/Vm",4},
  {83,QUATRO,VERMELHO,"4/Vm",4},
  {84,CINCO,VERMELHO,"5/Vm",5},
  {85,CINCO,VERMELHO,"5/Vm",5},
  {86,SEIS,VERMELHO,"6/Vm",6},
  {87,SEIS,VERMELHO,"6/Vm",6},
  {88,SETE,VERMELHO,"7/Vm",7},
  {89,SETE,VERMELHO,"7/Vm",7},
  {90,OITO,VERMELHO,"8/Vm",8},
  {91,OITO,VERMELHO,"8/Vm",8},
  {92,NOVE,VERMELHO,"9/Vm",9},
  {93,NOVE,VERMELHO,"9/Vm",9},
  {94,PULA,VERMELHO,"Pu/Vm",20},
  {95,PULA,VERMELHO,"Pu/Vm",20},
  {96,INVERTE,VERMELHO,"In/Vm",20},
  {97,INVERTE,VERMELHO,"In/Vm",20},
  {98,COMPRA2,VERMELHO,"+2/Vm",20},
  {99,COMPRA2,VERMELHO,"+2/Vm",20},
  {100,CURINGA,QUALQUER,"Cg/*",50},
  {101,CURINGA,QUALQUER,"Cg/*",50},
  {102,CURINGA,QUALQUER,"Cg/*",50},
  {103,CURINGA,QUALQUER,"Cg/*",50},
  {104,CURINGA4,QUALQUER,"C4/*",50},
  {105,CURINGA4,QUALQUER,"C4/*",50},
  {106,CURINGA4,QUALQUER,"C4/*",50},
  {107,CURINGA4,QUALQUER,"C4/*",50}
};

/////////////////////////////////////////////////////////////////
//////////////////////Pr√©-jogo///////////////////////////////////
/////////////////////////////////////////////////////////////////

//Declarar as maos do pc, do usuario e de descarte
//variaveis globais
cartas_t maouser[TAM];
cartas_t maopc[TAM];
cartas_t descarte[TAM];
cartas_t cartapc;
cartas_t cartauser;
cartas_t cartadescarte;
cartas_t cartaauxuser;
cartas_t cartaauxpc;
int numcartasuser = 0;
int numcartaspc = 0;
int tam_descarte = 0;
int tam_baralho=TAM;
int pontosuser = 0;
int pontospc = 0;
char nome[20];
void mostra_mesa();

///////////////////////////////////////////////////////////////////

void imprime_cartas(cartas_t *b, int tam){
	int aux;
	for(aux=0;aux<tam;aux++){			           	//loop para mostrar as cartas
	if(aux>=0){
		printf("|");
		printf("%s",b[aux].rotulo);
		}
	}
}

//////////////////////////////////////////////////////////////////////

void embaralha(){
	printf("\n\nembaralhando...\n\n");
	int i,j;
	cartas_t aux;
	srand(time(NULL));
	for(i=0;i<TAM;i++){                            //o loop troca valores de lugares para outros aleatorios
		j= (int)(rand() % TAM);
		aux = baralho[i];
		baralho[i] = baralho[j];
		baralho[j] = aux;
	}
}

//////////////////////////////////////////////////////////////////

void contapontospc(){
	int aux;
	for(aux=0;aux<numcartaspc;aux++){
		pontospc+=maopc[aux].pontos;                  //contar os pontos das cartas do computador e soma-los
	}
}

void contapontosuser(){
	int aux;
	for(aux=0;aux<numcartasuser;aux++){             //contar os pontos das cartas do usuario e soma-los
		pontosuser+=maouser[aux].pontos;
	}
}

//////////////////////////////////////////////////////////////////////

cartas_t retira_carta(cartas_t *baralho,int *tam) {
  (*tam)--;
  return baralho[*tam];
}


void insere_carta(cartas_t *baralho,int *tam,cartas_t carta) {
  if (*tam < TAM) {
     baralho[*tam] = carta;
     (*tam)++;
  }
}

//////////////////////////////////////////////////////////////////////

void comprauser(int num){    // se compra 2 ou 4
	int i;
	cartas_t carta;

  for (i=0;i<num;++i) {
      carta = retira_carta(baralho,&tam_baralho);
      insere_carta(maouser,&numcartasuser,carta);
  }	
}


void comprapc(int num){    // se compra 2 ou 4
int i;
  cartas_t carta;

  for (i=0;i<num;++i) {
      carta = retira_carta(baralho,&tam_baralho);
      insere_carta(maopc,&numcartaspc,carta);
  }	
}

//////////////////////////////////////////////////////////////////////

void curinga(int num){      //SE RECEBER 0 SIGNIFICA QUE … UM CURINGA JOGADO PELO PC E 1 PELO USUARIO
	int i;
	if(num==0){
		switch(maopc[numcartaspc-1].cor){
			case AMARELO: cartadescarte.cor=AMARELO; printf("\nO Computador escolheu a cor AMARELA\n"); break;
			case VERDE: cartadescarte.cor=VERDE; printf("\nO Computador escolheu a cor VERDE\n"); break;
			case VERMELHO: cartadescarte.cor=VERMELHO; printf("\nO Computador escolheu a cor VERMELHA\n"); break;
			case AZUL: cartadescarte.cor=AZUL; printf("\nO Computador escolheu a cor AZUL\n"); break;
			default: cartadescarte.cor=AZUL; printf("\nO Computador escolheu a cor AZUL\n"); break;
		}
	}
	if(num==1){	
		printf("\nEscolha uma cor: \n1 para amarelo\n2 para verde\n3 para vermelho\n4 para azul: ");
		scanf("%d", &i);
		switch(i){
			case 1: cartadescarte.cor=AMARELO; break;
			case 2: cartadescarte.cor=VERDE; break;
			case 3: cartadescarte.cor=VERMELHO; break;
			case 4: cartadescarte.cor=AZUL; break;
			default: printf("\n >>>OPCAO INVALIDA<<<\n"); curinga(1); break;
		}
	}
	mostra_mesa();
}

//////////////////////////////////////////////////////////////////////

void jogadapc(){
	if(numcartaspc==0) return;
	int aux;
	for(aux=0;aux<numcartaspc;aux++){
		cartapc=maopc[aux];
		if(cartapc.cor == cartadescarte.cor || cartapc.tipo == cartadescarte.tipo || cartapc.tipo== CURINGA4 && tam_baralho>=4 || cartapc.tipo== CURINGA){
			//	tam_descarte++;
				cartaauxpc=maopc[aux];
				maopc[aux]=maopc[numcartaspc-1];
				maopc[numcartaspc-1]=cartaauxpc;
				cartadescarte=cartaauxpc;
			//	printf("\ndescarta teste\n");
				retira_carta(maopc, &numcartaspc);
				printf("\nO computador jogou: %s", cartaauxpc.rotulo);
				switch(cartaauxpc.tipo){
					case 10: printf("\nO Computador pulou a sua vez\n"); jogadapc(); break;
					case 11: printf("\nO Computador inverteu a vez e joga novamente\n");jogadapc(); break;
					case 12: printf("\nO Computador pulou a sua vez e te mandou comprar +2\n");comprauser(2); jogadapc(); break;
					case 13: curinga(0); break;
					case 14: comprauser(4); curinga(0); break;
					default: break;
				}
				aux=0;
				return;
		}
	}
	aux=0;
	comprapc(1);
//	printf("\nO Computador comprou:%s\n", maopc[numcartaspc-1].rotulo);
	printf("\nO Computador comprou\n");
}




void jogadauser(){
		if(numcartasuser==0) return;
		int aux;
		do{
			printf("\nSeu turno\n(0-%d para descarte, -1 para comprar): ", numcartasuser-1);
			scanf("%d", &aux);
			
			if(aux==-1){
				comprauser(1);
				printf("\nVoce comprou:%s\n", maouser[numcartasuser-1].rotulo); //teste para compra
			}
				
			else if(aux>=0 && aux <= numcartasuser-1){
				cartauser=maouser[aux];
				if(cartauser.cor == cartadescarte.cor || cartauser.tipo == cartadescarte.tipo || cartauser.tipo==CURINGA || cartauser.tipo==CURINGA4 && tam_baralho>=4 || cartauser.tipo==CURINGA){    //possibilidades corretas de jogo
			//	tam_descarte++;
				cartaauxuser=maouser[aux];
				maouser[aux]=maouser[numcartasuser-1];
				maouser[numcartasuser-1]=cartaauxuser;
				cartadescarte=cartaauxuser;
			//	printf("descarta teste\n");
				retira_carta(maouser, &numcartasuser);  //descarta carta[aux]
				switch(cartaauxuser.tipo){
					case 10: printf("\nVoce pulou a vez do pc\n"); mostra_mesa(); jogadauser(); break;
					case 11: printf("\nVoce inverteu a vez e joga novamente\n"); mostra_mesa(); jogadauser(); break;
					case 12: printf("\nVoce pulou a vez do pc e mandou ele comprar +2\n"); comprapc(2);mostra_mesa(); jogadauser(); break;
					case 13: curinga(1); break;
					case 14: comprapc(4); curinga(1); break;
					default: break;
				}
				
				}
				else{
					printf(">>>JOGADA INVALIDA<<<\n");
					jogadauser();
				}
			}
			
			else{
				printf(">>>JOGADA INVALIDA<<<\n");
				jogadauser();
			}
				
		}while (aux<-1 && aux >= numcartasuser);
}


// usar do while carta jogada = inverte ou bloqueio ou +2
//////////////////////////////////////////////////////////////////////
	
	void corativa(){
		char aux[20];
		strcpy(aux, " ");

		switch(cartadescarte.tipo){
			case 10 : strcpy(aux, "Pula "); break;
			case 11 : strcpy(aux, "Inverte "); break;
			case 12 : strcpy(aux, "Compra 2 "); break;                            // MOSTRA A COR ATUAL DA CARTA DE DESCARTE
			case 13 : strcpy(aux, "Curinga "); break;
			case 14 : strcpy(aux, "Curinga 4 "); break;
			default : break;
		}
		switch(cartadescarte.cor){
		case 0: printf("\nCor ativa: AZUL %s(%d)\n", aux, cartadescarte.tipo); break;
		case 1: printf("\nCor ativa: AMARELO %s(%d)\n", aux, cartadescarte.tipo); break;
		case 2: printf("\nCor ativa: VERDE %s(%d)\n", aux, cartadescarte.tipo); break;
		case 3: printf("\nCor ativa: VERMELHO %s(%d)\n", aux, cartadescarte.tipo); break;
		case 4: printf("\nCor ativa: QUALQUER %s(%d)\n", aux, cartadescarte.tipo); break;
		}
	}

//////////////////////////////////////////////////////////////////////


void mostra_mesa() {
	
	printf("\nBaralho (%d)\n", tam_baralho);
//	imprime_cartas(baralho,tam_baralho);
	
	contapontospc();
	printf("\n\nMao PC\n%d Pontos (%d)\n",pontospc, numcartaspc);
//	imprime_cartas(maopc,numcartaspc);
	pontospc=0;
	
	printf("\n\nDescarte (%d):\n",tam_descarte);
	printf("%s", cartadescarte.rotulo);
	corativa();
	
	contapontosuser();
	printf("\n\n%s\n%d Pontos (%d):\n",nome, pontosuser, numcartasuser);
	imprime_cartas(maouser,numcartasuser);
	pontosuser=0; 
}

/////////////////////////////////////////////////////////////////



void distribui() {
  int i;
  cartas_t carta;

  for (i=0;i<7;++i) {
      carta = retira_carta(baralho,&tam_baralho);
      insere_carta(maouser,&numcartasuser,carta);                  //DISTRIBUIR AS CARTAS PARA O USUARIO, PC E DESCARTE
      carta = retira_carta(baralho,&tam_baralho);
      insere_carta(maopc,&numcartaspc,carta);
  }
  carta = retira_carta(baralho,&tam_baralho);
  insere_carta(descarte,&tam_descarte,carta);
  cartadescarte=descarte[tam_descarte-1];
}

//////////////////////////////////////////////////////////////////

void nomeuser(){
	printf("Digite o seu nome\n");               //RECEBE O NOME DO USUARIO
	scanf("%s:", &nome);
}
//////////////////////////////////////////////////////////////////

void bemvindo(){
	cartas_t carta;
	int aux =0;
	printf("....UNO....\n\n");
	nomeuser();
	embaralha();
	distribui();
	while(cartadescarte.tipo==CURINGA4){
		mostra_mesa();
		printf("\nCarta invalida para descarte, distribuindo novamente...\n");
		carta = retira_carta(baralho,&tam_baralho);
  		insere_carta(descarte,&tam_descarte,carta);                                           // PROCESSOS PR…-JOGO
  		cartadescarte=descarte[tam_descarte-1];
  	}
  	if(cartadescarte.tipo==CURINGA){
  		mostra_mesa();
  		curinga(1);
  	}
  	if(cartadescarte.tipo==PULA || cartadescarte.tipo==INVERTE){
  		mostra_mesa();
  		printf("\nVoce perde a vez\n");
  		jogadapc();
	  }
	if(cartadescarte.tipo==COMPRA2){
		mostra_mesa();
		printf("\nVoce perde a vez e compra +2\n");
		comprauser(2);
		jogadapc();
	}
}


void jogo(){
	for(;;){ // loop para jogadas, qunado for quebrado significa que o jogo acabou 
		mostra_mesa();
		jogadauser();
		if(numcartasuser==1)
				printf("\n!!!UNO!!!\n");
		printf("\n------------------------------------------\n");
		if(tam_baralho==0|| numcartasuser==0) break;
		mostra_mesa();
		jogadapc(); 
		if(numcartaspc==1)
				printf("\n!!!UNO!!!\n");
		printf("\n------------------------------------------\n");
		if(tam_baralho==0 || numcartaspc==0) break;
}  
	
	if(tam_baralho<=0) printf("\nACABARAM AS CARTAS DO BARALHO\n");
	contapontosuser();
	contapontospc();
	if(pontospc<pontosuser)                            //contar os pontos para ver quem venceu
		printf("VOCE PERDEU");
	if(pontosuser<pontospc)
		printf("PARABENS!!! VOCE GANHOU");
}	
