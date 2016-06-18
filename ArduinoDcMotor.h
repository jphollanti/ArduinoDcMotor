#ifndef ArduinoDcMotor_h
#define ArduinoDcMotor_h

class ArduinoDcMotor {
  private:
    int pin1;
    int pin2;
    bool running;
    
  public:
    ArduinoDcMotor(int pin1, int pin2);
    void on();
    void off();
    bool isOn();
    void toggle();
};
#endif
