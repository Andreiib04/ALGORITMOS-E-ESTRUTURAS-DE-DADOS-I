          
Dado o cabeçalho de uma lista encadeada, retorne true se for um palíndromo ou falso caso contrário.

Exemplo 1:
Entrada: cabeça = [1,2,2,1]
Saída: true

Exemplo 2:
Entrada: cabeça = [1,2]
Saída: falso

Restrições:
O número de nós na lista está no intervalo [1, 10^5].

0 <= ListNode.val <= 9

struct ListNode {
int val;
struct ListNode *next;
};

bool isPalindrome(struct ListNode* head){}

Implemente um main onde nele você cria uma lista ligada a mão (hardcode) com alguns casos de teste e chame a função acima para testar.

Se não conseguir terminar em aula, termine em casa e, também, faça a solução com complexidade em tempo O(n) e em espaço O(1).
