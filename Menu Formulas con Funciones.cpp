/*	=======================================================================
--	Menu Formulas Mate discreta <Author,LV>
--  Fecha de creacion <Create DAte,,> '2019-09-14'
--  Fecha de Modificacion <Create DAte,,> '2019-10-29', Agregar Funciones
-- 	Descripcion: contiene varias formula utilizadas en Matematica discreta
	=======================================================================
*/
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

void PrintMath();
void pascal();
void producto (int A[], int B[], int tanA, int tanB);
void proCartesiano();
void Factorial();
void Euclides();
void esPrimo1 (unsigned numr, unsigned divisor1,unsigned primo1);
void FunCr();
void FunPr();
void CcRepeticion();
void Mult();
void Adicion();
void FRpp();
void MaximoCD();
void FactPrimos();
void nElevar();
void ntnt();
void PRn1n2();
void AlgDiv();
//	==========================================
// 	Variables Globales
unsigned long long fact  (int);
unsigned divisor1 = 2, numr, primo1 = 0, p;
int num, menu,salir,x,y, npe,rpe,resultadope = 0;
int numeropsr, contadorpsr, rpsr, tpsr, resultadopsr = 1, totpsr = 1, finpsr = 0;
int nCr, rnC, resultnCr, nPr, rPr, nccr, rccr, combinacioncr, numero2, residuo2, mcd2,i2, n3;
int n, n1, n2, multiplicacion, suma, dividendoadd, divisoradd, cocienteadd, restoadd, algoritmoadd;
//	===============
//	Inicia Programa
//	===============
main()
{
    while(menu !=17){
	PrintMath();
    cin >> menu;
        switch(menu)
        {
        case 1:
            pascal();
        break;

        case 2:
            proCartesiano();
        break;

        case 3:
            Euclides();
        break;
        
        case 4:
            Factorial();
        break;
        
        case 5:
		    Mult();
        break;
        
        case 6:
      		Adicion();
        break;
        
        case 7:
			FRpp();
        break;
        
        case 8:
            MaximoCD();
        break;
        
        case 9:
        	FactPrimos();
		break;
		
		case 10:
			FunCr();
        break;
        
        case 11:
			FunPr();
        break;
		
		case 12:
			nElevar();
        break;
        
        case 13:
			ntnt();
        break;
        
        case 14:
			PRn1n2();
        break;
		
		case 15:
			AlgDiv();
        break;
        
        case 16:
			CcRepeticion();
        break;

        case 17:
            system("cls");
            cout<<"Confirme si desea Salir ?" <<endl;
            cout<<"1. Si "<<endl;
            cout<<"2. No "<<endl;
            cin>>salir;
            if(salir = 1)
            {
                return 0;
            }
            else
            {
                return main();
            }
            system("pause");
            system("cls");
        break;
        }
    }
}

//	-------------------------------------------------------------------------------------------------------
//	Funciones

//	=============================================
//	Funcion Triangulo de Pascal
int factorial (int n){
    int resultado = 1;
    for (int contador = 1; contador <= n; contador++)

        resultado *= contador;
    return resultado;
}
    int combinacion (int n, int k){
    return (factorial(n))/(factorial(k)*factorial (n-k));
    }
            
void pascal(){
    system("cls");
	system("color 09");
	cout << "Ingrese Numero de Niveles: " <<endl;
	cin >> n;
	for (int contador=0; contador<=n; contador++){
    cout <<" Fila  " << contador << ":  ";
	for (int fila=0; fila<=contador; fila++){
    cout << combinacion(contador,fila) << " " ;
    }
        cout << endl;
        }
	system("pause");
    system("cls");
}            

//	=============================================
//	Funcion para producto cartesiano de conjuntos	
void producto (int A[], int B[], int tanA, int tanB){
	int pi = 0, pj = 0;
	for (pi = 0; pj < tanA; pi++){
		for (pj = 0; pj < tanB; pj++){
			printf("{x_ %d y: %d\n}", A[pi], B[pj]);
			system("pause");
		}
	}
}

