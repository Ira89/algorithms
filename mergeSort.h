#ifndef MERGE_SORT_H
#define MERGE_SORT_H

template<typename T>
void mergeArray(T arrForSort[], int firstIndex, int lastIndex){
    if(lastIndex == firstIndex) return;

    int midIndex = (firstIndex + lastIndex) / 2;
    mergeArray(arrForSort, firstIndex, midIndex);
    mergeArray(arrForSort, midIndex + 1, lastIndex);

    int buffer[lastIndex + 1];
    int start = firstIndex;
    int center = midIndex + 1;
    int targetIndex = 0;

    while(lastIndex - firstIndex + 1 != targetIndex){
        if(start > midIndex) buffer[targetIndex++] = arrForSort[center++];
        else if(center > lastIndex) buffer[targetIndex++] = arrForSort[start++];
        else if(arrForSort[start] > arrForSort[center]) buffer[targetIndex++] = arrForSort[center++];
        else buffer[targetIndex++] = arrForSort[start++];
    }

    for(int indexBuffer = 0; indexBuffer < targetIndex; ++indexBuffer){
        arrForSort[indexBuffer + firstIndex] = buffer[indexBuffer];
    }
}

template<typename T>
void mergeSort(T arrForSort[], int sizeArray){
    int firstIndex = 0;
    int lastIndex = sizeArray - 1;
    mergeArray(arrForSort, firstIndex, lastIndex);
}

#endif // MERGE_SORT_H
