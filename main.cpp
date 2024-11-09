#include <iostream>
#include <string>
using namespace std;

#include "Components.h"
#include "Laptop.h"

int main() {
    CPU cpu("Intel i5", 2.40);
    RAM ram(16, "DDR4");
    Storage storage(512, "SSD");
    VideoCard videoCard("NVIDIA GeForce RTX 3050", 4);

    Motherboard motherboard(cpu, ram, storage, videoCard);

    Screen screen("1920x1080", 15.6);
    Battery battery(6000, 700);
    Keyboard keyboard("Keychorn", true);
    OperatingSystem os("Windows", "11 Home");

    Laptop laptop(motherboard, &screen, &battery, &keyboard, &os);
    laptop.Show();

    return 0;
}