void proCartesiano(){
    system("cls");
    system("color f2");
	int A[]={1,2,3};
	int B[]={2,3,4,5,6};
	int tanA=sizeof (A)/sizeof(int);
	int tanB=sizeof (B)/sizeof(int);
	
	producto(A, B, tanA, tanB);
	system("pause");
    system("cls");
}		
//	=============================================
//	Funcion Factorial de un Numero
unsigned long long fact(int num)

	{
	int fac;
	if(num==0)
	return 1;
	else
	return num*fact(num-1);
}
void Factorial(){
    system("cls");
    system("color f3");
	cout<<"introduzca un numero       ";
	cin>>num;
	cout<<"factorial: " <<fact(num) <<endl;	
	system("pause");
    system("cls");
}
//	=============================================
// 	Funcion para Algoritmo de Euclides
int mcd(int x , int y){
  	int t;
  	x = (x < 0) ? -x:x;
  	y = (y < 0) ? -y:y;
  	t = (x < y) ? x : y;
  	while ( (x % t) || (y % t))
    	--t;
  	return t;
}
	int euc(int x,int y){
  	return (!y) ? x : euc(y,x%y);
}
//--------------
void Euclides(){
    system("cls");
    system("color f5");
	std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y ;
    std::cout << "MCD: " << mcd(x,y) << endl;
    std::cout << "MCD (euclides): " << euc(x,y) << endl;
    system("pause");
    system("cls");
}
//	=============================================
//	funcion Multiplicacion
void Mult(){
    system("cls");
    system("color f1");
	cout << "Ingrese el primer numero"<<endl;
	cin >> n1;
	cout << "Ingrese el segundo numero"<<endl;
	cin >> n2;
	multiplicacion = n1 * n2;
	cout << "el resultado es\n"<<multiplicacion<<endl;
	system("pause");
    system("cls");
}
//	=============================================
//	funcion Suma 
void Adicion(){
    system("cls");
    system("color f2");
	cout << "Ingrese Primer numero"<<endl;
	cin >> n1;
	cout << "Ingrese Segundo numero"<<endl;
    cin >> n2;
    suma = n1 + n2;
    cout<<"el resultado es\n "<<suma<<endl;
    system("pause");
    system("cls");
}
//	=============================================
//	7. Funcion Recursiva para numeros primos 
bool numeroPrimoRecursivo( int numero, int c){
	if (numero % c == 0 && numero !=1)
		return false;
	else if (c > numero/2)
		return true;
		else
			return numeroPrimoRecursivo( numero, c+1 );
			}
			
void FRpp (){
    system("cls");
    system("color f3");
	cout << "Ingrese el número para saber si es Primo: ";
	cin >> num;
	
	if ( numeroPrimoRecursivo (num, 1))
		cout << "El numero ingresado Es Primo";
	else
		cout <<"El numero ingresado No Es Primo";
	system("pause");
    system("cls");
}
//	=============================================       
//	Funcion Maximo Comun Divisior
void MaximoCD(){
	system("cls");
	printf("Ingrese la cantidad de numeros: ");
	scanf("%d", &n3);
		 
	for (i2 = 1; i2 <= n3; i2++) {
	printf("Numero %d: ", i2);
	scanf("%d", &numero2);
		 
	if (i2 == 1) {
	mcd2 = numero2;
		 
	} else {
	do {
		residuo2 = mcd2 % numero2;
		mcd2 = numero2;
		numero2 = residuo2;
		} while (residuo2 != 0);
	 }
	}	 
	printf("\nEl mcd es: %d\n", mcd2);
	system("pause");
    system("cls");
}
//	=============================================
//	Funcion Representar numero en Factores Primos
void FactPrimos(){
    system("cls");
	cout << "Ingrese un número Entero: "<<endl;
	cin >> num;
	int factor = 2;
	while (factor <= sqrt (num))
	{
	if (num%factor == 0) 
	{
	cout << factor<< " * ";
	num = num  /factor;
	continue;
	}
	if (factor ==2) factor++;
	else factor+=2;	
	}
	cout<<num<<endl;
	}
