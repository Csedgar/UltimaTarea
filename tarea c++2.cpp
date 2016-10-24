
//Ejercicio 2
El programa imprime: 2 246 6 8 10

//Ejercicio 3.1
declarar un función para printNum antes de principal,
o mover la definición de printNum que antes principal.

//Ejercicio 3.2
añadir un argumento int número llamado  printNum, 
o mover la declaración int numero a una variable global.

//Ejercicio 3.4
desechar diff completo y hacer que el retorno de la función abs (x-y)

//Ejercicio 4.1
 int sum( const int x, const int y) {
 return x + y;
 }

 double sum( const double x, const double y) {
 return x + y;
 }
 

 // Ejercicio 4.3
 int sum( const int x, const int y, const int z) {
 return x+y+z;
 }

 int sum( const int a, const int b, const int c, const int d) {
 return a+b+c+d;
 }


//Ejercicio 4.4
int sum( const int a, const int b, const int c = 0, const int d = 0)
        {
         return a + b + c + d;
 }

 //Ejercicio 4.5
int sum( const int numbers [], const int numbersLen ) {
      int sum = 0; 
      for(int i = 0; i < numbersLen ; ++i) {
          sum += numbers [i]; 
      }
      return sum;
}

// Ejercicio 5.2
int dartsInCircle = 0;
for(int i= 0; i<n; ++i) {
        double x = rand() / (double )RAND_MAX, y = rand() / (double )
          RAND_MAX; 
        if( sqrt(x*x + y*y) < 1 ) { 
            ++dartsInCircle; 
        } 
 }
 // Ejercicio 6.1
 void reverse(int numbers[], const int numbersLen) {
     for(int i = 0; i < numbersLen / 2; ++i) {
       int tmp = numbers[i];
       int indexFromEnd = numbersLen -i -1;
       numbers[i] = numbers[indexFromEnd];
       numbers[indexFromEnd] = tmp;
     }
}
// Ejercicio 6.5
void reverse(int numbers[], const int numbersLen) {
     for(int i = 0; i < numbersLen / 2; ++i) {
       int tmp = *(numbers + i);
        int indexFromEnd = numbersLen -i -1;
       *(numbers + i) = *(numbers + indexFromEnd);
       *(numbers + indexFromEnd) = tmp;
     }
}
// Ejercicio 7.1
int stringLength( const char *str) {
    int length = 0;
    while (*(str + length) != ’\0 ’) {
         ++length;
    }
    return length;
}

//Ejercicio 7.2
void swap(int &x, int &y)
     int tmp =x;
     x=y;
     y= tmp;
//Ejercicio 7.3

void swap(int *x, int *y) {
int tmp = *x;
 *x = *y;
 *y = tmp;
 }
 //Ejercicio 7.4
void swap(int **x, int **y) {
int *tmp = *x;
*x = *y;
*y = tmp;
}
// Ejercicio 7.5
1.
char *nthCharPtr = &oddOrEven[5];
2.
nthCharPtr -= 2; or nthCharPtr = oddOrEven + 3;
3.
cout << *nthCharPtr;
4.
char **pointerPtr = &nthCharPtr;
5.
cout << pointerPtr;
6.
cout << **pointerPtr;
8.
cout << nthCharPtr -oddOrEven;