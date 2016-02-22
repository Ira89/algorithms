#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

template<typename T>
T linearSearch(T arrayOfSearch[], int sizeArray, T key){
    int lastIndex = sizeArray - 1;
    if(arrayOfSearch[lastIndex] == key) return lastIndex;

    int lastValue = arrayOfSearch[lastIndex];
    arrayOfSearch[lastIndex] = key;

    int indexKey = 0;
    while(arrayOfSearch[indexKey++] != key);
    if(--indexKey == lastIndex) indexKey = -1;

    arrayOfSearch[lastIndex] = lastValue;
    return indexKey;
}

#endif // LINEAR_SEARCH_H
