
// RESTAURANTE

#include<iostream>
#include<cstdlib>

using namespace std;

/*
bool isNumber(const string& str) {
	for (char const &c : str) {
		if (std::isdigit(c) == 0) {
			return false;
		}
	} return true;
	
}
*/

string descuento2(int consumo) {
	string msj = "0% de DESCUENTO | -";
	if (consumo >= 0 && consumo <= 100) {
		return "1" + msj;
		
	} else if (consumo > 100 && consumo <= 200) {
		return "2" + msj;
		
	} else if (consumo > 200) {
		return "3" + msj;
		
	} return "0";
}

float descuento(int consumo) {
	if (consumo >= 0 && consumo <= 100) {
		return consumo*0.1;
		
	} else if (consumo > 100 && consumo <= 200) {
		return consumo*0.2;
		
	} else if (consumo > 200) {
		return consumo*0.3;
		
	} return 0.0;
	
}

float iva(int consumo) { // 12% IVA
	return consumo*0.12;
}

string importe_a_pagar(int consumo, float impuesto, float descuento) {
	int calculo = 0;
	calculo += consumo;
	calculo += static_cast<int>(descuento);
	calculo -= static_cast<int>(impuesto);
	return to_string(calculo);
}


/*
	Metodo main
*/
int main() {
	string rta;
	cout<<"Bienvenido a la app del Restaurante!";
	cout<<"\n- - - - - - - - - - - - - - - - - - -\n";
	cout<<"\nIntroduce el consumo en $ ...";
	cout<<"\n>> "; 
	cin>> rta;
	
	
	
	// CODIGO
	int rta2 = atoi(rta.c_str());

	float descuento_a = descuento(rta2);
	string descuento2_a = descuento2(rta2);
	float impuesto_a = iva(rta2);


	cout<<"DESCUENTO: " + descuento2_a + to_string(descuento_a);
	cout<<"\nIMPUESTO: 12% IVA | +" + to_string(impuesto_a);
	cout<<"\nIMPORTE A PAGAR: " + importe_a_pagar(rta2, descuento_a, impuesto_a)<<endl;
		
	
	return 0;
}
