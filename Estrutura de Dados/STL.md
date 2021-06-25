# The C++ Standard Template Library (STL)

[Referencia](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)
---

## 1.Algoritmos
---

<b>-Sorting </b>
 
Sorting an array: 
```c
sort(name_array, name_array + tamanho_array)
```

<b>-Searching </b>

Binary Search: 
```c
binary_search(startaddress, endaddress, valuetofind)
```
>Retorna true se encontr e false caso não encontre. 

<b>-Important STL Algorithms </b>

```c
csort(first_iterator,last_iterator)
```
>Ordena o dado vector <br>

```c
reverse(first_iterator,last_iterator)
```
> Inverte todo o vector<br>

```c
*max_element(first_iterator,last_iterator)
```
>Encontra o valor máximo do vector.<br>

```c
*min_element(first_iterator,last_iterator)
```
>Encontra o valor mínimo do vector.<br>

```c
accumulate(first_iterator,last_iterator,initial value of sum)
```
>Faz a soma dos elementos do vector<br>

```c
count(first_iterator,last_iterator,x)
```
>Conta o numero de vezes que o x aparece no dado vector<br>

```c
find(first_iterator,last_iterator,x)
```
>Retorna um interator coma primeira ocorrencia de x no dado vector e aponta para o ultimo endereço se o elemento não está presente no vector.<br>
            
## 2.Containers
---

## 3.Funções
---

## 4.Iterators
---
