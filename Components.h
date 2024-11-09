#pragma once

class Screen {
    string resolution;
    double size;
public:
    Screen(string res = "1920x1080", double sz = 15.6) : resolution(res), size(sz) {}
    void Show() const {
        cout << "  Screen\n" << "    Resolution: " << resolution << "\n    Size: " << size << " inches" << endl;
    }
};

class Battery {
    int capacity;
    int chargeCycles;
public:
    Battery(int cap = 4000, int cycles = 500) : capacity(cap), chargeCycles(cycles) {}
    void Show() const {
        cout << "  Battery\n" << "    Capacity: " << capacity << "mAh\n" << "    Charge cycles: " << chargeCycles << endl;
    }
};

class Keyboard {
    string layout;
    bool backlight;
public:
    Keyboard(string lay = "QWERTY", bool back = true) : layout(lay), backlight(back) {}
    void Show() const {
        cout << "  Keyboard\n" << "    Layout: " << layout << "\n    Backlight: " << (backlight ? "Yes" : "No") << endl;
    }
};

class CPU {
    string model;
    double frequency;
public:
    CPU(string mod = "Intel i5", double freq = 2.5) : model(mod), frequency(freq) {}
    void Show() const {
        cout << "    CPU\n" << "     Model: " << model << "\n     Frequency : " << frequency << " GHz" << endl;
    }
};

class RAM {
    int size;
    string type;
public:
    RAM(int sz = 8, string tp = "DDR4") : size(sz), type(tp) {}
    void Show() const {
        cout << "    RAM\n" << "     Size: " << size << " GB\n" << "     Type: " << type << endl;
    }
};

class Storage {
    int capacity;
    string type;
public:
    Storage(int cap = 256, string tp = "SSD") : capacity(cap), type(tp) {}
    void Show() const {
        cout << "    Storage\n" << "     Capacity: " << capacity << " GB\n" << "     Type: " << type << endl;
    }
};

class VideoCard {
    string model;
    int memory;
public:
    VideoCard(string mod = "NVIDIA GTX 1050", int mem = 4) : model(mod), memory(mem) {}
    void Show() const {
        cout << "    Video Card\n" << "     Model: " << model << "\n     Memory: " << memory << " GB" << endl;
    }
};

class Motherboard {
    CPU cpu;
    RAM ram;
    Storage storage;
    VideoCard videoCard;
public:
    Motherboard(const CPU& c, const RAM& r, const Storage& s, const VideoCard& v)
        : cpu(c), ram(r), storage(s), videoCard(v) {}
    void Show() const {
        cout << "  Motherboard components:\n";
        cpu.Show();
        ram.Show();
        storage.Show();
        videoCard.Show();
    }
};

class OperatingSystem {
    string name;
    string version;
public:
    OperatingSystem(string n = "Windows", string v = "10") : name(n), version(v) {}
    void Show() const {
        cout << "  Operating System: " << "\n    Name:" << name << "\n    Version: " << version << endl;
    }
};