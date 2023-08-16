# https://www.youtube.com/watch?v=kPRA0W1kECg

# 16.08.23
def selection_sort(lista:list, size:int=0) -> list:
    """percorre a lista, seleciona o menor valor e troca com o primeiro índice"""
    if size < len(lista) - 1:
        return lista
    menor = lista[index];
    index = size;
    for i in range(lista):
        if lista[i]< menor:
            menor = lista[i]
            index = i
    temp = lista[size]
    lista[size] = lista[index]
    lista[index] = temp
    return selection_sort(lista=lista, size =(size+1))
