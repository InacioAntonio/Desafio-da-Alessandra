/*#include <iostream>
using namespace std;

int main(){
    int opcao;
    char escolha, escolha2, escolha3, escolha4,escolha5;
     while(opcao!=6){
    cout << "Selecione sua opção :\n";
    cout << "1 - Verificar Classe Eleitoral\n";
    cout << "2 - Calcular f(x)\n";
    cout << "3 - Verificar Situação do aluno\n";
    cout << "4 - Informar o Total da compra\n";
    cout << "5 - Jogo da Velha\n";
    cout <<"6 - Sair\n";
   cin >> opcao;

    switch(opcao) {
    case 1:  int idade1;
      do{ //laço
    cout << "Digite sua idade: "<<endl;
    cin >> idade1;
      if(idade1<16){
        cout << "Não pode votar! "<<endl;
    }else{
          if(idade1>=18 and idade1<65){
             cout << " Eleitor obrigatorio"<<endl; 
          }else{
              if ( idade1>=16 and idade1<18 or idade1>65)
                  cout << "Eleitor Facultativo "<<endl;
              }
            cout << "Deseja Continuar ? s ou n \n";
            cin >> escolha;
          }
      }while(escolha=='s');
        break;
      case 2: int x, fdex;
        do{ // laço
    cout << "Digite o valor de x"<<endl;
    cin >> x;
    if(x<=1){
        cout << " a Função f de x é 1"<<endl;
    } else{
        if(1>x && x<=2){
         cout << " a Função f de x é 2"<<endl;   
        } else{
            if(2<x && x<=3){
                fdex=x*x;
                cout << "A função f de x é: "<<fdex<<endl;
            }else{
                if(x>3){
                  fdex=x*x*x;
                cout << "A funçao f de x é: "<<fdex<<endl;
                } 
            } 
        }
    }
      cout << "Deseja Continuar ? s para Sim e n para Nao\n";
            cin >> escolha2;
        }while(escolha2=='s');
      break;
      case 3: int freq,nota;
        do{
      cout << "Digite sua frequencia em porcetagem: "<<endl;
      cin >> freq;
      cout << "Digite sua nota: "<<endl;
      cin >> nota;
      if(freq<=75 or nota<3){
          cout << "Reprovado!"<<endl;
      }else{
          if(freq>75 and (nota>3) and nota<=7){
              cout << "Exame! "<<endl;
          }else{
              if(freq>75 and nota>7){
                  cout << "Aprovado! "<<endl;
              }
          }
      }
       cout <<  "Deseja Continuar ? s para Sim e n para Nao\n";
         cin >> escolha3;
       }while(escolha3=='s');
      break;
      case 4: float idade,valor,valorF;
    char sexo;
        do{
  cout << "Digite sua idade: "<<endl;
    cin >>  idade;
  cout << "Digite o valor da sua compra: "<<endl;
    cin >> valor;
  cout << "Digite seu Sexo 'm' para mulher ou 'h' para Homem: "<<endl;
    cin >> sexo;
    if(idade>=60 && sexo=='m'){
        valorF=valor-(valor*35/100);
            cout << "\nO valor final da compra sera de: R$"<<valorF;
    } else{
        if(idade>=60){
            valorF=valor-(valor*25/100);
            cout << "\nO valor final da compra sera de: R$ "<<valorF;
        } else{
            if(sexo=='m'){
                valorF=valor-(valor*10/100);
                cout << "\nO valor final da compra sera de: R$ "<<valorF;
            }//else{
                valorF=valor; 
            //}
        }  cout << "\n O valor final da compra sera de: R$ "<<valorF;
    }
          cout << " Deseja continuar s para Sim e n para Não\n";
          cin >> escolha4;
        }while(escolha4=='s'); 
      break;
      case 5: int tabuleiro,jogadorO,jogadorX;
        do{
    cout << "Quantas casas estao ocupadas no  tabuleiro ?\n ";
    cin >> tabuleiro;
    if(tabuleiro<9){
        cout << "Faça sua Proxima Jogada em X ou 0\n";
    } else{
        if(tabuleiro==9){
            cout << "Velha\n";
        } else{
            cout << "Indefinido\n";
            
        }
    }
          cout << "Deseja Continuar ? s para Sim e n para Não\n";
            cin >> escolha5;
        }while(escolha5=='s');
      break;
      case 6: cout << "Sair\n";
      break;
      default:
        cout << "Opcao Invalida\n";
      break;
  } 
    }
}*/
