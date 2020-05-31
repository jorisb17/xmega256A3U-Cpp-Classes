// Knop class represents a hardware on/off button

#include "knop.hpp"

Knop::Knop() {

  // Prepair the object
};

Knop::~Knop() {

  // Clear and release the object
};

void Knop::init(PORT_t &oPort, uint8_t nPin, bool bPullup = true) {

  // Store the settings
  oPort_ = &oPort;
  nPin_ = nPin;

  // Init the button
  oPort_->DIRCLR = nPin_;
  switch (nPin_) {
    case PIN0_bm: oPort_->PIN0CTRL = bPullup ? PORT_OPC_PULLUP_gc : PORT_OPC_PULLDOWN_gc; break;
    case PIN1_bm: oPort_->PIN1CTRL = bPullup ? PORT_OPC_PULLUP_gc : PORT_OPC_PULLDOWN_gc; break;
    case PIN2_bm: oPort_->PIN2CTRL = bPullup ? PORT_OPC_PULLUP_gc : PORT_OPC_PULLDOWN_gc; break;
    case PIN3_bm: oPort_->PIN3CTRL = bPullup ? PORT_OPC_PULLUP_gc : PORT_OPC_PULLDOWN_gc; break;
    case PIN4_bm: oPort_->PIN4CTRL = bPullup ? PORT_OPC_PULLUP_gc : PORT_OPC_PULLDOWN_gc; break;
    case PIN5_bm: oPort_->PIN5CTRL = bPullup ? PORT_OPC_PULLUP_gc : PORT_OPC_PULLDOWN_gc; break;
    case PIN6_bm: oPort_->PIN6CTRL = bPullup ? PORT_OPC_PULLUP_gc : PORT_OPC_PULLDOWN_gc; break;
    case PIN7_bm: oPort_->PIN7CTRL = bPullup ? PORT_OPC_PULLUP_gc : PORT_OPC_PULLDOWN_gc; break;
  };
};

bool Knop::isPressed() {

  // Return the status of the on/off button
  return !(oPort_->IN & nPin_);
}; 
