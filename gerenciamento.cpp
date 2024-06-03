//definindo a biblioteca
#include <iostream> 

//simplificando o uso dos codigos que usam std
using namespace std;

//definindo variaveis globais 
    int tarefaAtual=0;
    int id[100]; 
    string titulo[100]; 
    string descricao[100]; 
    string data[100];
    string status[100];

//criando a função responsavel para adicionar tarefas
void addtarefas() { 
//definindo as variaveis da função
        string tituloA; 
        string descricaoA; 
        string dataA;
        string statusA;

//dando funcionalidade para as variaveis 
        cout << "digite o titulo: ";
        cin >> tituloA;
        cout << "digite a descrição: ";
        cin >> descricaoA;
        cout << "digite a data de conclusão: ";
        cin >> dataA;
        cout << "digite o status da tarefa(pendente, desenvolvendo, concluido)  ";
        cin >> statusA;
 
id[tarefaAtual] = tarefaAtual + 1;
titulo[tarefaAtual] = tituloA;
descricao[tarefaAtual] = descricaoA; 
data[tarefaAtual] = dataA;
status[tarefaAtual] = statusA; 

tarefaAtual++;
}

//criando a função para visualizar as tarefas 
void visTarefas() {
//comparando se o i é diferente de tarefaAtual 
    for ( int i = 0; i != tarefaAtual; i++)
    {
//fazendo uma condição para o loop rodar enquanto for diferene de 150 
        if (id[i] != 150)
        {
//imprimindo as linhas se as condições for verdadeiro
    cout << "id: " << id[i] << endl << "titulo: " << titulo[i] << endl << "descricao: " << descricao [i] << endl << "data: " << data [i] << endl << "status: " << status[i] << endl;
//separador de linhas
    cout << "=========================================================================================================================================================" << endl; 
        }
        


    }
    
} 

//criando uma função para editar
void edit() {
//solicitando ao usuario a tarafe que ele quer editar
    int idEdit;
    cout << "coloque o id da tarefa que deseja editar: " << endl; 
    cin >> idEdit;

//diminuindo o id solocitado pelo usuario para bater com o array que armazena o id para o sistema
    idEdit=idEdit -1;
//definindo variaveis strings para a função 
      string tituloA; 
        string descricaoA; 
        string dataA;
        string statusA;

//imprimindo as variaveis digitadas pelo usuario 
        cout << "digite o titulo: ";
        cin >> tituloA;
        cout << "digite a descrição: ";
        cin >> descricaoA;
        cout << "digite a data de conclusão: ";
        cin >> dataA;
        cout << "digite o status da tarefa: ";
        cin >> statusA;

id[idEdit] = idEdit;
titulo[idEdit] = tituloA;
descricao[idEdit] = descricaoA; 
data[idEdit] = dataA;
status[idEdit] = statusA; 

}

//criando uma função para remover as tarefas do programa
void remov(){
//solicitando ao usuario que digite o id da terefa
    int idRemov;
    cout << "escolha a tarefa colocando o id para remover. " << endl;
    cin >>  idRemov;

//diminuindo o valor digitado pelo usuario para bater com o array do sistema 
    idRemov = idRemov -1;
//definindo o valor 150 para deletar a tarefa 
    id[idRemov] = 150;  


}

//criando uma função para buscar tarefa pelo nome do titulo
void buscTarefa() {
//imprimindo o titulo da tarefa desejada
    string busca;
   cout << "qual o nome do titulo da tarefa desejada? ";
    cin  >> busca;  
 //comparando se i é diferente de tarefaAtual   
    for (int i = 0; i != tarefaAtual; i++)
    {
    //comparando se o titulo é igual alguma tarefa dentro do sistema
       if (busca.compare(titulo[i]) == 0) {
        cout << "id: " << id[i] << endl << "titulo: " << titulo[i] << endl << "descricao: " << descricao [i] << endl << "data: " << data [i] << endl << "status: " << status[i] << endl;
    }

    } 
}

