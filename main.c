#include "color.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    char manualBuffer[1024];
    getColorCodingReference(manualBuffer, sizeof(manualBuffer));
    return 0;
}
