// https://www.youtube.com/watch?v=kPRA0W1kECg



// 16.08.23
/* percorre a lista, seleciona o menor valor e troca com o primeiro índice */
int selection_sort(int *array, int size = 0) 
{
    if (size == (sizeof(array)-1))
    {
        return *array;
    }
    int menor = array[size];
    int index = size;
    for (int i = 0; i < sizeof(array); i++)
    {
        if (array[i] < menor)
        {
            menor = array[i];
            index = i;

        }
    }
    int temp = array[size];
    array[size] = array[index];
    array[index] = temp;

    return selection_sort(array, size+1);
}