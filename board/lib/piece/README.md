# piece
Corresponde a leitura das peças

## defines
Os _defines_ no _header-file_ são da forma `PEÇA_MIN` e `PEÇA_MAX` pois cada peça existe um range de operação.

- Documento referente ao mapeamento das peças: https://docs.google.com/spreadsheets/d/1qQT-bnXvD2-O-zUtRbJqxfq0Ip2GGomUqVWOgYq4BKw/edit#gid=0

## funções

Funções presentes neste pacote:

```c
char analogToRepresentationPiece(int analog_value_piece);
```

- Converte da representação analógica para a representação em `char`