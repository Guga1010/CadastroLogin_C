#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	string nomecad, senhacad, nomelog, senhalog;
	char op;
	
	cout << "Programa de cadastro e login\n\n";
	
	opcoes:
	
	cout << "1 - Fazer cadastro\n2 - Fazer login\nEscolha uma opcao: ";
	cin >> op;
	
	system("cls");
	
	switch(op){
		
		case '1':
			registrar:
			cout << "Cadastro\n";
			cout << "Digite um nome: ";
			cin >> nomecad;
			cout << "Digite uma senha: ";
			cin >> senhacad;
			cout << "Registrado!\n\n";
			system("cls");
			
		case '2':
			login:
			cout << "Login\n";
			cout << "Digite seu nome: ";
			cin >> nomelog;
			cout << "Digite a senha: ";
			cin >> senhalog;
			
			system("cls");
			
			if(nomelog != nomecad){
				cout << "Login inexistente ou incorreto!\n\n";
				
				cout << "1 - Tentar novamente\n2 - Registrar\nEscolha uma opcao: ";
				cin  >> op;
				
				switch(op){
					case '1':
						goto login;
					case '2':
						goto registrar;
					default:
						cout << "Opcao invalida!\n\n";
						goto opcoes;	
				}
			}
			else if(nomelog == nomecad && senhalog != senhacad){
				while(senhalog != senhacad){
					cout << "Senha incorreta!\n\n";
					cout << "Digite a senha novamente: ";
					cin >> senhalog;
					system("cls");
				}
				cout << "Login feito!";
			}
			else if(nomelog == nomecad && senhalog == senhacad){
				cout << "Login feito!";
			}
			
			break;
			
		default:
			cout << "Opcao invalida!\n\n";
			goto opcoes;
	}
	
	cout << endl;
	system("pause");
	return 0;
}
