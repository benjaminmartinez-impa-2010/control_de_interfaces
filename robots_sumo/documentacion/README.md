Carpeta designada para la documentación de robot "Kayro"

 Recordar:
 
¿QUE ES UNA RASPBERRY?
 Una Raspberry Pi es una computadora completa del tamaño de una tarjeta de crédito. A diferencia de un microcontrolador (como un Arduino), que solo ejecuta una tarea específica de código repetidamente, una Raspberry Pi es un ordenador en miniatura capaz de ejecutar un sistema operativo completo.

Investigacion sobre "Puente H"

¿QUE ES UN PUENTE H?
 Un puente H es un circuito electrónico que permite controlar el sentido de giro y la velocidad de un motor de corriente continua (DC), así como frenarlo de manera eficiente.
 
¿QUE ES UN PMW?
 Es una técnica utilizada para controlar la cantidad de energía que se le envía a un dispositivo variando el tiempo en que la señal está encendida en comparación con el tiempo que está apagada, todo esto dentro de un ciclo de tiempo muy rápido. El PWM funciona como un interruptor que se enciende y se apaga a una frecuencia muy alta

 ENTRADAS Y SALIDAS DEL PUENTE HW-095
  El módulo HW-095 (integrado L298N) cuenta con una distribución física muy clara de sus pines y conexiones, divididas exactamente entre la sección de control (lógica) y la de potencia.

PINES DE CONTROL LOGICO:
- IN1 e IN2: Entradas de dirección para el Motor A. Definen el sentido de giro combinando estados Altos (HIGH) y Bajos (LOW).
- IN3 e IN4: Entradas de dirección para el Motor B (en caso de usar un segundo motor).
- ENA: Pin de habilitación y velocidad para el Motor A.
- ENB: Pin de habilitación y velocidad mediante PWM para el Motor B.

BORNERA DE ALIMENTACION:

- 12V (o VCC): Entrada de energía principal para alimentar los motores.
- GND (Tierra): Tierra común del sistema. Obligatoria de conectar también al GND de tu microcontrolador para que las       señales de control funcionen.
- 5V (o VSS): Borne con doble función según el uso:
   1. Si usas una batería superior a 6V en la entrada de 12V, este pin entrega una salida regulada de 5V para alimentar        sensores o tarjetas externas (como un Arduino).
   2. Si tus motores funcionan con voltajes muy bajos (menos de 6V), puedes retirar el jumper regulador e introducir 5V        externos por aquí para alimentar la lógica del chip.
  
SALIDAS (Outputs):
 Las salidas son los terminales de potencia de alta corriente que van conectados directamente a los motores.
 
- OUT1 y OUT2: Terminales de conexión para el Motor A. Por aquí fluye la corriente con la polaridad invertida según
  las órdenes enviadas a IN1 e IN2.
- OUT3 y OUT4: Terminales de conexión para el Motor B. Funcionan de la misma manera que los anteriores pero
  controlados por IN3 e IN4.
  
   
