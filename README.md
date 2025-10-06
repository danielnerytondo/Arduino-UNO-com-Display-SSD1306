# Relógio com Display OLED e Arduino

![Arduino](https://img.shields.io/badge/Platform-Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)
![PlatformIO](https://img.shields.io/badge/PlatformIO-Platform-FF9B00?style=for-the-badge&logo=platformio&logoColor=white)

Um relógio digital simples implementado com Arduino e display OLED SSD1306, que exibe horas, minutos e segundos em tempo real.

## 📋 Descrição

Este projeto implementa um relógio digital utilizando um microcontrolador Arduino Uno e um display OLED de 128x64 pixels. O relógio conta com formatação de dois dígitos para todas as unidades de tempo e atualiza a cada segundo.

## 🛠 Hardware Requerido

- **Placa Arduino** (Uno, Nano ou compatível)
- **Display OLED** SSD1306 128x64 (com interface I2C)
- **Conexões jumper**
- **Fonte de alimentação** para o Arduino

## 📦 Componentes e Especificações

- **Display**: SSD1306 128x64 pixels
- **Interface**: I2C (Endereço 0x3C)
- **Atualização**: 1 segundo
- **Formato**: HH:MM:SS (24 horas)

## 🔧 Instalação e Configuração

### Pré-requisitos

- [PlatformIO](https://platformio.org/) instalado
- Arduino conectado via USB

### Bibliotecas Necessárias

O projeto utiliza as seguintes bibliotecas:
- `Adafruit SSD1306` (versão 2.5.15 ou superior)
- `Adafruit GFX Library`

### Configuração do Hardware

| Display OLED | Arduino |
|--------------|---------|
| VCC          | 3.3V ou 5V |
| GND          | GND     |
| SCL          | A5      |
| SDA          | A4      |


### 🎯 Funcionalidades
✅ Exibição de horas, minutos e segundos

✅ Formatação com dois dígitos (00:00:00)

✅ Atualização em tempo real a cada segundo

✅ Reset automático às 23:59:59

✅ Interface limpa e legível no display OLED


### ⚙️ Configuração PlatformIO
O arquivo platformio.ini está configurado para:

Placa: Arduino Uno

Framework: Arduino

Porta: COM5 (ajuste conforme sua configuração)

Velocidade do monitor: 115200 baud

Bibliotecas: Adafruit SSD1306

 ### 🔄 Customização
Alterar Intervalo de Atualização
Modifique a constante intervalo no código:

cpp
const long intervalo = 1000; // 1000ms = 1 segundo
Alterar Formato de Exibição
Modifique a seção de exibição no display para personalizar o layout.

 ### 🐛 Solução de Problemas
Display Não Inicializa
Verifique as conexões I2C

Confirme o endereço do display (0x3C)

Verifique a alimentação do display

Tempo Incorreto
O relógio é baseado no millis() do Arduino

Para maior precisão, considere usar um RTC externo

 ### 📄 Licença
Este projeto está sob a licença MIT. Veja o arquivo LICENSE para mais detalhes.

### 👨‍💻 Autor
Desenvolvido por Daniel Felipe Nery 

🤝 Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues e pull requests.

### Compilação e Upload

Clone este repositório:
```bash
git clone https://github.com/seu-usuario/relogio-arduino-oled.git
