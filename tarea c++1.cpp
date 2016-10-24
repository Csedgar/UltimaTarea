//Ejercicio 2.1
#include <iostream >

 using namespace std;

 int main()
 {
 const char * str = "Hello, World!";
 cout << str << "\n";
 return 0;
 }

 //Ejercicio 2.2 
 // for loop
 #include <iostream >

 using namespace std;

 int main()
 {
 int N;
 cin >> N;
 for (; N--> 0;)
 {
 cout << "Hello, World!\n";
 }
 return 0;
 }

 //while loop

 #include <iostream >

 using namespace std;

 int main()
 {
 int N;
 cin >> N;
 while (N--> 0)
 {
 cout << "Hello, World!\n"
 }
 return 0;
 }

 //do...while loop

 #include <iostream>
 using namespace std;

 int main()
 {
     int N;
     cin >> N;
     do
     {
        cout << "Hello, World! \n";
     }
     while (-- N > 0);
     return 0;
 }

 //Ejercicio 3.1
1. No podemos declarar el mismo nombre dentro de un bloque, ya que generará un error de compilación.
2. El programa se compila.
3. La declaración se utiliza en el bloque interno.
4. La declaración se utiliza en el bloque exterior.
5. El código no se compilará porque el cout  aún no ha sido definida. 
   Si movemos #include <iostream> en la parte superior, el código se compilará 

//Ejercicio 3.2
#include <iostream >

 using namespace std;

 int main()
 {
 int N;
 cout << "Enter N: ";
 cin >> N;
 int acc =0;

 cin >> acc;
 int minVal = acc;
 int maxVal = acc;

 for(int i= 1; i<N; ++i)
 {
 int a;
 cin >> a;
 acc += a;
 if(a < minVal)
 {
 minVal = a;
 }
 if(a > maxVal)
 {
	maxVal = a;
 }
 }

 cout << "Mean: " << (double )acc/N << "\n";
 cout << "Max: " << maxVal << "\n";
 cout << "Min: " << minVal << "\n";
 cout << "Range: " << (maxVal -minVal) << "\n";

 return 0;
 }

//Ejercicio 3.3 

 #include <iostream >

 using namespace std;

 int main()
 {
 int N;
 cin >> N;
 for(int i= 2; N>0; ++i)
 {
         bool primo = true ;
         for (int j= 2; j<i; ++j)
         {
            if(i %j== 0)
            {
                primo = false ;
                break ;
            }
         }
         if(primo)
         {
             --N;
             cout << i << "\n";
         }
 }
 return 0;
 }

//Ejercicio 3.4
//(?:)Conditional expression (ternary operator).-Un operador que recibe
//tres argumentos y define una sentencia condicional.
// operador ternario
#include <iostream >

 using namespace std;

 int main()
 {
         while (1)
         {
           int N;
           cin >> N;
           cout << ((N % 5==0 && N >= 0) ? N/5 : -1) << "\n";
         }
         return 0;
 }
 //continue
 #include <iostream >

 using namespace std;

 int main()
 {
          while (1)
         {
             int N;
             cin >> N;
             if(N % 5 > 0)
             {
                 cout << "-1\n";
                 continue ;
             }
             cout << N/5 << "\n";
         }
         return 0;
 }
 //break
 #include <iostream >

 using namespace std;

 int main()
 {
         while (1)
         {
             int N;
             cin >> N;
             if(N % 5 > 0)
             {
                 cout << "-1\n";
                 continue ;
             }
             if(N == -1)
             {
                 break ;

             }

             cout << N/5 << "\n";

         }

         << " Goodbye!\n";
         return 0;
 }
 //Ejercicio 4

// 4.1 resultado : 0: 1; 1: 1; 2: 2; 9: 362880; 10: 3628800
// 4.2 Si se especifica -1, el programa dará salida a 1, lo cual es incorrecto porque
//     la función factorial no está definido para los números negativos.
// 4.3 depende de la arquitectura del sistema
// 4.5 FALTA