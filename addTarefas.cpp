#include <iostream> 

using namespace std;

int main() {
    //definir a variavel
    char opcao;

    // declarar os itens do menu 
    cout << "1.adicionar tarefas " << endl; 
    cout << "0. sair"<< endl; 
    cout << "escolha uma opcao" << endl;
    cin >> opcao;

        int id; 
        string titulo; 
        string descricao; 
        string data;
        string status;

        cout << "digite o id:";
        cin >> id;
        cout << "digite o titulo: ";
        cin >> titulo;
        cout << "digite a descrição: ";
        cin >> descricao;
        cout << "digite a data de conclusão: ";
        cin >> data;
        cout << "digite o status da tarefa: ";
        cin >> status;
    return 0;
}