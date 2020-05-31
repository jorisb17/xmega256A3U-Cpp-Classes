// Knop class represents a hardware on/off button

#ifndef _KNOP_HPP_
#define _KNOP_HPP_

#ifndef __AVR_ATxmega256A3U__
  #define __AVR_ATxmega256A3U__
#endif

  // Used system includes
  #include <avr/io.h>
  #include <avr/interrupt.h>
  #include <util/delay.h>
  #include <stdint.h>
  #include <stdbool.h>

  // The knop class
  class Knop {
    public:
      Knop();
      ~Knop();
      void init(PORT_t &oPort, uint8_t nPin, bool bPullup);
      bool isPressed();

    protected:

    private:
      PORT_t *oPort_;
      uint8_t nPin_;
  };

#endif // _KNOP_HPP_
