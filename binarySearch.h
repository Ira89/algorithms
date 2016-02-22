#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

template<typename T>
T binarySearch(T arrayOfSearch[], int sizeArray, T key){
    int firstIndex = 0;
    int lastIndex = sizeArray - 1;

    while(firstIndex < lastIndex){
        int midIndex = firstIndex + (lastIndex - firstIndex) / 2;
        key <= arrayOfSearch[midIndex] ? lastIndex = midIndex : firstIndex = midIndex + 1;
        if(key == arrayOfSearch[lastIndex]) return lastIndex;
    }

    return -1;
}

#endif // BINARY_SEARCH_H
