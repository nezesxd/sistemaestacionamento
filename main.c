#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Projeto 1 - Especificacao*/

int main() {
	
	int tempoinicial, tempofinal, totaltranscorrido, horastranscorrido, minutostranscorrido, segundostranscorrido, resto, tempotranscorrido;
	int horasi, minutosi, segundosi, horasf, minutosf, segundosf;
	int codV, tipV, menu, menor=0, maior=0, aux=0, aux1=0;
	float MotoValor=0, PrimeiraH, motocalculo, diferencaM, ValorP, CarroValor=0, DiferencaCP;
	float CarroValorG=0, DiferencaCG, valorarrecadado=0;
	float valorarrecadado1=0,  valorarrecadado2=0,  valorarrecadado3=0, totalarrecadado=0, totalarrecadado2=0, totalarrecadado3=0;
	int quantCliente=0, resposta, quantDias, cobrancamoto=0, cobrancacarrop=0, cobrancacarrog=0, cobranca=0;
	float totalpago, restocorreto, mediapaga=0, mediacorreta=0, mesmoto=0, mescarro=0, mescarrog=0;
	float prejuizo=0, carropequenomax=0, carropequenomenorcobrado=0;
	int mespago1=0, mespago2=0, mespago3=0;
	float valor_pago_mes, valor_cobrado_mes;
do{


	/*MENU*/ 

	printf("\n--------------------------");
	printf("\nSelecione uma das opcoes\n");
	printf("(1) Registrar Movimento\n");
	printf("(2)	Gerar Relatorio\n");
	printf("(3)	Encerrar\n");
	printf("Selecione a opcao: ");
	scanf("%i", &menu); 
	
	switch (menu){
	
	case 1:  			
							
							/* SE MENU FOR 1*/

	for(quantDias=1;quantDias<31;quantDias++){ // CONTAR DIAS

		
		printf("Dia %i\n", quantDias);
do{                                            // CONTAR CLIENTES

	quantCliente = quantCliente+1;	 
    printf("Cliente %i\n", quantCliente);


			/*TIPO DE VEICULO*/

	printf("--------------------------\n");
	printf("Informe o tipo de veiculo\n");
	printf("1- Moto\n");
	printf("2- Carro Pequeno\n");
	printf("3- Carro Grande\n");
	printf("Digite sua opcao: ");
	scanf("%i", &tipV);
	
	if(tipV == 2){

		carropequenomax ++;
	}
	/*CODIGO DO VEICULO*/

	printf("Codigo do veiculo: ");
	scanf("%i", &codV);

	/*HORARIO DE ENTRADA*/

	printf("Horario de Entrada: ");    
	scanf("%i:%i:%i", &horasi, &minutosi, &segundosi);
	
	/*HORARIO DE SAIDA*/

	printf("Horario de Saida: ");
	scanf("%i:%i:%i", &horasf, &minutosf, &segundosf);
	
	/*VALOR PAGO*/

	printf("Valor Pago: ");
	scanf("%f", &ValorP);

	valorarrecadado = (float)valorarrecadado + ValorP;
	
    /*FORMULA DO MAIOR VALOR*/

	maior = codV;
	menor = codV;

	if (codV < menor)
	{
		menor = codV;
	} else if(codV > maior){
		maior = codV;
	}	

    /*FORMULA DE TEMPO*/

    tempoinicial = segundosi + minutosi*60 + horasi*3600;
	tempofinal = segundosf + minutosf*60 + horasf*3600;
	
	if(tempofinal< tempoinicial){
	 printf("Horario de saida menor que Horario de entrada\n");
	}else{
		
		totaltranscorrido = tempofinal - tempoinicial;
		
		horastranscorrido = totaltranscorrido /3600;
		
		resto = totaltranscorrido % 3600;
		
		minutostranscorrido = resto /60;
		
		segundostranscorrido - resto % 60;
		
		tempotranscorrido = horastranscorrido+segundostranscorrido+minutostranscorrido;
		

}    /*GRATUIDADE*/

	if(totaltranscorrido <= 1800){
	printf("---------------------\n");
	printf("Gratuidade Confirmada\n");
	printf("---------------------\n");
}

	

switch(tipV){


// SE FOR MOTO // 

	case 1:

    if(horastranscorrido > 1){							          //*primeira hora ? 4 reais as demais 2,50

	PrimeiraH = horastranscorrido - 1;	                          //* Subrai 1 hora caso seja acima d 1 hora


}

	MotoValor = (float)(PrimeiraH*2.50)+4; 					       //* vai mutiplicar por 2.50 as demais horas e por fina acrescentar 4 da uma hora retirada acima

	diferencaM = ValorP - MotoValor;

    
        printf("O valor recebido do cliente foi: R$%.2f\n", ValorP);
        printf("A diferenca entre os valores e de: R$%.2f\n", diferencaM);

		if(ValorP != MotoValor){
			printf("Valor cobrado incorreto, o valor correto e R$%.2f\n", MotoValor);
		

		}
		if(ValorP == MotoValor){
			printf("Valor cobrado corretamente\n");
		}	

		if(ValorP > MotoValor){
			cobrancamoto ++;
		}

mesmoto = mesmoto + ValorP;


break;


// SE FOR CARRO PEQUENO //

 case 2:
 
 
if(horastranscorrido >1 ){
	PrimeiraH = horastranscorrido -1;
}

	
CarroValor = (float)(PrimeiraH*5)+5.50;
DiferencaCP = ValorP - CarroValor;




	printf("O valor recebido do cliente foi: R$%.2f\n", ValorP);
        printf("A diferenca entre os valores e de: R$%.2f\n", DiferencaCP);

		if(ValorP != CarroValor){
			printf("Valor cobrado incorreto, o valor correto e R$%.2f\n", CarroValor);


		}
		if(ValorP == CarroValor){
			printf("Valor cobrado corretamente\n");
		}
		if(ValorP < CarroValor){
			
			carropequenomenorcobrado++;
		
		}

		if(ValorP > CarroValor){
			cobrancacarrop ++;
		}

valor_pago_mes = valor_pago_mes + ValorP;
valor_cobrado_mes = valor_cobrado_mes + CarroValor;


mescarro = mescarro + ValorP;
    

break;


case 3:
		// SE FOR CARRO GRANDE //

	if(horastranscorrido >1 ){
	PrimeiraH = horastranscorrido -1;
}

 
 	CarroValorG = (float)(PrimeiraH*5.50)+7.50;
	DiferencaCG = ValorP - CarroValor;



 

	printf("O valor recebido do cliente foi: R$%.2f\n", ValorP);
        printf("A diferenca entre os valores e de: R$%.2f\n", DiferencaCG);

		if(ValorP != CarroValorG){
			printf("Valor cobrado incorreto, o valor correto e R$%.2f\n", CarroValorG);

		
		}
		if(ValorP == CarroValorG){
			printf("Valor cobrado corretamente\n");
	}

	if(ValorP > CarroValorG){

		cobrancacarrog ++;
		
	}
	mescarrog = mescarrog + ValorP;
	break;
}
    /*ARRECADAR VALOR*/

if(tipV == 1){
	
	valorarrecadado1 = valorarrecadado1 + MotoValor;

}

if(tipV == 2){

	valorarrecadado2 = valorarrecadado2 + CarroValor;
	
}

if(tipV == 3){

	valorarrecadado3 = valorarrecadado3 + CarroValorG;
	
}


	printf("--------------------\n");


/*ACUMULATIVO MOTO*/
if(tipV == 1){


	totalarrecadado = valorarrecadado - valorarrecadado1;

}


/*ACUMULATIVO CARRO PEQUENO*/
if(tipV == 2){

	totalarrecadado2 = valorarrecadado - valorarrecadado2;

	
}


/*ACUMULATIVO CARRO GRANDE*/
if(tipV == 3){

	totalarrecadado3 = valorarrecadado - valorarrecadado3;


}
	totalpago = valorarrecadado1 + valorarrecadado2 + valorarrecadado3;

    mediacorreta = (float)totalpago/30; // QUANTIDADE DE DIAS
	printf("--------------------\n");

	printf("Digite 1 para continuar ou -1 para encerrar o dia: \n");
	scanf("%i", &resposta);
	printf("_______________________________________________________ \n\n");



 }while(resposta == 1); // WHILE ARRECADADO 
	}

/*VALOR ARRECADADO*/

printf("Valor arrecadado pago pelo cliente: R$%.2f\n", valorarrecadado);
printf("Moto: R$%.2f\n", valorarrecadado1);
printf("Carro Pequeno: R$%.2f\n", valorarrecadado2);
printf("Carro Grande: R$%.2f\n\n", valorarrecadado3);


/*DIFERENCA DE VEICULOS*/

printf("Diferenca de valores entre Motos: R$%.2f\n", totalarrecadado);
printf("Diferenca de valores entre Carro Pequeno: R$%.2f\n", totalarrecadado2);
printf("Diferenca de valores entre Carro Grande: R$%.2f\n\n", totalarrecadado3);


restocorreto = valorarrecadado - totalpago;
printf("O valor total a se receber do dia deveria ser: R$%.2f\n", totalpago);


if(valorarrecadado < totalpago){
	printf("A empresa teve um prejuizo de: R$%.2f\n", restocorreto);  

    }else{
	    printf("A empresa teve um lucro de R$%.2f\n", restocorreto);
} 
system("Pause");

break; // FINALIZACAO "FOR" CLIENTES



case 2: /*GERAR RELATORIO*/

mediapaga = (float)valorarrecadado/30; // QUANTIDADE DE DIAS


cobranca = cobrancacarrog + cobrancacarrop + cobrancamoto;
prejuizo = (float)(carropequenomenorcobrado/carropequenomax)*100;


/*TOTAL DO VALOR PAGO*/

printf("Total de valor pago por Moto: R$%.2f\n", mesmoto);
printf("Total de valor pago por Carro Pequeno: R$%.2f\n", mescarro);
printf("Total de valor pago por Carro Grande: R$%.2f\n\n", mescarrog);


/*MEDIA*/

printf("Media da diferenca do valor pago: R$%.2f\n", mediapaga);
printf("Media do valor correto: R$%.2f\n\n", mediacorreta);


/*MENO VALOR, PERCENTUAL & COBRANCA*/

printf("Codigo de veiculo que pagou menor valor entre os Carros Grandes: %i\n", menor);
printf("Carros Pequenos com valor abaixo do correto: %.2f%%\n", prejuizo);
printf("Quantidade de cobrancas com valor pago maior que o valor correto: %i", cobranca);

break; // FINAL DO RELATORIO


  }  // SWITCH
 
 
}while(menu < 3);
printf("----------------------------\n");
printf("Desenvolvido por:\n Vinicius Menezes \n Gustavo Sacramento \n Andre Guilherme \n Arthur Cerqueira \n");
printf("----------------------------\n");
return 0;
}