   #include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Variáveis para o tempo
unsigned long tempoAnterior = 0;
const long intervalo = 1000; // Atualizar a cada 1000ms (1 segundo)
int segundos = 0, minutos = 0, horas = 0;

void setup() {
  Serial.begin(9600);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Falha no display!"));
    for(;;);
  }
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  unsigned long tempoAtual = millis();

  if (tempoAtual - tempoAnterior >= intervalo) {
    tempoAnterior = tempoAtual;
    segundos++;

    if (segundos == 60) {
      segundos = 0;
      minutos++;
      if (minutos == 60) {
        minutos = 0;
        horas++;
        if (horas == 24) {
          horas = 0;
        }
      }
    }

    // Exibe no display
    display.clearDisplay();
    display.setCursor(0, 10);
    display.print("Relogio Arduino");
    display.setCursor(0, 30);
    display.setTextSize(2);
    // Formatação para sempre ter 2 dígitos
    if (horas < 10) display.print("0");
    display.print(horas);
    display.print(":");
    if (minutos < 10) display.print("0");
    display.print(minutos);
    display.print(":");
    if (segundos < 10) display.print("0");
    display.print(segundos);
    display.setTextSize(1);
    display.display();
  }
}