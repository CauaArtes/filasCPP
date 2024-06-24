#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> senhasGeradas;
    queue<int> senhasAtendidas;

    while (true) {
        cout << "\nSeletor:\n";
        cout << "0. Sair\n";
        cout << "1. Gerar senha\n";
        cout << "2. Realizar atendimento\n";

        int option;
        cout << "Escolha uma opção: ";
        cin >> option;

        if (option == 0) {
            break;
        } else if (option == 1) {
            // Gerar senha
            int ticket = senhasGeradas.size() + 1;
            senhasGeradas.push(ticket);
            cout << "Senha gerada: " << ticket << endl;
        } else if (option == 2) {
            // Realizar atendimento
            if (senhasGeradas.empty()) {
                cout << "Não há senhas aguardando atendimento." << endl;
            } else {
                int ticket = senhasGeradas.front();
                senhasGeradas.pop();
                senhasAtendidas.push(ticket);
                cout << "Atendimento da senha: " << ticket << endl;
            }
        } else {
            cout << "Opção inválida. Tente novamente." << endl;
        }
    }

    cout << "\nQuantidade de senhas atendidas: " << senhasAtendidas.size() << endl;

    return 0;
}