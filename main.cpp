#include <iostream>
#include <string>

//Hecho Por Gabriel Vargas Monroy

using namespace std;
/* run this program using the console pauser or add your own getch,
system("pause") or input loop */

struct Datos
{
    string nombre;
    string carrera;
    int edad;
    string hobby;
    int signom, sigcarr, sigedad, sighob;
};

struct Cabecera
{
    string atrib;
    int pos;
};

int main()
{
    //inicializacion
    Cabecera C[9];
    Datos Est[11];

    C[0].atrib = "Nombre";
    C[1].atrib = "Carrera Electronica";
    C[2].atrib = "Carrera Industrial";
    C[3].atrib = "Carrera Sistemas";
    C[4].atrib = "Edad";
    C[5].atrib = "Hobby Danza";
    C[6].atrib = "Hobby Natacion";
    C[7].atrib = "Hobby Baloncesto";
    C[8].atrib = "Hobby Beisbol";

    for (int i=0;i<9;i++)
    {
        C[i].pos=0;
    }

    for (int i=1;i<11;i++)
    {
        cout<<"-----------------------------"<<endl;
        cout<<"Ingreso de datos en iteracion "<<i<<endl;
        cout<<"-----------------------------"<<endl;

        cout<<"Ingrese nombre: ";
        cin>>Est[i].nombre;

        cout<<"Ingrese Carrera: ";
        cin>>Est[i].carrera;

        cout<<"Ingrese Edad: ";
        cin>>Est[i].edad;

        cout<<"Ingrese Hobby: ";
        cin>>Est[i].hobby;

        Est[i].sigcarr=0;
        Est[i].sigedad=0;
        Est[i].sighob=0;
        Est[i].signom=0;
    }
    //fininicializacion

    for (int i=1;i<11;i++)
    {
	//En el caso que sea el primero
        if (C[0].pos==0)
        {
	    //Poniendo el nombre
            C[0].pos=i;

	    //Poniendo la carrera
	    if (Est[i].carrera == "electronica")
	    {
		C[1].pos=i;
	    }
	    else if (Est[i].carrera == "sistemas")
	    {
		C[3].pos=i;
	    }
	    else if (Est[i].carrera == "industrial")
	    {
		C[2].pos=i;
	    }

	    //poniendo edad
	    C[4].pos=i;

	    //Poniendo Hobby
	    if (Est[i].hobby == "danza")
	    {
		C[5].pos=i;
	    }
	    else if (Est[i].hobby == "natacion")
	    {
		C[6].pos=i;
	    }
	    else if (Est[i].hobby == "baloncesto")
	    {
		C[7].pos=i;
	    }
	    else if (Est[i].hobby == "beisbol")
	    {
		C[8].pos=i;
	    }
        }
        else
        {
	    //Para el Nombre
	    bool bandera=true;
	    int lineaact=C[0].pos;
	    int lineaant=0;
	    while (bandera)
	    {
		if (Est[i].nombre < Est[lineaact].nombre)
		{
		    if (lineaant==0)
		    {
			C[0].pos=i;
			Est[i].signom=lineaact;
			bandera=false;
		    }
		    else
		    {
			Est[lineaant].signom=i;
			Est[i].signom=lineaact;
			bandera=false;
		    }
		}
		else
		{
		    lineaant=lineaact;
		    lineaact=Est[lineaact].signom;
		}
	    }
	    //fin nombre

	    //Para Carrera
	    if (Est[i].carrera == "electronica")
	    {
		lineaact=C[1].pos;
		lineaant=C[1].pos;
	    }
	    else if (Est[i].carrera == "sistemas")
	    {
		lineaact=C[3].pos;
		lineaant=C[3].pos;
	    }
	    else if (Est[i].carrera == "industrial")
	    {
		lineaact=C[2].pos;
		lineaant=C[2].pos;
	    }


	    if (lineaact != 0)
	    {
		bandera=true;
		if (Est[lineaact].sigcarr == 0)
		{
		    Est[lineaact].sigcarr=i;
		}
		else
		{
		    lineaact=Est[lineaact].sigcarr;
		    while(lineaact != 0)
		    {
			lineaant=lineaact;
			lineaact=Est[lineaact].sigcarr;
		    }
		    Est[lineaant].sigcarr=i;
		}
	    }
	    else
	    {
		if (Est[i].carrera == "electronica")
		{
		    C[1].pos=i;
		}
		else if (Est[i].carrera == "sistemas")
		{
		    C[3].pos=i;
		}
		else if (Est[i].carrera == "industrial")
		{
		    C[2].pos=i;
		}
	    }
	    //fin carrera

	    //Para edad
	    bandera=true;
	    lineaact=C[4].pos;
	    lineaant=0;
	    while (bandera)
	    {
	        if (lineaant == 0)
	        {
	                if (Est[i].edad > Est[lineaact].edad)
	                {
                                C[4].pos=i;
                                Est[i].sigedad=lineaact;
                                bandera=false;
	                }
	                else
	                {
	                        if (Est[lineaact].sigedad == 0)
	                        {
	                                Est[lineaact].sigedad=i;
	                                bandera=false;
	                        }
	                }
	        }
	        else
	        {
	                if (Est[i].edad > Est[lineaact].edad)
	                {
	                        Est[lineaant].sigedad=i;
	                        Est[i].sigedad=lineaact;
	                        bandera=false;

	                }
	                else
	                {
	                	if (Est[lineaact].sigedad == 0)
	                        {
	                                Est[lineaact].sigedad=i;
	                                bandera=false;
	                        }
	                }
	        }

	        lineaant=lineaact;
	        lineaact=Est[lineaact].sigedad;
	    }
	    //fin edad

	    //Para Hobby
	    if (Est[i].hobby == "danza")
	    {
		lineaact=C[5].pos;
		lineaant=C[5].pos;
	    }
	    else if (Est[i].hobby == "natacion")
	    {
		lineaact=C[6].pos;
		lineaant=C[6].pos;
	    }
	    else if (Est[i].hobby == "baloncesto")
	    {
		lineaact=C[7].pos;
		lineaant=C[7].pos;
	    }
	    else if (Est[i].hobby == "beisbol")
	    {
		lineaact=C[8].pos;
		lineaant=C[8].pos;
	    }


	    if (lineaact != 0)
	    {
		bandera=true;
		if (Est[lineaact].sighob == 0)
		{
		    Est[lineaact].sighob=i;
		}
		else
		{
		    lineaact=Est[lineaact].sighob;
		    while(lineaact != 0)
		    {
			lineaant=lineaact;
			lineaact=Est[lineaact].sighob;
		    }
		    Est[lineaant].sighob=i;
		}
	    }
	    else
	    {
	    	if (Est[i].hobby == "danza")
	    	{
	    		C[5].pos=i;
		}
		else if (Est[i].hobby == "natacion")
		{
			C[6].pos=i;
		}
		else if (Est[i].hobby == "baloncesto")
		{
			C[7].pos=i;
		}
		else if (Est[i].hobby == "beisbol")
		{
			C[8].pos=i;
		}
	    }
	    //fin hobby
        }
    }

    //Impresion de los datos
    cout<<"--------------------"<<endl;
    cout<<"nombre | carrera | edad | hobby | signom | sigcar | sigedad | sighobby"<<endl;
    cout<<"--------------------"<<endl;
    for (int i=1;i<11;i++)
    {
	cout<<Est[i].nombre<<" | "<<Est[i].carrera<<" | "<<Est[i].edad<<" | "<<Est[i].hobby<<" | "<<Est[i].signom<<" | "<<Est[i].sigcarr<<" | "<<Est[i].sigedad<<" | "<<Est[i].sighob<<endl;
    }

    cout<<"-----------------------------"<<endl;
    for (int i=0;i<9;i++)
    {
	cout<<C[i].atrib<<": "<<C[i].pos<<endl;
    }

    system ("pause");
    return 0;
}
