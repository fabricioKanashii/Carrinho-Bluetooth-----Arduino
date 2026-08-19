Carrinho Robótico Bluetooth

Projeto de um carrinho robótico controlado remotamente via Bluetooth, utilizando Arduino e uma ponte H para controle independente dos motores.

Sobre o Projeto

O projeto consiste em um carrinho de duas rodas motorizadas capaz de realizar movimentos básicos a partir de comandos enviados por Bluetooth.

O sistema permite controlar:

Frente
Ré
Esquerda
Direita
Parada

O controle é realizado por meio de comandos enviados pelo módulo Bluetooth conectado ao Arduino.

Componentes
Arduino Uno
Módulo Bluetooth HC-05 ou HC-06
Ponte H L298N
2 motores DC
Chassi para carrinho
Rodas
Bateria/fonte de alimentação
Jumpers
Ligações
Ponte H
Ponte H	Arduino
IN1	2
IN2	3
IN3	4
IN4	5
Bluetooth

Recomenda-se utilizar os pinos de comunicação serial separados para evitar conflitos durante o upload do código.

Bluetooth	Arduino
TX	RX
RX	TX
GND	GND
VCC	5V*

*Verifique a tensão recomendada para o seu módulo Bluetooth antes da ligação.

Comandos
Comando	Ação
F	Frente
B	Ré
L	Esquerda
R	Direita
S	Parar

O aplicativo ou dispositivo Bluetooth deve enviar esses caracteres para o Arduino.

Funcionamento

O Arduino recebe o comando através da comunicação Bluetooth e, de acordo com o caractere recebido, aciona os motores pela ponte H.

Exemplo:

F → Frente
B → Ré
L → Esquerda
R → Direita
S → Parar
Estrutura do Projeto
Carrinho-Bluetooth/
│
├── carrinho_bluetooth.ino
└── README.md
Como utilizar
Monte o circuito seguindo as ligações apresentadas.
Conecte o Arduino ao computador.
Abra o arquivo .ino na Arduino IDE.
Selecione a placa e a porta COM correta.
Faça o upload do programa.
Conecte o smartphone ao módulo Bluetooth.
Envie os comandos para controlar o carrinho.
Importante

Durante o upload do programa, evite utilizar os pinos 0 (RX) e 1 (TX) para o módulo Bluetooth, pois esses pinos também são utilizados pela comunicação USB do Arduino. O uso de SoftwareSerial em outros pinos é recomendado.

Tecnologias
Arduino
C/C++
Bluetooth
L298N
Motores DC
Objetivo

Este projeto foi desenvolvido com foco em robótica educacional, permitindo explorar conceitos de programação, eletrônica, comunicação sem fio e controle de motores por meio de uma aplicação prática.

Autor

Fabrício Kanashii

Instagram: @fabricio_kanashii

WhatsApp: (85) 99295-4741
