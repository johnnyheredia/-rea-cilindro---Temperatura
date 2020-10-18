#include <stdio.h>
#include <math.h>

int main(void) {
  float radio;
  float altura;
  float pi = 3.14;
  float area;
  float volumen;


  printf("Vamos a calcular el area de un cilindro!\n");
  

  printf("Ingresa el radio de la base: ");
  scanf("%f", &radio);

  printf("Ingresa la altura del cilindro ");
  scanf("%f", &altura);

  area = 2 * pi * radio * (radio + altura);
  volumen = pi * pow(radio,2) * altura;

  printf("El área de la base es: %f \n ", area);

  printf("El volumen del cilindro es: %f ", volumen);


  return 0;
}