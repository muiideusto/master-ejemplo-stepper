#include "mbed.h"


class Stepper {
    DigitalOut   dir;
    DigitalOut   step;
    DigitalOut   enable;


public:

    Stepper(PinName step_pin, PinName dir_pin, PinName enable_pin);
   

    /**
     *  
     */
    void enableStepper(void);

    /**
     *  
     */
    void disableStepper(void);



    /**
     *  
     */
    void doStepForward();

    /**
     *  
     */
    void doStepBackward();

private:    
    /**
     *  
     */
    void doStep(int direcction);

};