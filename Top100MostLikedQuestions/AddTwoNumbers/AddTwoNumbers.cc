#include <iostream>
using namespace std;
// Estructura ListNode
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Función para imprimir una lista enlazada
void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val;
        if (head->next != nullptr) {
            std::cout << " -> ";
        }
        head = head->next;
    }
    std::cout << std::endl;
}

// Tu función addTwoNumbers
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* listaResultado = new ListNode();
        ListNode* iterator_resultado = listaResultado;
        int carry = 0;
        while(l1!= nullptr or l2 != nullptr) {
            int s_l1 = 0;
            int s_l2 = 0;

            if(l1 != nullptr) {
                s_l1 = l1->val;
                l1 = l1->next;
            } 
            if (l2 != nullptr) {
                s_l2 = l2->val;
                l2 = l2->next;
            }
            int valor_nuevo = s_l1 + s_l2 + carry;
            
            carry = valor_nuevo/10;
            valor_nuevo = valor_nuevo%10;

            iterator_resultado->next = new ListNode(valor_nuevo);
            iterator_resultado = iterator_resultado->next;
        }
        if (carry > 0) iterator_resultado->next = new ListNode(carry);

        ListNode* r = listaResultado->next;
        delete listaResultado;
        return r;
}

int main() {
    // Crear dos listas enlazadas
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    // Imprimir las listas originales
    std::cout << "Lista 1: ";
    printLinkedList(l1);

    std::cout << "Lista 2: ";
    printLinkedList(l2);

    // Llamar a tu función para sumar las listas
    ListNode* resultado = addTwoNumbers(l1, l2);

    // Imprimir el resultado
    std::cout << "Resultado: ";
    printLinkedList(resultado);

    // Liberar la memoria de las listas y el resultado
    delete l1;
    delete l2;
    delete resultado;

    return 0;
}


