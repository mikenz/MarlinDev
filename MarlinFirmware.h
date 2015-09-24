#ifndef MARLINFIRMWARE_H
#define MARLINFIRMWARE_H

#include "FirmwareCustomization.h"

#ifndef CUSTOMIZATION_H

  #ifdef CUSTOMIZATION
    #include CUSTOMIZATION
  #else
    #include "configurations/vendor/generic/Customization.h"
  #endif

#endif

#endif //MARLINFIRMWARE_H
