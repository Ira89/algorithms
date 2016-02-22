#ifndef MERGE_SORTR_H
#define MERGE_SORTR_H

template<typename T>
void mergeArrayR(T arrForSort[], int firstIndex, int lastIndex){
    if(lastIndex == firstIndex) return;

    int midIndex = (firstIndex + lastIndex) / 2;
    mergeArrayR(arrForSort, firstIndex, midIndex);
    mergeArrayR(arrForSort, midIndex + 1, lastIndex);

    int buffer[lastIndex + 1];
    int start = firstIndex;
    int center = midIndex + 1;
    int targetIndex = 0;

    while(lastIndex - firstIndex + 1 != targetIndex){
        if(start > midIndex) buffer[targetIndex++] = arrForSort[center++];
        else if(center > lastIndex) buffer[targetIndex++] = arrForSort[start++];
        else if(arrForSort[start] < arrForSort[center]) buffer[targetIndex++] = arrForSort[center++];
        else buffer[targetIndex++] = arrForSort[start++];
    }

    for(int indexBuffer = 0; indexBuffer < targetIndex; ++indexBuffer){
        arrForSort[indexBuffer + firstIndex] = buffer[indexBuffer];
    }
}

template<typename T>
void mergeSortR(T arrForSort[], int sizeArray){
    int firstIndex = 0;
    int lastIndex = sizeArray - 1;
    mergeArrayR(arrForSort, firstIndex, lastIndex);
}

#endif // MERGE_SORTR_H
