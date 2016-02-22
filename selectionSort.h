#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

template<typename T>
void tempValues(T &firstNumber, T &secondNumber){
    T temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
}

template<typename T>
void selectionSort(T arrForSort[], int sizeArray){
    for(int step = 0; step < sizeArray; ++step){
        int indexMinValue = step;
        for(int index = step + 1; index < sizeArray; ++index){
            if(arrForSort[index] < arrForSort[indexMinValue]) indexMinValue = index;
        }

        if(indexMinValue != step){
           tempValues(arrForSort[indexMinValue], arrForSort[step]);
        }
    }
}

template<typename T>
void selectionSortR(T arrForSort[], int sizeArray){
    for(int step = 0; step < sizeArray; ++step){
        int indexMaxValue = step;
        for(int index = step + 1; index < sizeArray; ++index){
            if(arrForSort[index] > arrForSort[indexMaxValue]) indexMaxValue = index;
        }

        if(indexMaxValue != step){
            tempValues(arrForSort[indexMaxValue], arrForSort[step]);
        }
    }
}

#endif // SELECTION_SORT_H
