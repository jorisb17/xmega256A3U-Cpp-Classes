#ifndef _RGBLED_HPP_
#define _RGBLED_HPP_

#ifndef __AVR_ATxmega256A3U__
  #define __AVR_ATxmega256A3U__
#endif

#include <avr/io.h>

class Rgbled
{
public:
    Rgbled(){

    }
    ~Rgbled(){
    }
    void init(PORT_t &oPort1, uint8_t nPin1, PORT_t &oPort2, uint8_t nPin2, PORT_t &oPort3, uint8_t nPin3);
    void doROn();
    void doROff();
    void doGOn();
    void doGOff();
    void doBOn();
    void doBOff();
    void doOff();
private:
    PORT_t *oPort1_;
    uint8_t nPin1_;
    PORT_t *oPort2_;
    uint8_t nPin2_;
    PORT_t *oPort3_;
    uint8_t nPin3_;
};

#endif //_RGBLED_HPP_


