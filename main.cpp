#include <iostream>
#include <string.h>

using namespace std;

typedef struct{
  int ID;
  char nome[20];
  int idade;
  int media;
}alunos;

void addAlunos(alunos aluno[], int &cont, int n){
  char nome[20];
  
  for(int i = 0; i < n; i++){
    aluno[cont].ID = i;
    cout<<"Digite o nome do aluno "<<cont<<endl;
    cin>>nome;
    strcpy(aluno[cont].nome, nome);
    cout<<"Digite a idade: "<<endl;
    cin>> aluno[cont].idade;
    cout<<"Digite a média do aluno"<<endl;
    cin>>aluno[cont].media;
    cout<<"Aluno cadastrado!\n"<<endl;

  cont ++;
  }
}

void consultarAluno(alunos aluno[], int cont){
  int opc;
  while(opc != 3){
  cout<<"Escolha uma opcao:"<<endl;
  cout<<"1. Consultar por ID"<<endl;
  cout<<"2. Exibir todos os alunos"<<endl;
  cout<<"3. Sair"<<endl;
  cin>>opc;

  switch(opc){
      case 1: 
      int id;
      cout<<"Digite o ID que deseja consultar:"<<endl;
      cin>>id;
      cout<<"ID: "<<aluno[id].ID<<" NOME: "<<aluno[id].nome<<" IDADE: "<<aluno[id].idade<<
      " MEDIA: "<< aluno[id].media<<"\n"<<endl;
      break;
      case 2:
        cout<<"ID   NOME    IDADE    MEDIA"<<endl;
      for(int i = 0;i<cont;i++){
           cout<<aluno[i].ID<<"   "<<aluno[i].nome<<"  "<<aluno[i].idade<<
      "      "<< aluno[i].media<<endl;
      }
      break;
      case 3:
      cout<<"Voltando ao menu principal..."<<endl;
      break;
      default:
      cout<<"Opcao invalida, tente novamente..."<<endl;
    }
  }
}

void editarAluno(alunos aluno[]){
  int id, alt;
  int opc;
  char nome[20];
  cout<<"Digite o id do aluno que deseja editar: "<<endl;
  cin>>id;
  cout<<aluno[id].ID<<" "<<aluno[id].nome<<" "<<aluno[id].idade<<" "<<
  " "<<aluno[id].media<<endl;
  cout<<"Escolha uma opcao para alterar:"<<endl;
  cout<<"1. Editar nome"<<endl;
  cout<<"2. Editar idade"<<endl;
  cout<<"3. Editar media"<<endl;
  cout<<"4. Cancelar"<<endl;
  cin>>opc;
  switch(opc){
  case 1:
    cout<<"Escreva o nome corrigido:"<<endl;
    cin>>nome;
    strcpy(aluno[id].nome,nome);
    cout<<"Nome alterado com sucesso!"<<endl;
    break;
  case 2:
    cout<<"Escreva a idade corrigida:"<<endl;
    cin>>alt;
    aluno[id].idade = alt;
    cout<<"Idade alterada com sucesso!"<<endl;
    break;
    case 3:
    cout<<"Escreva a media corrigida:"<<endl;
    cin>>alt;
    aluno[id].media = alt;
    cout<<"Media alterada com sucesso!"<<endl;
    break;
    case 4:
    cout<<"Cancelando..."<<endl;
    return;
    break;
    default:
    cout<<"Opcao invalida, tente novamente..."<<endl;
    break;



  }
}

  int main() {
int n = 0, opc = 0, cont = 0;
alunos aluno[10];

while(opc != 4){

 cout<<endl<<"================="<<endl;
 cout<<"Escolha uma opcao"<<endl;
 cout<<"1. Adicionar aluno"<<endl;
 cout<<"2. Consultar aluno"<<endl;
 cout<<"3. Editar Aluno"<<endl;
 cout<<"4. Sair"<<endl;
 cout<<"================="<<endl;
  cin>>opc;

switch (opc) {
  case 1:
      cout<<"Digite a quantidade de alunos a ser adicionado"<<endl;
        cin>>n;
        addAlunos(aluno, cont, n);
      break;
  case 2:
      cout<<"consulta aluno"<<endl;
        consultarAluno(aluno,cont);
      break;

  case 3:
      cout<<"editando aluno"<<endl;
      editarAluno(aluno);
      break;
  case 4:
      cout<<"saindo...."<<endl;
      return 0;
        break;
  default:
      cout<<"Opcao invalida, tente novamente..."<<endl;
      break;
    }
  }


  return 0;
}
