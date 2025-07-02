#include <iostream>
#include <string>
using namespace std;

class ElectricKettle {
private:
    string brand;
    double capacity;
    bool has_auto_off;
    string color;

public:
    void SetBrand(string brand) { this->brand = brand; }
    string GetBrand() { return brand; }

    void SetCapacity(double capacity) { this->capacity = capacity; }
    double GetCapacity() { return capacity; }

    void SetHasAutoOff(bool has_auto_off) { this->has_auto_off = has_auto_off; }
    bool GetHasAutoOff() { return has_auto_off; }

    void SetColor(string color) { this->color = color; }
    string GetColor() { return color; }

    void Info() {
        cout << "Electric Kettle Info:\n";
        cout << "Brand: " << brand << "\n";
        cout << "Capacity: " << capacity << " L\n";
        cout << "Auto Off: " << (has_auto_off ? "Yes" : "No") << "\n";
        cout << "Color: " << color << "\n\n";
    }
};

int main() {
    ElectricKettle kettle;
    kettle.SetBrand("Tiphal");
    kettle.SetCapacity(1.7);
    kettle.SetHasAutoOff(true);
    kettle.SetColor("White");

    kettle.Info();
}
