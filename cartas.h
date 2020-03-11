
#define TAM 108  // numero de cartas


////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////

//tipos de cartas
typedef enum{
	ZERO, UM, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, OITO, NOVE, PULA, INVERTE, COMPRA2,  CURINGA, CURINGA4 
} tipo_t;


typedef enum{
	AZUL, AMARELO, VERDE, VERMELHO, QUALQUER
} cor_t;

//////////////////////////////////////////////

typedef struct{
	int indice;
	tipo_t tipo;        //Numero, pula um, inverte, compra 2, curinga, curinga 4
 	cor_t cor;         //azul, amarelo, verde, vermelho, outro
	char rotulo[6];   //a descriÃ§Ã£o da carta Ex: Pu/Am
	int pontos;      //quantos pontos valem cada carta
} cartas_t;

