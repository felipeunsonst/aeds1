/*
Você recebe um tabuleiro retangular de M  ×  N quadrados. Além disso, você recebe um número ilimitado de peças de dominó padrão de quadrados 2 × 1 . Você tem permissão para girar as peças. Você deve colocar o maior número possível de dominós no tabuleiro de modo a atender às seguintes condições:

1. Cada dominó cobre completamente dois quadrados.

2. Não há dois dominós sobrepostos.

3. Cada dominó fica inteiramente dentro do tabuleiro. É permitido tocar nas bordas do tabuleiro.

Encontre o número máximo de dominós que podem ser colocados sob essas restrições.

Entrada
Em uma única linha você recebe dois inteiros M e N — tamanhos de tabuleiro em quadrados ( 1 ≤  M  ≤  N  ≤ 16 ).

Saída
Produza um número - o número máximo de dominós que podem ser colocados.
*/

#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    // Calcula a área total do tabuleiro
    int area = M * N;

    // O número máximo de dominós é a área dividida por 2
    int maxDominos = area / 2;

    cout << maxDominos << endl;

    return 0;
}
