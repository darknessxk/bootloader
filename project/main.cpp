#include "CDisplay.h"

extern "C" void MainBoot() {
    CDisplay::ClearScreen();
    CDisplay::ShowCursor(false);

    CDisplay::TextOut(
        "Hello bootloader",
        0, 0,
        BLACK, WHITE,
        false
    )

    CDisplay::TextOut(
        "by darknessxk",
        0, 1,
        BLACK, WHITE,
        false
    )
    return;
}