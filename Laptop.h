#pragma once
#include "Components.h"

class Laptop {
    Motherboard motherboard;
    Screen* screen;
    Battery* battery;
    Keyboard* keyboard;
    OperatingSystem* os;
public:
    Laptop(const Motherboard& mb, Screen* sc, Battery* bat, Keyboard* kb, OperatingSystem* os) : motherboard(mb), screen(sc), battery(bat), keyboard(kb), os(os) {}

    void Show() const {
        cout << "Laptop components:\n";
        motherboard.Show();
        screen->Show();
        battery->Show();
        keyboard->Show();
        os->Show();
    }
};
