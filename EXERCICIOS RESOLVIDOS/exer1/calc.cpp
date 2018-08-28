#include<iostream>
using namespace std;

class calc{
	private:
		float n1,n2,res;
	public:
		//são metodos 
		void entrada(void);
		void somar(void);
		void imprimir(void);
};

int main()
{
	calc c;
	int op;
	do{
		cout<<"1- Entrada\n"<<endl;
		cout<<"2- Somar\n"<<endl;
		cout<<"3- Imprimir\n"<<endl;
		cout<<"4- Saida\n"<<endl;
		cout<<"Informe a opção desejada...:"<<endl;
		cin>>op;
		switch(op){
			case 1:
				c.entrada();	
			case 2:
				c.somar();
			case 3:
				c.imprimir();				
		}
	}while(op>=1 && op<4);
}
void calc::entrada(void)//
{
	cout<<"Informe n1: ";
	cin>>n1;
	cout<<"Informe n2: ";
	cin>>n2;
}
//Operador de resolucao de escopo 
void calc::somar(void)//
{
	res=n1+n2;
}
void calc::imprimir(void){
	cout<<"A SOMA E: "<<res<<endl;
}

