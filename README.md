# Bootloader

### Tools
Visual Studio Code/ CLion
Microsoft Compilers
VMware Workstation and VirtuaBox intended to testing bootloader

### Build 
```cl.exe /AT /G2 /Gs /Gx /c /Zl *.cpp
ml.exe /AT /c *.asm

link.exe /T /NOD *.obj

del *.obj
```

### Milestone
+ First working version
+ Render text
+ Render some system information
+ Kernel Manipulation
+ Image Rendering
