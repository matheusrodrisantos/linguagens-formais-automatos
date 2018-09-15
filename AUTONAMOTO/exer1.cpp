#include <iostream>
using namespace std;

int main(){
	
	//strlen
	/* 
		para pegar o ultimo valor de um vetor 
		for(i=0;i<strlen(entrada);i++)
		{
		
		}	
		pra chagar no q3 ele precisa pelo menos a ou b 2 x seguidas 

		compare string c++ 
		string str1="unisal" 
		string str2="lorena"
		if(str1.compare(str2)==0){
			cout<<"são iguais";
		}
		else
		{
			cout<<"Não  são iguais";
		}
	*/
	string entrada,estado;
	int i=0, q1=0,q2=0; 
	
	
	entrada="aa0";
	
	
	
	while(entrada[i]!='0')
	{	
		if(i==0)
		{
			if(entrada[i]=='b')
			{
				estado="q2";
				q2++;
				cout<<"estado "<<estado<<endl;
			}
			if(entrada[i]=='a')
			{
				estado="q1";
				q1++;
				cout<<"estado "<<estado<<endl;
			}
		}
		else
		{
			if(q2>1 or q1 >1)
			{
				estado="q3";
				cout<<"estado "<<estado<<endl; 
			}
			else
			{
					if(estado.compare("q2")==0 and entrada[i]=='a')
					{
						//ele vai para o q1 
						q1++;
						estado="q1";
						cout<<"estado "<<estado<<endl;
					}
					
					
							if(estado.compare("q2")==0 and entrada[i]=='b')
							{
								//ele vai para o q2 
								q2++;
								if(q2>1){
									continue;
								}
								else{
									cout<<"estado "<<estado<<endl;
								}
								
							}
					
					
					if(estado.compare("q1")==0 and entrada[i]=='b')
					{
						
						
						q2++;
						estado="q2";
						cout<<"estado: "<<estado<<endl;
					}
						

							if(estado.compare("q1")==0 and entrada[i]=='a')
							{
								//ele vai para o q1 
								q1++;
								if(q1>1){
									continue;
								}
								else{
									cout<<"estado "<<estado<<endl;
								}
								
							}
							
							
							
			}
		}
		i++;
	}		
return 0;
} 
