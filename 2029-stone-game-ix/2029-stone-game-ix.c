#include <stdbool.h>
#include <stdlib.h>

bool stoneGameIX(int* stones, int stonesSize) {
    int counts[3] = {0, 0, 0};
    
    for (int i = 0; i < stonesSize; i++) {
        counts[stones[i] % 3]++;
    }
    
    int c0 = counts[0];
    int c1 = counts[1];
    int c2 = counts[2];
    
    if (c0 % 2 == 0) {
        return (c1 >= 1 && c2 >= 1);
    }
    
    return (abs(c1 - c2) > 2);
}
