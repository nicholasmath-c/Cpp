#include <iostream>
#include <locale.h>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese"); // Correção da codificação de caracteres para o português

int input;

//INÍCIO 
do{
cout << "Digite 1 para iniciar..." << endl;
cin >> input;
}while(input != 1);

//IMPRESSÃO DOS NÚMEROS
for(int i = 200; i >= 100; i--){
	cout << i << endl;
}

}
