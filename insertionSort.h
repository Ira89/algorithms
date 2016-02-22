#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

template<typename T>
void tempValues(T &firstNumber, T &secondNumber){
    T temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
}

template<typename T>
void insertionSort(T arrForSort[], int sizeArray){
    for(int step = 1; step < sizeArray; ++step){
        int index = step;
        while(arrForSort[index] < arrForSort[index - 1]){
            tempValues(arrForSort[index], arrForSort[index - 1]);
            if(--index - 1 < 0) break;
        }
    }
}

template<typename T>
void insertionSortR(T arrForSort[], int sizeArray){
    for(int step = 1; step < sizeArray; ++step){
        int index = step;
        while(arrForSort[index] > arrForSort[index - 1]){
            tempValues(arrForSort[index], arrForSort[index - 1]);
            if(--index - 1 < 0) break;
        }
    }
}

#endif // INSERTION_SORT_H
