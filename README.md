# 🆔 Exemplo de Uso do ID Único no Raspberry Pi Pico

Um projeto de exemplo para **Raspberry Pi Pico / Pico W** que demonstra como obter e manipular o identificador de hardware único (UID) do dispositivo. Este ID é perfeito para identificar dispositivos em redes, criar nomes de host, ou como base para chaves de segurança.

Este projeto utiliza a biblioteca `pico_unique_id` do Pico-SDK em C.

-----

## 🌟 Recursos

  - 🔍 **Leitura Simples:** Mostra como obter o ID com uma única chamada de função.
  - 📝 **Dois Formatos:** Demonstra como ler o ID tanto como uma **string hexadecimal** quanto como **bytes brutos**.
  - ✂️ **Manipulação de String:** Inclui exemplos práticos de como usar o ID para:
      - Gerar nomes de host (ex: `pico_e6614103e7690f2d`).
      - Criar nomes de host curtos (ex: `pico_690f2d`).
      - Formatar o ID para melhor legibilidade (ex: `e661-4103-e769-0f2d`).
  - ⚙️ **Pronto para Compilar:** Inclui um `CMakeLists.txt` já configurado com as bibliotecas `pico_unique_id` e `hardware_flash`.

## 🛠️ Pré-requisitos

### 🔩 Hardware

  - BitDogLab/Raspberry Pi Pico W

### 💻 Software

  - [Pico C/C++ SDK](https://github.com/raspberrypi/pico-sdk) configurado.
  - [ARM GCC Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm)
  - CMake

## 🚀 Como Usar

### 1\. Clone o Repositório

```bash
git clone https://github.com/LabirasIFPI/bitdoglab_pico_unique_id
cd bitdoglab_pico_unique_id
```

### 2\. 👨‍💻 Compile o Projeto

Crie um diretório de `build`, execute o `cmake` e o `make`.

```bash
mkdir build
cd build
cmake ..
make
```

### 3\. ✨ Flashe o Pico

  - Pressione e segure o botão **`BOOTSEL`** no seu Pico e conecte-o ao computador.
  - Ele aparecerá como um dispositivo de armazenamento USB.
  - Arraste o arquivo `.uf2` gerado na pasta `build` para dentro do Pico.

A placa irá reiniciar. Abra um **monitor serial** para ver o resultado\!

### 👀 Saída Esperada no Monitor Serial

Você verá uma saída parecida com esta (o ID será diferente para cada placa):

```
=== Demonstração do ID Único do Raspberry Pi Pico ===

ID único (string completa): e6614103e7690f2d
Nome de host curto: pico_690f2d

ID único (bytes individuais): e6:61:41:03:e7:69:0f:2d
```

-----

Aproveite este recurso para tornar seus projetos IoT mais robustos e identificáveis\! 🌐
