// Four_Color_Theorem.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Elaborado por Helberth Fabricio Cubillo Jarquin - 2021110838 
// 13 de agosto del 2022

#include <iostream>
#include <string>
#include <sstream>
#include <cstring>


#define CANTIDAD_ADYACENTES  7
#define CANTIDAD_ZONAS 11
#define COLOR1 "Azul"
#define COLOR2 "Verde"
#define COLOR3 "Rojo"
#define COLOR4 "Amarillo"
#define	SIN_COLOR ""


using namespace std;

struct info_zona {
	int id_zona;
	string color;
};

info_zona ArrayZonas[CANTIDAD_ZONAS] ={	{1,  SIN_COLOR},
										{2,  SIN_COLOR},
										{3,  SIN_COLOR},
										{4,  SIN_COLOR},
										{5,  SIN_COLOR},
										{6,  SIN_COLOR},
										{7,  SIN_COLOR},
										{8,  SIN_COLOR},
										{9,  SIN_COLOR},
										{10, SIN_COLOR},
										{11, SIN_COLOR}};

int arrayAdyacentes[CANTIDAD_ZONAS][CANTIDAD_ADYACENTES] = {	{2, 3, 4, 5, 9},
																{1, 3, 7, 6, 5},
																{1, 2, 7, 8, 9},
																{1, 9, 5, 10},
																{1, 2, 6, 4, 10},
																{2, 7, 5, 10},
																{2, 3, 6, 8, 10},
																{3, 7, 9 ,10},
																{1, 3, 4, 8, 10},
																{9, 4, 5},
																{8, 7, 6}};

int cantidadDeAdyacentes(int pAdyacentes[CANTIDAD_ZONAS][CANTIDAD_ADYACENTES], int pId)
{
	int contadorAdyacentes = 0, adyacente = 0;
	
	while (pAdyacentes[pId][adyacente] != 0) {
		contadorAdyacentes++;
		adyacente++;
	};
	//cout << contadorAdyacentes << "CANTIDAD DE ADYACENTES" << endl;
	return contadorAdyacentes;

}


