/** FRQ 3 — Sensor readings
You are given two fully-implemented structs: TemperatureSensor and HumiditySensor. Both store a double reading and have a method updateReading(double val). Your job is to implement 3 template functions that update either sensor's reading.

Freeze code (already written)
// FREEZE CODE BEGIN
using namespace std;

struct TemperatureSensor {
    double reading = 0.0;
    TemperatureSensor(double r) { reading = r; }
    void updateReading(double val) { reading = val; }
};

struct HumiditySensor {
    double reading = 0.0;
    HumiditySensor(double r) { reading = r; }
    void updateReading(double val) { reading = val; }
};
// FREEZE CODE END
Your task — implement these 3 template functions
1.
updateByCopy(T sensor, double val)
— takes the sensor by copy and calls
updateReading
. The original object is NOT modified.
2.
updateByRef(T& sensor, double val)
— takes the sensor by reference. The original object IS modified.
3.
updateByPointer(T* sensor, double val)
— takes the sensor by pointer. Call
updateReading
through the pointer. The original object IS modified.
Each function must work for both TemperatureSensor and HumiditySensor without writing separate versions.
*/

using namespace std;

struct TemperatureSensor {
    double reading = 0.0;
    TemperatureSensor(double r) { 
        reading = r; 
    }
    void updateReading(double val) { 
        reading = val; 
    }
};

struct HumiditySensor {
    double reading = 0.0;
    HumiditySensor(double r) {
        reading = r; 
    }
    void updateReading(double val) { 
        reading = val; 
    }
};

// PUT WHAT STRUCT IS ON CHEAT SHEET AND GENERAL SYNTAX!!
// NO this pointer this DOES NOTTTT APPLY HERE!!! TEMPLATE FUNCTION ARE STANDALONE FUNCTIONS NOT MEMBER FUNCTIONS OF A CLASS
template <typename T>
void updateByCopy(T sensor, double val){
    sensor.updateReading(val);
}

template <typename T>
void updateByRef(T& sensor, double val){
    (sensor).updateReading(val);
}

template <typename T>
void updateByPointer(T* sensor, double val){
    sensor->updateReading(val); // or (*sensor).updateReading(val)
}