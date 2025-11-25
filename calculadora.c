#include <stdio.h>

void mostrar_menu() {
  printf("\n--- Calculadora ---\n");
  printf("1. Sumar\n");
  printf("2. Restar\n");
  printf("3. Multiplicar\n");
  printf("4. Dividir\n");
  printf("5. Salir\n");
  printf("Seleccione una opcion: ");
}

int main() {
  int opcion;
  double num1, num2, resultado;

  do {
    mostrar_menu();
    scanf("%d", &opcion);

    if (opcion >= 1 && opcion <= 4) {
      printf("Ingrese el primer numero: ");
      scanf("%lf", &num1);
      printf("Ingrese el segundo numero: ");
      scanf("%lf", &num2);
    }

    switch (opcion) {
    case 1:
      resultado = num1 + num2;
      printf("Resultado: %.2lf\n", resultado);
      break;
    case 2:
      resultado = num1 - num2;
      printf("Resultado: %.2lf\n", resultado);
      break;
    case 3:
      resultado = num1 * num2;
      printf("Resultado: %.2lf\n", resultado);
      break;
    case 4:
      if (num2 != 0) {
        resultado = num1 / num2;
        printf("Resultado: %.2lf\n", resultado);
      } else {
        printf("Error: No se puede dividir por cero.\n");
      }
      break;
    case 5:
      printf("Saliendo...\n");
      break;
    default:
      printf("Opcion no valida. Intente de nuevo.\n");
    }
  } while (opcion != 5);

  return 0;
}
