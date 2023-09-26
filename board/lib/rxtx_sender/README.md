# rxtx_sender
Corresponde ao envio da imagem do tabuleiro para o software em alto nível

## funções

Funções presentes neste pacote:

```c
image_board build_packet(char **board);
```

- Constroi o pacote de envio, passando de uma matriz de char para um `image_board`(struct pertencente à `board.h`).

```c
void send_board_to_c(image_board board);
```

- Envia a imagem do tabuleiro para o software alto nivel escrito em C/C++;

```c
void send_board_to_java(image_board board);
```

- Envia a imagem do tabuleiro para o software alto nivel escrito em Java;