# mux

Decodificador do tabuleiro baseado em multiplexadores. Tem como objetivo fazer a leitura das 64 casas do tabuleiro em uma única saida

## hardware
O sistema compõe 4 mux 16:4 e cada mux realiza a leitura de duas linhas.

![](map_karnaugh/mux.png)
- Módulo Multiplexador CD74HC4067 Analógico Digital 16 Canais.

###

![](map_karnaugh/map.png)
- Mapa de Karnaugh

## software

### mux
```cpp
const int seletor[][] = {{}}; //Seletores. Notação: LITTLE ENDIAN
```

- Conjuntos de seletores.

```cpp
const int SIG[]; //Conjunto de pinos de leitura analógica
```

- SIG.

```cpp
void buildSystem(void);
```

- Monta o sistema de decodificação.

```cpp
int returnPiece(int value_pin_seletor);
```

- Retorna a peça informando o valor analógico.

### piece

```cpp
char analogToRepresentationPiece(int analog_value_piece)
```

- Informa a peça pelo valor analógico.

### image_board

```cpp
char **updateImageBoard(void);
```

- Atualiza e retorna a Imagem do tabuleiro. Note que retorna uma matriz de char e não a `struct image_board`.
