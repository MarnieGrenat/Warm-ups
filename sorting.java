// https://www.youtube.com/watch?v=kPRA0W1kECg


public class sorting {

    // 16.08.23
    /* percorre a lista, seleciona o menor valor e troca com o primeiro índice */
    public int selection_sort(int *list, int size=0){
        if (size == (list.length-1)){
            return list;
        }
        int min = list[size];
        int index = size;
        for (int i = 0, i < list.length, i++){
            if (list[i] < min) {
                min = list[i];
                index = size;
            }
        }
        int temp = list[size];
        list[size] = min;
        list[index] = temp;

        return selection_sort(list, size+1);
    }
}