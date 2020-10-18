#include <stdio.h>
#include <math.h>

int main(void) {
  
  //Calculo area de cilindro

  float radio;
  float altura;
  float pi = 3.14;
  float area;
  float volumen;


  printf("Vamos a calcular el area de un cilindro!\n");
  

  printf("Ingresa el radio de la base: ");
  scanf("%f", &radio);

  printf("Ingresa la altura del cilindro: ");
  scanf("%f", &altura);

  area = 2 * pi * radio * (radio + altura);
  volumen = pi * pow(radio,2) * altura;

  printf("El área de la base es: %f \n ", area);

  printf("El volumen del cilindro es: %f \n", volumen);


  //Calculo grados fahrenheit a celsius
  float valor;
  float temperatura;

  printf("Vamos a transformar grados fahrenheit a celsius\n");

  printf("Ingresa la temperatura en grados fahrenheit: ");
  scanf("%f", &valor);

  temperatura = (((valor - 32) * 5) / 9);

  printf("La temperatura en grados celcius es: %f", temperatura);




  return 0;
}