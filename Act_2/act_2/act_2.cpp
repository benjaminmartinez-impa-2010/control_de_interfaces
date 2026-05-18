#include <stdbool.h>
#include <stdio.h>
#include "pico/stdlib.h"

/**
 * @brief Programa principal
*/
int main(void) {
  // Inicializo el USB
  stdio_init_all();
  // Demora para esperar la conexion
  sleep_ms(1000);

  // Inicializacion de GPIO con gpio_init()

  /* Habilito el GPIO25 (LED)
  gpio_init(PICO_DEFAULT_LED_PIN);
  GPIO25 como salida
  gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
  Configuracion de entrada/salida con gpio_set_dir()

  */
    gpio_init(4);
    gpio_init(7);
    gpio_set_dir(4,GPIO_IN);
    gpio_set_dir(7,GPIO_OUT);
    gpio_pull_down(4);
    bool a=0;

  while (true) {
    a = gpio_get(4);
    if (a==1){
        gpio_put(7,1);
        }
    else if (a==0){
        gpio_put(7,0);
        }

    // Resolver logica para GPIO20 -> GPIO6

    // Resolver logica para GPIO21 -> GPIO7

    // Resolver logica para GPIO22 -> GPIO8

  }
  return 0;
}