/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
  	float num1, num2;
	int operacao;
	
		cout << "Para começarmos, digite o número dentre as opções abaixo que corresponda a operação que deseja realizar\n"
		     << "(1) Soma\n"
		  	 << "(2) Subtração\n"
		  	 << "(3) Multiplicação\n"
		 	 << "(4) Divisão\n"
			 << "(5) Potência\n"
		 	 << "(6) Exponencial\n";
		cin  >> operacao;
		
	switch(operacao)
	{
		case 1:
			cout << "Digite o primeiro número: ";
			cin >> num1;
			cout << "Digite o segundo número: ";
			cin >> num2;
			cout << "O resultado da soma é: " << num1 + num2;
			
				break;

		case 2:
			cout << "Digite o primeiro número: ";
			cin >> num1;
			cout << "Digite o segundo número: ";
			cin >> num2;
			cout << "O resultado da subtração é: " << num1 - num2;
			
				break;

		case 3:
			cout << "Digite o primeiro número: ";
			cin >> num1;
			cout << "Digite o segundo número: ";
			cin >> num2;
			cout << "O resultado da multiplicação é: " << num1 * num2;
			
				break;

		case 4:
			cout << "Digite o primeiro número: ";
			cin >> num1;
			cout << "Digite o segundo número: ";
			cin >> num2;
			cout << "O resultado da divisão é: " << num1 / num2;
				break;

		case 5:
			cout << "Perdão! Não sei fazer o cálculo de potência, por isso essa parte do programa ficou incompleta";
			
				break;
				
		case 6:
			cout << "Perdão! Não sei fazer o exponencial, por isso essa parte do programa ficou incompleta";
			
				break;
				
		default:
			cout <<"Operação inválida";
		break;
	}
	return 0;
}