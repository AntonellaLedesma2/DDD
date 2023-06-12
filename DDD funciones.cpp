#include <iostream>
#include <string>

using namespace std;
string ObternerDDD(int cod);
int main(){
	int cod;
	cout<<"ingrese código de área "<<endl;
	cin>>cod;
	string ObtenerDDD(int cod);
	return 0;
}
string ObternerDDD(int cod){

string msg="NO ENCONTRADO";
if(cod==61){
	msg="Brasilia";
}
if(cod==71){
	msg="Salvador";
}
if(cod==11){
    msg="Sao Paulo";
}
if(cod==21){
	msg="Rio de Janeiro";
}
if(cod==32){
	msg="Juiz de Fora";
}
if(cod==19){
	msg="Campinas";
}
if(cod==27){
	msg="Vitoria";
}
if(cod==31){
    msg="Belo Horizonte";
}
	return msg;
}
