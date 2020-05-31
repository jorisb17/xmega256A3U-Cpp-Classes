#ifndef _LED_HPP_
    #define _LED_HPP_

#ifndef __AVR_ATxmega256A3U__
  #define __AVR_ATxmega256A3U__
#endif

#include <avr/io.h>

class Led
{
public:
    Led();
    ~Led();
    void init(PORT_t &oPort, uint8_t nPin);
    void doOn();
    void doOff();

private:
    PORT_t *oPort_;
    uint8_t nPin_;
};



#endif