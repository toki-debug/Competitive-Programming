# Competitive-Programming


#The C++ Standard Template Library (STL)
[Referencia](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)

##STL tem 4 componentes
    1.Algoritmos:
        -Sorting(Sorting an array: sort(name_array, name_array + tamanho_array))
        -Searching(Binary Search : binary_search(startaddress, endaddress, valuetofind)) 
            = Retorna true se encontr e false caso não encontre. 
        -Important STL Algorithms
            ```sort(first_iterator,last_iterator)```
                >Ordena o dado vector
            ```reverse(first_iterator,last_iterator)```
                > Inverte todo o vector.
            ```*max_element(first_iterator,last_iterator)``` 
                >Encontra o valor máximo do vector.
            ```*min_element(first_iterator,last_iterator)```
                >Encontra o valor mínimo do vector.
            ```accumulate(first_iterator,last_iterator,initial value of sum)```
                >Faz a soma dos elementos do vector
            ```count(first_iterator,last_iterator,x)```
                >Conta o numero de vezes que o x aparece no dado vector
            ```find(first_iterator,last_iterator,x)```
                >Retorna um interator coma primeira ocorrencia de x no dado vector e aponta para o ultimo endereço se o elemento não está presente no vector.
            
    2.Containers
    3.Funções
    4.Iterators


