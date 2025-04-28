# 🚢 Projeto: **Batalha Naval – Posicionamento de Navios**

Este projeto marca o início do desenvolvimento de um jogo de **Batalha Naval** em linguagem **C**.  
O objetivo principal é criar a base do tabuleiro e posicionar os primeiros navios corretamente.

---

## 🎯 O que o programa faz:

- Cria um **tabuleiro 10x10** representado por uma **matriz bidimensional**.
- Inicializa todas as posições do tabuleiro com o valor **0** (representando água).
- Declara e utiliza **vetores unidimensionais** para representar dois navios:
  - Um **navio posicionado na horizontal** (3 casas).
  - Um **navio posicionado na vertical** (3 casas).
- Posiciona os navios no tabuleiro usando **laços `for`**, garantindo que:
  - Não ultrapassem os limites do tabuleiro.
  - Não se sobreponham (posições fixas).
- Exibe o tabuleiro no console de maneira organizada, mostrando claramente:
  - **0** para água
  - **3** para partes dos navios

---

## 🧠 Conceitos aplicados:

- Vetores (arrays unidimensionais)
- Matrizes (arrays bidimensionais)
- Laços de repetição `for` aninhados
- Controle de índices para posicionamento seguro
- Impressão estruturada de matrizes no terminal

---

## 💻 Como rodar:

1. Compile o programa com um compilador C (exemplo usando GCC):

   ```bash
   gcc batalha_naval.c -o batalha_naval
Execute o programa:

bash
Copiar
Editar
./batalha_naval
O tabuleiro será exibido no terminal, com os navios devidamente posicionados.

