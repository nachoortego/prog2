# Estructuras
## Ejercicio 1
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


## Ejercicio 2
**a)**
```
textoA: Agarrate Catalina
textoB: El Cuarteto de Nos
while (*p++ = *q ++) ;
textoA: El Cuarteto de Nos
textoB: El Cuarteto de Nos
```
Ambas frases tienen 17 espacios, cada caracter de `q` se guarda en el correspondiente de `p` y al final quedan iguales.

**b)**
```
array [0] > 1; * ptr : 1
array [1] > 2; *( ptr +1) : 2
ptr ++; *ptr : 2
```
`*ptr` es por default igual a `array[0]`, y `*(ptr+1)` es igual a `array[1]` (solo se suma localmente). Luego se le suma una unidad a `ptr` e imprime `array[1]` (igual que antes).

**c)**
```
hola hola
sola sola
```
`a` y `cad` son punteros, por lo que al igualarlos, ahora `a` apunta a la misma direccion de memoria que `cad`, por lo que al hacer el cambio, se trata de la misma direccion y los cambios se manifiestan en la segunda salida.


# Memoria dinámica

## Ejercicio 3

**a)**

`informacionCelda` contiene:

- `nombre`: 100 bytes
- `identificador`: 4 byte
- `calidad`: 5 bytes
- `op` que apunta a una estructura `informacionOp`

Como `op` es un puntero, solo ocupa lo que ocupa una direccion de memoria, es decir 4 u 8 bytes dependiendo de la arquitectura del procesador.

En total, `informacionCelda` ocupa 117 bytes

**b)**

`a` ocupa lo mismo que en el punto a), 117 bytes.

Por otro lado, `b` ocupa lo mismo que `op` ya que es un puntero, 4 u 8 bytes.

**c)**

Si `informacionCelda` esta en la posicion 100, `nombre` ocupa hasta la posicion 200. Luego `identificador`y `calidad` estan en 201 y 202 respectivamente. En cuanto a `op`, guarda en la posicion 203 un puntero hacia la estructura `informacionOp`.

**d)**

1. Se declara una variable `c` de tipo `informacionCelda`
2. Se declara un puntero de tipo `informacionCelda` que apunta a la direccion de la variable de la primer asignacion.
3. Se declara una variable `d` de tipo `informacionCelda`
4. Se declara un puntero de tipo `informacionCelda` y lo iguala al puntero de la segunda asignacion, por lo que ambos apuntan a `c`.

## Ejercicio 4
