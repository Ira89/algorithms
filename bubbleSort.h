#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

template<typename T>
void tempValues(T &firstNumber, T &secondNumber){
    T temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
}

template<typename T>
void bubbleSort(T arrForSort[], int sizeArray){
    for(int step = 0; step < sizeArray; ++step){
        for(int index = 1; index < sizeArray; ++index){
            if(arrForSort[index] < arrForSort[index - 1]){
                tempValues(arrForSort[index], arrForSort[index - 1]);
            }
        }
    }
}

template<typename T>
void bubbleSortR(T arrForSort[], int sizeArray){
    for(int step = 0; step < sizeArray; ++step){
        for(int index = 1; index < sizeArray; ++index){
            if(arrForSort[index] > arrForSort[index - 1]){
                tempValues(arrForSort[index], arrForSort[index - 1]);
            }
        }
    }
}

#endif // BUBBLE_SORT_H
