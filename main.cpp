#include <iostream>

using namespace std;

class Matriz
{
    //Participantes de nuestra clase 
	public:
        int **m;
        int filas;
        int columnas;

    
	//Aqui creamos nuestra matriz  como se puede observar
	void definir()
    {
        m = new int*[filas];
        for(int i=0;i<filas;i++)
        {
            m[i]= new int[columnas];
        }
    }
	
	//Aqui se van guardando los elementos que el usuario quiere guardar en la matriz
    void agregar()
    {
        for(int i=0;i<filas;i++)
        {
            for(int j=0;j<columnas;j++)
            {
                int elemento;
                cout << "Elemento posicion [" << i << "][" << j << "] --> ";
                cin >> elemento;
                m[i][j] = elemento;
            }
        }
    }

};

class Operaciones
{
    
	//Participantes de nuestra clase 
	public:
        Matriz m1;
        Matriz m2;
        Matriz m3;
	
	//EMPEZAMOS CON LA MAGIA
	
	//FUNCION QUE SUMA LOS ELEMENTOS DE MI MATRIZ
    void sumar()
    {
        for(int i=0;i<m1.filas;i++)
        {
            for(int j=0;j<m1.columnas;j++)
            {
                m3.m[i][j] = m1.m[i][j] + m2.m[i][j];
            }
        }
    }
	
	//FUNCION QUE RESTA LOS ELEMENTOS DE MI MATRIZ
    void restar()
    {
        for(int i=0;i<m1.filas;i++)
        {
            for(int j=0;j<m1.columnas;j++)
            {
                m3.m[i][j] = m1.m[i][j] - m2.m[i][j];
            }
        }
    }

	//FUNCION QUE SACA PROMEDIO DE LAS DOS MATRICES
    void promedio()
    {
        for(int i=0;i<m1.filas;i++)
        {
            for(int j=0;j<m1.columnas;j++)
            {
                m3.m[i][j] = (m1.m[i][j] + m2.m[i][j])/2;
            }
        }
    }

	//FUNCION QUE HALLA EL MAX VALOR ENTRE LAS DOS MATRICES
    void maxElemento()
    {
        for(int i=0;i<m1.filas;i++)
        {
            for(int j=0;j<m1.columnas;j++)
            {
                if(m1.m[i][j] > m2.m[i][j])
                {
                    m3.m[i][j] = m1.m[i][j];
                }
                else
                {
                    m3.m[i][j] = m2.m[i][j];
                }
            }
        }
    }

    //FUNCION QUE HALLA EL MIN VALOR ENTRE LAS DOS MATRICES
	void minElemento()
    {
        for(int i=0;i<m1.filas;i++)
        {
            for(int j=0;j<m1.columnas;j++)
            {
                if(m1.m[i][j] < m2.m[i][j])
                {
                    m3.m[i][j] = m1.m[i][j];
                }
                else
                {
                    m3.m[i][j] = m2.m[i][j];
                }
            }
        }
    }
	
	//MOSTRAMOS EN PANTALLA LOS RESULTADOS
    void imprimir()
    {
        for(int i=0;i<m3.filas;i++)
        {
            for(int j=0;j<m3.columnas;j++)
            {
                cout << m3.m[i][j] << " ";
            }cout << "\n";
        }
    }

};

int main()
{
    int columnas;
    int filas;

    cout << "Dame mi numero de Filas HUMANO --> ";
    cin >> filas;
    cout << "Dame mi numero de Columnas HUMANO --> ";
    cin >> columnas;

    Operaciones op;
    //Primera Matriz
    op.m1.filas=filas;
    op.m1.columnas=columnas;
    op.m1.definir();

    //Segunda Matriz
    op.m2.filas=filas;
    op.m2.columnas=columnas;
    op.m2.definir();

    //Tercera Matriz
    op.m3.filas=filas;
    op.m3.columnas=columnas;
    op.m3.definir();
	
	
	//INGRESANDO VALORES DE LA MATRIZ 1
    cout << "< Dame mis valores de la Primera Mat HUMANO > \n";
    op.m1.agregar();

	//INGRESANDO VALORES DE LA MATRIZ 2
    cout << "< Dame mis valores de la Segunda Mat HUMANO > \n";
    op.m2.agregar();

	//HACIENDO LAS OPERACIONES Y MOSTRANDOLAS EN PANTALLA
    cout << "HUMANO aqui tienes tu SUMA\n";
    op.sumar();
    op.imprimir();

    cout << "HUMANO aqui tienes tu RESTA\n";
    op.restar();
    op.imprimir();

    cout << "HUMANO aqui tienes tu PROMEDIO\n";
    op.promedio();
    op.imprimir();

    cout << "HUMANO aqui tienes tu MAYOR\n";
    op.maxElemento();
    op.imprimir();

    cout << "HUMANO aqui tienes tu MENOR\n";
    op.minElemento();
    op.imprimir();

    return 0;
}
