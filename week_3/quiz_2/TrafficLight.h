#include <vector>
#include <iostream>
using namespace std;

class TrafficLight {
  private:
    unsigned int red = 0;
    unsigned int yellow = 0;
    unsigned int green = 0;
  public:
    TrafficLight();
    TrafficLight(unsigned int red, unsigned int yellow, unsigned int green);
    vector<unsigned int> getValues();
    void setValues(vector<unsigned int> values);
  // FREEZE CODE BEGIN
  void Print();
  // FREEZE CODE END
};

TrafficLight::TrafficLight(){
}

TrafficLight::TrafficLight(unsigned int red_, unsigned int yellow_, unsigned int green_){
  red = red_;
  yellow = yellow_;
  green = green_;
}
vector<unsigned int> TrafficLight::getValues(){
  vector <unsigned int> values;
  values.push_back(red);
  values.push_back(yellow);
  values.push_back(green);
  return values;
}

void TrafficLight::setValues(vector<unsigned int> values){
  red = values[0];
  yellow = values[1];
  green = values[2];
}
// FREEZE CODE BEGIN
void TrafficLight::Print(){
  std::cout << "Red: " << red << "\nYellow: " << yellow << "\nGreen: " << green << std::endl;
}
// FREEZE CODE END