int main()
{
	//Variables necesarias para saber el color de los adyacentes ded cada zona del mapa 
	string colorAdyacente1, colorAdyacente2, colorAdyacente3, colorAdyacente4, colorAdyacente5, ColorAdyacente6, colorAdyacente7;

	//Ciclo el cual recorrera el mapa y las sentencias las cuales se encargaran de asignar un color a cada zona respectiva 
	for (int id = 0; id <= CANTIDAD_ZONAS; id++)
	{

		//int numero_adyacentes = cantidadDeAdyacentes(adyacentes,id);

		switch (cantidadDeAdyacentes(arrayAdyacentes, id)) {

		case 3:

			colorAdyacente1 = ArrayZonas[arrayAdyacentes[id][0] - 1].color;
			colorAdyacente2 = ArrayZonas[arrayAdyacentes[id][1] - 1].color;
			colorAdyacente3 = ArrayZonas[arrayAdyacentes[id][2] - 1].color;

			if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR1 && colorAdyacente2 != COLOR1 && colorAdyacente3 != COLOR1)
			{
				ArrayZonas[id].color = COLOR1;
			}

			else if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR2 && colorAdyacente2 != COLOR2 && colorAdyacente3 != COLOR2)
			{
				ArrayZonas[id].color = COLOR2;
			}

			else if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR3 && colorAdyacente2 != COLOR3 && 
				colorAdyacente3 != COLOR3) 
			{
				ArrayZonas[id].color = COLOR3;
			}
			break;

		case 4:

			colorAdyacente1 = ArrayZonas[arrayAdyacentes[id][0] - 1].color;
			colorAdyacente2 = ArrayZonas[arrayAdyacentes[id][1] - 1].color;
			colorAdyacente3 = ArrayZonas[arrayAdyacentes[id][2] - 1].color;
			colorAdyacente4 = ArrayZonas[arrayAdyacentes[id][3] - 1].color;

			if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR1 && colorAdyacente2 != COLOR1 && colorAdyacente3 != COLOR1
				&& colorAdyacente4 != COLOR1) 
			{
				ArrayZonas[id].color = COLOR1;
			}

			else if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR2 && colorAdyacente2 != COLOR2
				&& colorAdyacente3 != COLOR2 && colorAdyacente4 != COLOR2) 
			{
				ArrayZonas[id].color = COLOR2;
			}

			else if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR3 && colorAdyacente2 != COLOR3
				&& colorAdyacente3 != COLOR3 && colorAdyacente4 != COLOR3) 
			{
				ArrayZonas[id].color = COLOR3;
			}

			else if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR4 && colorAdyacente2 != COLOR4
				&& colorAdyacente3 != COLOR4 && colorAdyacente4 != COLOR4)
			{
				ArrayZonas[id].color = COLOR4;
			}
			break;
		case 5:

			colorAdyacente1 = ArrayZonas[arrayAdyacentes[id][0] - 1].color;
			colorAdyacente2 = ArrayZonas[arrayAdyacentes[id][1] - 1].color;
			colorAdyacente3 = ArrayZonas[arrayAdyacentes[id][2] - 1].color;
			colorAdyacente4 = ArrayZonas[arrayAdyacentes[id][3] - 1].color;
			colorAdyacente5 = ArrayZonas[arrayAdyacentes[id][4] - 1].color;

			if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR1 && colorAdyacente2 != COLOR1 && colorAdyacente3 != COLOR1
				&& colorAdyacente4 != COLOR1 && colorAdyacente5 != COLOR1)
			{
				ArrayZonas[id].color = COLOR1;
			}

			else if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR2 && colorAdyacente2 != COLOR2
				&& colorAdyacente3 != COLOR2 && colorAdyacente4 != COLOR2 && colorAdyacente5 != COLOR2)
			{
				ArrayZonas[id].color = COLOR2;
			}

			else if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR3 && colorAdyacente2 != COLOR3
				&& colorAdyacente3 != COLOR3 && colorAdyacente4 != COLOR3 && colorAdyacente5 != COLOR3)
			{
				ArrayZonas[id].color = COLOR3;
			}

			else if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR4 && colorAdyacente2 != COLOR4
				&& colorAdyacente3 != COLOR4 && colorAdyacente4 != COLOR4 && colorAdyacente5 != COLOR4)
			{
				ArrayZonas[id].color = COLOR4;
			}
			break;
		case 6:

			colorAdyacente1 = ArrayZonas[arrayAdyacentes[id][0] - 1].color;
			colorAdyacente2 = ArrayZonas[arrayAdyacentes[id][1] - 1].color;
			colorAdyacente3 = ArrayZonas[arrayAdyacentes[id][2] - 1].color;
			colorAdyacente4 = ArrayZonas[arrayAdyacentes[id][3] - 1].color;
			colorAdyacente5 = ArrayZonas[arrayAdyacentes[id][4] - 1].color;
			ColorAdyacente6 = ArrayZonas[arrayAdyacentes[id][5] - 1].color;

			if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR1 && colorAdyacente2 != COLOR1 && colorAdyacente3 != COLOR1
				&& colorAdyacente4 != COLOR1 && colorAdyacente5 != COLOR1 && ColorAdyacente6 != COLOR1) {
				ArrayZonas[id].color = COLOR1;
			}

			else if(ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR2 && colorAdyacente2 != COLOR2 && colorAdyacente3 != COLOR2
					&& colorAdyacente4 != COLOR2 && colorAdyacente5 != COLOR2 && ColorAdyacente6 != COLOR2) 
			{
				ArrayZonas[id].color = COLOR2;
			}
				
			else if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR3 && colorAdyacente2 != COLOR3
					&& colorAdyacente3 != COLOR3 && colorAdyacente4 != COLOR3 && colorAdyacente5 != COLOR3
					&& ColorAdyacente6 != COLOR3)
			{
				ArrayZonas[id].color = COLOR3;
			}

			else if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR4 && colorAdyacente2 != COLOR4 && colorAdyacente3 != COLOR4
				&& colorAdyacente4 != COLOR4 && colorAdyacente5 != COLOR4 && ColorAdyacente6 != COLOR4) 
			{
				ArrayZonas[id].color = COLOR4;
			}
					
			break;
		case 7:

			colorAdyacente1 = ArrayZonas[arrayAdyacentes[id][0] - 1].color;
			colorAdyacente2 = ArrayZonas[arrayAdyacentes[id][1] - 1].color;
			colorAdyacente3 = ArrayZonas[arrayAdyacentes[id][2] - 1].color;
			colorAdyacente4 = ArrayZonas[arrayAdyacentes[id][3] - 1].color;
			colorAdyacente5 = ArrayZonas[arrayAdyacentes[id][4] - 1].color;
			ColorAdyacente6 = ArrayZonas[arrayAdyacentes[id][5] - 1].color;
			colorAdyacente7 = ArrayZonas[arrayAdyacentes[id][6] - 1].color;

			if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR1 && colorAdyacente2 != COLOR1 && colorAdyacente3 != COLOR1
				&& colorAdyacente4 != COLOR1 && colorAdyacente5 != COLOR1 && ColorAdyacente6 != COLOR1 && colorAdyacente7 != COLOR1) 
			{
				ArrayZonas[id].color = COLOR1;
			}

			else if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR2 && colorAdyacente2 != COLOR2 && colorAdyacente3 != COLOR2
					&& colorAdyacente4 != COLOR2 && colorAdyacente5 != COLOR2 && ColorAdyacente6 != COLOR2 && colorAdyacente7 != COLOR2) 
			{
				ArrayZonas[id].color = COLOR2;
			}

			else if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR3 && colorAdyacente2 != COLOR3
				&& colorAdyacente3 != COLOR3 && colorAdyacente4 != COLOR3 && colorAdyacente5 != COLOR3
				&& ColorAdyacente6 != COLOR3 && colorAdyacente7 != COLOR3)
			{
				ArrayZonas[id].color = COLOR3;
			}

			else if (ArrayZonas[id].color == SIN_COLOR && colorAdyacente1 != COLOR4 && colorAdyacente2 != COLOR4 && colorAdyacente3 != COLOR4
				&& colorAdyacente4 != COLOR4 && colorAdyacente5 != COLOR4 && ColorAdyacente6 != COLOR4 && colorAdyacente7 != COLOR4) 
			{
				ArrayZonas[id].color = COLOR4;
			}
			//En caso de tener 8 mas puntos de adyacencia se crea un caso con por cada punto de adyacencia que se agrege 
			//y se crean nuevas variables del tipo (colorAdyacenteX) y se continia con el patron de else if y sus comparaciones  

			break;
		default:
			break;
		}
	}

	cout << "***************************************" << endl;
	cout << "La cantidad de zonas a generar es de: " << CANTIDAD_ZONAS << endl;
	cout << "GENERANDO MAPA, COLORES, Y ADYACENCIAS..." << endl;
	cout << "MAPA, COLORES, Y ADYACENCIAS GENERADOS EXITOSAMENTE...\n " << endl;
	system("PAUSE");
	cout << "\n***************************************" << endl;
	

	//Impresion del mapa con sus respectiva id, colores y adyacencias.

	cout << "Id, colores y adyacencias del mapa generado\n" << endl;
	for (int numero_zona = 0; numero_zona < CANTIDAD_ZONAS; numero_zona++)
	{
		cout << "***************************************\n" << endl;
		cout << "Identificacion de la zona:" << ArrayZonas[numero_zona].id_zona << endl;
		cout << "Color de la zona:" << ArrayZonas[numero_zona].color << endl;
		cout << "Adyacentes de la zona:" << endl;
		for (int idAdyacente = 0; idAdyacente < cantidadDeAdyacentes(arrayAdyacentes, numero_zona); idAdyacente++)
		{
			cout << arrayAdyacentes[numero_zona][idAdyacente] << endl;
		}
	}
	cout << "\n***************************************\nFIN DEL PROGRAMA\n"
		"Elaborado por Helberth Fabricio Cubillo Jarquin - 2021110838" << endl;
}