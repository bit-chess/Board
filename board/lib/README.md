# lib

Arquivos que compõe a implementação do projeto

## mux
Implementação do multiplexador

```cpp
const int seletor[];
```

- Lista de seletores, vale salientar que a notação é little endian.

```cpp
const int analog_reader_pin;
```

- Leitura do pino de resposta pós chaveamento do MUX.

```cpp
void buildSystem(void);
```

- Builda o MUX.

```cpp
int returnPiece(int value_pin_seletor);
```

- Retorna o valor do chaveamento. Recebe como argumento a posição da casa e retorna o valor analógico da peça

## piece
Descreve a peça em código.

```cpp
char analogToRepresentationPiece(int analog_value_piece);
```

- Retorna o valor da peça na representação do projeto(char ou bitboard) e recebe como argumento o valor analógico referente à peça.

## communication

Comunicação P2P entre a ESP32 e o Desktop.
