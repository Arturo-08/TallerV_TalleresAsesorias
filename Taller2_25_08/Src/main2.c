/*
 * main2.c
 *
 *  Created on: Aug 25, 2022
 *      Author: CarlosZamudio
 */


int main(void){

	char clearVar =0b11110110;
	char clearMask =0b01111111;  //poner un cero en la en la posicion 87
	clearVar &= clearMask;


	clearVar=clearVar&~(1<<7); //poner 1 7 posiciones despues y luego invertir la variable
	clearVar&=~(1<<7);  //poner un cero en la posicion 7

	char setVar=0b10010111;

	char setMask=0b01000000;

	setVar= setVar|setMask;

	setVar|=(1<<6); //pone un cero en la posicion 6

	char ejercicioVar=0b10111010;

	ejercicioVar &=~(0b1111<<4);
	ejercicioVar |=~(0xD<<4);

}
