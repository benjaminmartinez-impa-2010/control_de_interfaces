#include <stdio.h>
#include "pico/stdlib.h"

#define IN1 14
#define IN2 15
#define IN3 17
#define IN4 18

void config(){

    gpio_init(IN1);
    gpio_set_dir(IN1, GPIO_OUT);

    gpio_init(IN2);
    gpio_set_dir(IN2, GPIO_OUT);

    gpio_init(IN3);
    gpio_set_dir(IN3, GPIO_OUT);

    gpio_init(IN4);
    gpio_set_dir(IN4, GPIO_OUT);

}

void adelante(){

    gpio_put(IN1, 1);
    gpio_put(IN2, 0);

    gpio_put(IN3, 1);
    gpio_put(IN4, 0);
}

void atras(){

    gpio_put(IN1, 0);
    gpio_put(IN2, 1);

    gpio_put(IN3, 0);
    gpio_put(IN4, 1);
}

void izquierda(){

    gpio_put(IN1, 0);
    gpio_put(IN2, 1);

    gpio_put(IN3, 1);
    gpio_put(IN4, 0);
}

void derecha(){

    gpio_put(IN1, 1);
    gpio_put(IN2, 0);

    gpio_put(IN3, 0);
    gpio_put(IN4, 1);
}

void detener(){

    gpio_put(IN1, 0);
    gpio_put(IN2, 0);

    gpio_put(IN3, 0);
    gpio_put(IN4, 0);
}