# Blinker Library

Uma biblioteca simples para controlar o piscar de LEDs em microcontroladores ESP8266 e ESP32.

## Recursos

- Piscar LED com intervalo configurável
- Controle individual do LED (ligar, desligar, alternar)
- Leitura do estado atual do LED
- Non-blocking design (uso em loop sem delay)

## Instalação

Esta biblioteca está incluída como parte do projeto micro-servo.

## Uso

```cpp
#include <Arduino.h>
#include <Blinker.h>

Blinker blinker(2, 1000); // LED no pino 2, intervalo de 1000ms

void setup() {
    blinker.begin();
}

void loop() {
    blinker.update(); // Atualiza o estado do LED automaticamente
}
```

## API

### Construtor
- `Blinker(uint8_t pin, unsigned long interval = 1000)` - Cria uma instância do Blinker

### Métodos
- `void begin()` - Inicializa o pino como OUTPUT
- `void setInterval(unsigned long interval)` - Define o intervalo de piscar em ms
- `void update()` - Deve ser chamado no loop principal
- `void on()` - Acende o LED
- `void off()` - Apaga o LED
- `void toggle()` - Alterna o estado do LED
- `bool getState() const` - Retorna o estado atual do LED
- `void setState(bool state)` - Define o estado do LED

## Licença

MIT
