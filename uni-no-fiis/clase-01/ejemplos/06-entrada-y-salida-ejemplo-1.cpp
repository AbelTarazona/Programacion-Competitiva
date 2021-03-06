#include <bits/stdc++.h>

using namespace std;

int main() {
    /**
     * En CP la forma estándar de entrada y salida es de manera directa
     * es decir, no leemos la entrada de archivos ni escribimos la respuesta en uno
     * Además, las especificaciones de las entradas de los problemas siempre se cumplen
     * Entonces, no hay necesidad de verificar que la entrada que nos pasan es correcta
     * La salida se debe dar en el formato exacto señalado en el problema
     * Eso incluye número de espacios, salto de línea, etc
     * Y no se debe imprimir nada más que lo señalado en la salida
     * Por ejemplo
     * Problema:
     *    Recibirás 2 números enteros a, b.
     *    Imprimir la suma de ellos
     * Especificaciones de entrada:
     *    0 <= a, b < 100
     * Especificaciones de salida:
     *    suma de a y b
     * Ejemplo de entrada
     *    4 5
     * Ejemplo de salida
     *    9
     *
     * Entonces, no tenemos la necesidad de verificar que nos vayan a ingresar números en ese rango
     * Además, solo debemos imprimir la suma de los numeros recibimos y nada más
     * Entonces, por ejemplo, si diera de respuesta "La suma de los números es 9" sería una respuesta incorrecta
     * Lo válida sería solo imprimir "9" para este caso de entrada
     */
    
    // La solución del problema anterior sería:
    
    int a, b;
    cin >> a >> b; // Leo los numeros y los guardo en las variables a y b
    cout << a + b << endl; // Imprimo los números y añado un salto de línea
    
    
    return (0);
}