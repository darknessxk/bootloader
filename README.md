# Bootloader

### Tools
Visual Studio Code/ CLion
Microsoft Compilers
VMware Workstation and VirtuaBox intended to testing bootloader

### Build 
```
nasm -f elf32 boot.asm -o build/boot.o
gcc-g++ -m64 kmain.cpp build/boot.o -o output/kernel.bin -nostdlib -ffreestanding -std=c++11 -mno-red-zone -fno-exceptions -nostdlib -fno-rtti -Wall -Wextra -Werror -T linker.ld
```

### Milestone
+ First working version
+ Render text
+ Render some system information
+ Kernel Manipulation
+ Image Rendering