//	=============================================
//	funcion para formula nCr
int factorialnCr(int nCr)
{
	int inCr;
	for(inCr = nCr-1; inCr > 1; inCr--)
		nCr *= inCr;
 
	return nCr;
}
//	=============================================
// 	Funcion Posibles Combinaciones
void FunCr(){
    system("cls");
	cout<<"Programa para encontrar la combinacion utilizando la formula: " <<endl;
			cout<<" ___n!___" <<endl;
			cout<<" r! (n-r)!" <<endl;
			
			cout<<"Ingrese un valor para n: ";
			cin>>nCr;
			cout<<"\tIngrese un valor para r: ";
			cin>>rnC;
		
			resultnCr = factorialnCr(nCr)/(factorialnCr(rnC)*factorialnCr(nCr-rnC));
		 
			cout<<"\nLas posibles conbinaciones son: "<<resultnCr <<endl;
	system("pause");
    system("cls");
}

//	=============================================
//	Funcion para formula nPr
int factPr(int nPr) 
{ 
    if (nPr <= 1) 
        return 1; 
    return nPr*factPr(nPr-1); 
} 
int fnPr(int nPr, int rPr) 
{ 
    return factPr(nPr)/factPr(nPr-rPr); 
} 

void FunPr(){
    system("cls"); 
	printf("Enter n: "); 
	scanf("%d", &nPr); 
		  
	printf("Enter r: "); 
	scanf("%d", &rPr); 
		  
	printf("%dP%d is %d", nPr, rPr, fnPr(nPr, rPr)); 
	system("pause");
    system("cls");
}
//	=============================================
// 	Funcion Potencia de n elevado a la r
void nElevar(){
    system("cls");
	cout << "Ingrese el valor de n :"<<endl;
	cin >> npe;
	cout << "Ingrese el valor de r :"<<endl;
	cin >> rpe;
	resultadope=(pow(npe,rpe));
	cout<<"el resultado es :"<<endl<<resultadope;
	system("pause");
    system("cls");
}
//	=============================================
//	Funcion Combinacion con repetecion
void CcRepeticion(){
    system("cls");
	cout << " Combinaciones con Repeticion" <<endl;
			cout << " (n + r - 1)!" <<endl;
			cout << " ____________ " <<endl;
			cout << "  r! (n - 1)!" <<endl <<endl;
			cout << "Ingrese n = ";
			cin >>nccr;
			cout << "Ingrese r = ";
			cin >>rccr;
			
			combinacioncr = (factorial(nccr + rccr - 1))/((factorial (rccr))*factorial(nccr-1));
			
			cout<< "Las distintas formas de combinar son: "<<combinacioncr <<endl;
	system("pause");
    system("cls");
}
//	=============================================
// 13 Funcion Programa para encontrar Permutacion
void ntnt(){
    system("cls");
			int nnr,cantnr,fnnr,nxnr,fnxnr,divinr;
			cout<<"A continuacion se presentara la resolucion de la formula: n! / n!1*n!2...n!x."<<endl<<endl;
			cout<<"Ingresa el valor de n: ";
			cin>>nnr;
			cout<<endl<<endl;
			
			cout<<"Ingresa la cantidad de valores de n (n1,n2...nx): ";	
			cin>>cantnr;
			cout<<endl<<endl;
			
			for (int inr=1; inr<=nnr; inr++)										
			{
				fnnr=fnnr*inr;
			}
			
			for ( int contnr=1; contnr<=cantnr; contnr++)							
			{
				cout<<endl<<"Ingresa el "<<contnr<<" valor de -nx-: ";
				cin>>nxnr;
				cout<<endl;
				
				for (int xnr=1; xnr<=nxnr; xnr++)									
				{
					fnxnr=fnxnr*xnr;
				}
				
				divinr=fnnr/fnxnr;
				
			}
			
			cout<<"El factorial de n es: "<<fnnr<<" y el producto de los valores facoriales"<<endl<<"(n!1*n!2...*n!x) es: "<<fnxnr<<endl<<endl;
			cout<<"El resltado final es: "<<divinr<<" Existen opciones diferentes para este problema."<<endl;
	system("pause");
    system("cls");
}
//	=============================================
//	12 Funcion n elevado a la r \n
void PRn1n2(){
    system("cls");
	cout << "ingrese un numero para N!"<<endl;
			cin >>numeropsr;
			cout << "ingrese las cantidad de repeticiones:"<<endl;
			cin>>rpsr;
		
			for (contadorpsr=1; contadorpsr<=numeropsr ; contadorpsr++)
			{
			resultadopsr=resultadopsr*contadorpsr;
			}
			tpsr = numeropsr-rpsr;
		
			for (contadorpsr=1; contadorpsr<=tpsr; contadorpsr++)
			{
			totpsr=totpsr*contadorpsr;
			
			}
			cout<<"\n el valor de n! es:"<<endl<<resultadopsr;
			cout<<"\n el valor de (n-r)! es:"<<endl<<totpsr;
			finpsr = resultadopsr/totpsr;
		
		
			cout<< "\n el resultado es"<<endl<<finpsr;
	system("pause");
    system("cls");
			
}
//	=============================================
//	Funcion Algoritmo de la Division
void AlgDiv(){
    system("cls");
	int dividendo, divisor, cociente, resto, algoritmo;
			printf( "Introduzca un numero entero (dividendo -D-): " );
	   		scanf( "%d", &dividendo );
	   		printf( "Introduzca el numero por el que va a dividir (divisor -d-): " );
	   		scanf( "%d", &divisor );
	
	   		cociente = dividendo / divisor;
	   		resto = dividendo % divisor;
	   		algoritmo = divisor * (cociente + resto);
	
	   		printf( "%d div %d = %d -q- ( Residuo -r- = %d )",
	           	dividendo, divisor, cociente, resto );
	           				            	
	          	printf("\nAlgoritmo (D=dq+r)= %d", algoritmo );
	system("pause");
    system("cls");
}
//	=============================================
//	Funcion Imprimir Menu
void PrintMath(){
	system("color f1");	
	cout << "\t\t          Matematica Discreta!" <<endl;
	cout << "\t\t " <<endl;
	cout << "\t\t                  _   _     \n";
	cout << "\t\t                | | | |    \n";
	cout << "\t\t _ __ ___   __ _| |_| |__  \n";
	cout << "\t\t| '_ ` _ \\ / _` | __| '_ \\ \n";
	cout << "\t\t| | | | | | (_| | |_| | | |\n";
	cout << "\t\t|_| |_| |_|\\__,_|\\__|_| |_|\n\n";
	cout << "\t\t\n";
	cout << "\t  1. Triangulo de Pascal \n";
    cout << "\t  2. Elementos de dos conjuntos \n";
    cout << "\t  3. Algoritmo de Euclides \n";
    cout << "\t  4. Factorial de un numero \n";
    cout << "\t  5. Multiplicacion de 2 Numeros \n";
    cout << "\t  6. Suma de 2 numeros \n";
    cout << "\t  7. Funcion Recursiva para numeros primos \n";
    cout << "\t  8. Maximo Comun Divisor de 3 Numeros Minimo \n";
    cout << "\t  9. Representar un Numero entero en factores primos \n";
    cout << "\t 10. Programa para encontrar la combinacion utilizando la formula nCr \n";
    cout << "\t 11. Programa para encontrar Permutacion utilizando la formula nPr \n";
    cout << "\t 12. n elevado a la r \n";
    cout << "\t 13. Programa para encontrar (n!/n1!n2!n3!...nt!) \n";
    cout << "\t 14. Programa para encontrar PRn1,n2,...nk n!/n1!n2!n3!...nk! \n";
    cout << "\t 15. Algoritmo de la division \n";
    cout << "\t 16. Combinaciones con Repeticion C(n+r-1) \n";
    cout << "\t 17. Salir de Menu \n";
}