//criando um filtro para selecionar tarefas conforme os seus status
void filt() {

//solicitando os status da tarefa
        int stats;
    cout << "qual o status desejado?  " << endl;
    cout << "1: pendente. " << endl;
    cout << "2: desenvolvendo" << endl;
    cout << "3: concluido. "<< endl;
    cin  >> stats;  

//definindo que se a solicitação for igual a 1, só as tarefas com status pendente seja aparente
    if (stats == 1)
    {
//definindo uma variavel para atribuir ao loop
        string st = "pendente";

//comparando se i é diferente de tarefaAtual   
         for (int i = 0; i != tarefaAtual; i++)
    {
//comparando se o filtro é igual a pendente
       if (st.compare(status[i]) == 0) {
        cout << "id: " << id[i] << endl << "titulo: " << titulo[i] << endl << "descricao: " << descricao [i] << endl << "data: " << data [i] << endl << "status: " << status[i] << endl;
    }

    } 
//definindo que se a solicitação for igual a 2, só as tarefas com status desenvolvendo seja aparente
    } else if (stats == 2)
    {
//definindo uma variavel para atribuir ao loop
       string st = "desenvolvendo"; 
//comparando se i é diferente de tarefaAtual   
          for (int i = 0; i != tarefaAtual; i++)
    {
//comparando se o filtro é igual a desenvolvendo
       if (st.compare(status[i]) == 0) {
        cout << "id: " << id[i] << endl << "titulo: " << titulo[i] << endl << "descricao: " << descricao [i] << endl << "data: " << data [i] << endl << "status: " << status[i] << endl;
    }

    } 

//definindo que se a solicitação for igual a 3, só as tarefas com status concluido seja aparente
    } else if (stats == 3)
    {
//definindo uma variavel para atribuir ao loop
        string st = "concluido";
//comparando se i é diferente de tarefaAtual   
           for (int i = 0; i != tarefaAtual; i++)
    {
//comparando se o filtro é igual a concluido
       if (st.compare(status[i]) == 0) {
        cout << "id: " << id[i] << endl << "titulo: " << titulo[i] << endl << "descricao: " << descricao [i] << endl << "data: " << data [i] << endl << "status: " << status[i] << endl;
    }

    } 


    }
    
    
}

int main() {

//definindo a variavel para montar o loop
int val = 0;
//criando o loop para o sistema rodar até o usuario desejar
    while (val != 1)
    {
//definir a variavel para executar cada função do programa
    int opcao;

// imprimir as solicitações para o usuario  
   cout << "1.adicionar tarefas " << endl; 
   cout << "2.Visualizar Tarefas "<< endl;
   cout << "3. Editar Tarefa"<< endl;
   cout << "4. Remover Tarefa " << endl; 
   cout << "5. Buscar Tarefa "<< endl;
   cout << "6. Filtrar Tarefas por Status"<< endl;
   cout << "0. sair"<< endl; 
   cout << "escolha uma opcao" << endl;
   cin >> opcao;
   cout << "===========================================================================================================================" << endl;

//configurando a opção para chamar a função no menu
    if (opcao == 1) {
//atribuindo a função para a opção desejada
    addtarefas();
//configurando a opção para chamar a função no menu
    } else if (opcao == 2)
    {
//atribuindo a função para a opção desejada
        visTarefas();
//configurando a opção para chamar a função no menu
    } else if (opcao == 3)
    {
//atribuindo a função para a opção desejada
    edit();
//configurando a opção para chamar a função no menu
    } else if (opcao == 4)
    {
//atribuindo a função para a opção desejada
       remov();
//configurando a opção para chamar a função no menu
    } else if (opcao == 5)
    {
//atribuindo a função para a opção desejada
        buscTarefa();
//configurando a opção para chamar a função no menu
    } else if (opcao == 6) {
//atribuindo a função para a opção desejada
        filt(); 

    } else if (opcao == 0){
        val++;
//criando uma opção de erro 
    } else {
//imprimindo erro 
        cout << "erro" << endl; 
    }
    
      
    }   

    return 0;
}