/* 1 escreva em linguagem C++ um programa 
capaz de analizar expressões, e dar o resultado dela. 
Ex: (2+3)*(8/4)/(4-2)
Qualquer expressão  
*/
#include <iostream>
using namespace std;
class expressao{
	private: 
		string expressao;
	public: 
		void codigoferrenho();
		int *ponteiro= NULL;
		float soma();
		float subtracao();
		float multiplicacao();
		float divisao();
		void retornaLista();
};
int main(){
	
	expressao e;
	e.codigoferrenho();
	
}
void expressao::codigoferrenho(void){
	
	cout<<"Entre com a expressao\n"<<endl;
	cin>>expressao;
	cout<<"expressao:"<<expressao[0]<<endl;
	cout<<"Depois de receber vazio :"<<expressao.length()<<endl;
	int tamanhoExpressao=expressao.length();
	string listaTemp=expressao;
}	

void retornaLista(void){
		
}

