//
// Created by darknessxk on 12/18/2019.
//

extern "C" void kmain()
{
    const short color = 0x0F00;
    const char* hello = "Athena Bootloader writen by darknessxk#0001 - darknessxk.com";
    short* vga = (short*)0xb8000;
    for (int i = 0; i<16;++i)
        vga[i+80] = color | hello[i];
}