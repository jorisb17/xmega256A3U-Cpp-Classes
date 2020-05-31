#include "led.hpp"

Led::Led(){
}

Led::~Led(){
}

void Led::init(PORT_t &oPort, uint8_t nPin){
    oPort_ = &oPort;
    nPin_  = nPin;

    oPort_->DIRSET = nPin_;
}

void Led::doOn(){
    oPort_->OUTSET = nPin_;
}

void Led::doOff(){
    oPort_->OUTCLR = nPin_;
}
