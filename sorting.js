// https://www.youtube.com/watch?v=kPRA0W1kECg

// 16.08.23
/* percorre a lista, seleciona o menor valor e troca com o primeiro índice */
function selection_sort(list, size=0) {
    if (size == list.length) {
        return list;
    }
    let min = list[size];
    let temp;
    let index = size;
    for (int i = 0; i < list.length; i++) {
        if (list[i] < min) {
            min = list[i];
            index = i;
        }
    }
    temp = list[size];
    list[size] = min;
    list[index] = temp;
    return selection_sort(list, size=(size+1));
}