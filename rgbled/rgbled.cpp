#include "rgbled.hpp"


void Rgbled::init(PORT_t &oPort1, uint8_t nPin1, PORT_t &oPort2, uint8_t nPin2, PORT_t &oPort3, uint8_t nPin3){
    oPort1_ = &oPort1;
    nPin1_  = nPin1;
    oPort2_ = &oPort2;
    nPin2_  = nPin2;
    oPort3_ = &oPort3;
    nPin3_  = nPin3;

    oPort1_->DIRSET = nPin1_;
    oPort2_->DIRSET = nPin2_;
    oPort3_->DIRSET = nPin3_;
}

void Rgbled::doROn(){
    oPort1_->OUTSET = nPin1_;
}

void Rgbled::doROff(){
    oPort1_->OUTSET = nPin1_;
}

void Rgbled::doGOn(){
    oPort2_->OUTSET = nPin2_;
}

void Rgbled::doGOff(){
    oPort2_->OUTCLR = nPin2_;
}

void Rgbled::doBOn(){
    oPort3_->OUTSET = nPin3_;
}

void Rgbled::doBOff(){
    oPort3_->OUTCLR = nPin3_;
}

void Rgbled::doOff(){
    oPort1_->OUTCLR = nPin1_;
    oPort2_->OUTCLR = nPin2_;
    oPort3_->OUTCLR = nPin3_;
}
