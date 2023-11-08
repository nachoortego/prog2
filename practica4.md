# Estructuras
### Ejercicio 1
**a)**

```
4 5
```
Ya que en la direccion de memoria de `x` `(&x)` se almacena el valor 4

**b)**
```
5 4
```
Ya que `x` cambia su valor a 4 y el puntero pasa a apuntar a `&y`

**c)**
```
9, 2, 3, 4, 5, 
```
El puntero apunta a la lista x, que es lo mismo que `x[0]` y cambia el valor de 1 a 9

**d)**
```
1, 11, 9, 7, 5,
```
Con los cambios de las lineas 7 y 8, el array quedaria como `{1, 2, 9, 7, 5}`.
Con la linea 9, como punt == x, queda 11 en la posicion 2
Luego iterando con `*(punt+i)`, quedaria la salida indicada
Es decir, `punt[i] = *(punt+i)`

**e)**
```
1, 9, 7, 11, 5
```
`punt` apuntaria a la cuarta posicion del array, osea `x[4]`. En la linea 7 se coloca el valor 9 en la posicion `x[1]`. Luego punt apunta a `x[3]` y cambia ese valor por 7. En la linea 10, `punt[1]` es como hacer `x[3+1]`, osea que ahora `x[4] = 11`. Al final iguala `punt = x` e itera con normalidad.

**f)**
```
20
```
`p` es igual a `v[2]` y luego `v[1]`. Luego los calculos son faciles, `a = 4 + 5 + 4 + 7`.

**g)**
```
5 15 15
```
`x` e `y` son afectados ya que se trabaja directamente en su espacio de memoria. `z` no se modifica por la misma razon.

**h)**
```
cadena1
cadena2
```
Hace exactamente lo mismo dos veces, pisando el valor de `c`

**i)**
```
2
```
`ptr` toma la direccion del entero 2, y luego se imprime lo que apunta `ptr`



