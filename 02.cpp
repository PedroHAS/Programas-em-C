#include <iostream>
#include <cmath>

int main()
{
	float Tipo=0,Area=0,pf=0,CustoFinal=0;
	std::string nome;
	std::cout<<"Nome do Fazendeiro: ";
	std::cin>>nome;
	std::cout<<"Tipo de Pulverizacao: ";
	std::cin>>Tipo;
	std::cout<<"Area a ser pulverizada: ";
	std::cin>>Area;
	if(Tipo==1 && Area>=300)
	{
		pf=Area*5;
		CustoFinal=pf-(pf*0.05);	
	}
	else
	{
		pf=5*Area;
		CustoFinal=pf;
	}
		if(Tipo==2 && Area>=300)
	{
		pf=Area*10;
		CustoFinal=pf-(pf*0.05);	
	}
	else
	{
		pf=10*Area;
		CustoFinal=pf;
	}
		if(Tipo==3 && Area>=300)
	{
		pf=Area*15;
		CustoFinal=pf-(pf*0.05);	
	}
	else
	{
		pf=15*Area;
		CustoFinal=pf;
	}
		if(Tipo==4 && Area>=300)
	{
		pf=Area*25;
		CustoFinal=pf-(pf*0.05);	
	}
	else
	{
		pf=25*Area;
		CustoFinal=pf;
	}
		if(CustoFinal>=1750)
	{
		CustoFinal=CustoFinal-(CustoFinal*0.10);
	}
 	std::cout<<"O nome do fazendeiro: "<<nome<<"\nO custo final da pulverizacao e: "<<CustoFinal;
 }
