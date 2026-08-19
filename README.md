# Carrinho Robótico Bluetooth

Projeto de um **carrinho robótico controlado remotamente via Bluetooth**, utilizando Arduino, ponte H e motores DC para realizar movimentos pelo Bluetooth.

## Sobre o Projeto

O projeto consiste em um carrinho robótico de duas rodas motorizadas capaz de realizar movimentos básicos a partir de comandos enviados por Bluetooth.

O sistema permite controlar:

* Frente
* Ré
* Esquerda
* Direita
* Parada

O controle é realizado por meio de comandos enviados por um módulo Bluetooth conectado ao Arduino.

## Componentes

* Arduino Uno
* Módulo Bluetooth HC-05 ou HC-06
* Ponte H L298N
* 2 motores DC
* Chassi para carrinho
* Rodas
* Bateria ou fonte de alimentação
* Jumpers

## Ligações

### Ponte H — Arduino

| Ponte H | Arduino |
| ------- | ------- |
| IN1     | 2       |
| IN2     | 3       |
| IN3     | 4       |
| IN4     | 5       |

### Bluetooth — Arduino

| Bluetooth | Arduino |
| --------- | ------- |
| TX        | RX      |
| RX        | TX      |
| GND       | GND     |
| VCC       | 5V*     |

> **Importante:** verifique a tensão recomendada para o seu módulo Bluetooth antes de realizar a ligação.

### Comunicação Bluetooth

Recomenda-se utilizar os pinos de comunicação serial separados para evitar conflitos durante o upload do código.

O uso da biblioteca `SoftwareSerial` em outros pinos é recomendado.

## Comandos

| Comando | Ação     |
| ------- | -------- |
| `F`     | Frente   |
| `B`     | Ré       |
| `L`     | Esquerda |
| `R`     | Direita  |
| `S`     | Parar    |

O aplicativo ou dispositivo Bluetooth deve enviar esses caracteres para o Arduino.

## Funcionamento

O Arduino recebe o comando através da comunicação Bluetooth e, de acordo com o caractere recebido, aciona os motores por meio da ponte H L298N.

### Exemplos

```text
F → Frente
B → Ré
L → Esquerda
R → Direita
S → Parar
```

## Estrutura do Projeto

```text
Carrinho-Bluetooth/
│
├── carrinho_bluetooth.ino
└── README.md
```

## Como Utilizar

1. Monte o circuito seguindo as ligações apresentadas neste README.
2. Conecte o Arduino ao computador.
3. Abra o arquivo `.ino` na Arduino IDE.
4. Selecione a placa Arduino correta.
5. Selecione a porta COM correspondente.
6. Faça o upload do programa.
7. Conecte o smartphone ao módulo Bluetooth.
8. Utilize um aplicativo de controle Bluetooth para enviar os comandos.
9. Controle o carrinho utilizando os comandos definidos no projeto.

## Importante

Durante o upload do programa, evite utilizar diretamente os pinos `0 (RX)` e `1 (TX)` para o módulo Bluetooth, pois esses pinos também são utilizados pela comunicação USB do Arduino.

Para evitar conflitos, recomenda-se utilizar a biblioteca `SoftwareSerial` e conectar o módulo Bluetooth a outros pinos digitais.

## Tecnologias Utilizadas

* **Arduino**
* **C/C++**
* **Bluetooth**
* **HC-05 / HC-06**
* **Ponte H L298N**
* **Motores DC**
* **SoftwareSerial**

## Objetivo

Este projeto foi desenvolvido com foco em **robótica educacional**, permitindo explorar conceitos de:

* Programação
* Eletrônica
* Comunicação sem fio
* Controle de motores
* Automação
* Prototipagem
* Pensamento lógico

A proposta é transformar conceitos teóricos em uma aplicação prática, facilitando o aprendizado por meio da construção e programação de um robô funcional.

## Aplicações Educacionais

O projeto pode ser utilizado em atividades de ensino relacionadas a:

* Introdução à robótica
* Arduino
* Programação embarcada
* Eletrônica básica
* Sistemas de controle
* Comunicação Bluetooth
* Trabalho em equipe
* Resolução de problemas

### Contato

* **Instagram:** [@fabricio_kanashii](https://instagram.com/fabricio_kanashii)
* **WhatsApp:** [(85) 99295-4741](https://wa.me/5585992954741)


WhatsApp: (85) 99295-4741
