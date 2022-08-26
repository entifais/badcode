# Bad Code
## Primera Práctica: Algoritmos de Fuerza Bruta y Back Tracking

Práctica sobre algoritmos de fuerza bruta y backtacking

El objetivo de esta práctica es resolver un problema utilizando backtracking. Como recordarán, el backtracking es una optimización de la fuerza bruta en la cual, cuando una decisión no conduce a una solución válida, se deshacen los pasos y se cambia la decisión. Es una optimización de un enfoque de fuerza bruta cuando se puede determinar que no hay solución válida con un subconjunto de la solución (usualmente un prefijo), así que al deshacer la decisión se evita evaluar múltiples combinaciones.

El problema a resolver se denomina *Bad Code*. El enunciado lo encuentra anexo y también lo pueden consultar acá: [Online Judge - 10950 Bad Code](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=21&page=show_problem&problem=1891). Deben implementar la solución en cualquier lenguaje de programación aceptado por el juez en línea de UVA:

- ANSI C 5.3.0 - GNU C Compiler with options: -lm -lcrypt -O2 -pipe -ansi -DONLINE_JUDGE
- JAVA 1.8.0 - OpenJDK Java
- C++ 5.3.0 - GNU C++ Compiler with options: -lm -lcrypt -O2 -pipe -DONLINE_JUDGE
- PASCAL 3.0.0 - Free Pascal Compiler
- C++11 5.3.0 - GNU C++ Compiler with options: -lm -lcrypt -O2 -std=c++11 -pipe -DONLINE_JUDGE
- PYTH3 3.5.1 - Python 3

La evaluación está organizada de la siguiente manera:

20% - El programa debe pasar todos los casos de prueba de udebug [uDebug - UVA 1262 Password](https://www.udebug.com/UVa/10950). Recuerden que si se registran en udebug, tienen acceso a sugerencias sobre el problema.
40% - El programa debe para los casos de prueba del onlinejudge de UVA (https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=21&page=show_problem&problem=1891)
40% - La explicación de la solución utilizada y la calidad del código. Esto incluye:
1. Descripción del algoritmo. ¿Por qué funciona?
2. Descripción del mecanismo de backtracking: ¿Cuál es el criterio que utiliza para definir que no tiene sentido continuar con la exploración de la solución y 3. se debe deshacer la última decisión tomada?
4. ¿Cómo cambiaría el algoritmo si en lugar de preguntar por todas las soluciones preguntara por una solución? Justifique su respuesta.
5. Se revisará también la calidad del código. Algunos ejemplos de cosas que se penalizan:
    * Utilizar variables globales
    * Incluir en los ciclos cálculos que no cambian en cada iteración
    * Nombres arbitrarios de variables o funciones (aleatorios o sin ninguna relación con la semántica de la variable o la función)
