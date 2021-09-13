/*Un numero primo es un entero mayor que 1 cuyos ´ unicos divisores enteros positivos ´
son el 1 y el mismo. Un m ´ etodo para encontrar todos los n ´ umeros primos en un rango ´
de 1 a N es el conocido como Criba de Eratostenes. Considere la lista de n ´ umeros entre ´
el 2 y N. Dos es el primer numero primo, pero sus m ´ ultiplos (4, 6, 8, . . . ) no lo son, ´
por lo que se tachan de la lista. El siguiente numero despu ´ es del 2 que no est ´ a tachado ´
es el 3, el siguiente primo. Entonces tachamos de la lista todos los multiplos de 3 (6, 9, ´
12, . . . ). El siguiente numero que no est ´ a tachado es el 5, el siguiente primo, y entonces ´
tachamos todos los multiplos de 5 (10, 15, 20, . . . ). Repetimos este procedimiento hasta ´
que lleguemos al primer elemento de la lista cuyo cuadrado sea mayor que N. Todos
los numeros que no se han tachado en la lista son los primos entre 2 y ´ N.*/
