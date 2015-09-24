/*
 *
 *  Customization for a particular printer
 *

    Although you could define all of your customization here,
    the preferred procedure is to assign a UUID to each printer
    and place the customization for that printer in the customization area.
    You can then reference that file either from the command line or by defining the path here.

 *
 */

#if 0

  // You can obtain a unique id by visiting https://www.uuidgenerator.net/version4

  #define CUSTOMIZATION "configurations/uuid/e9cbe275-aaee-4383-9352-01c1bac200ac/Customization.h"

#endif

#if 0

  #define CUSTOMIZATION_H

  #define  UUID "e9cbe275-aaee-4383-9352-01c1bac200ac"

  // Place all of your overrides first
  #define BUILD_HEIGHT_ADJUSTMENT ( -23 )

  // Calibration values

  #define A_ENDSTOP_ADJUSTMENT (   0 )
  #define B_ENDSTOP_ADJUSTMENT (  47 )
  #define C_ENDSTOP_ADJUSTMENT ( 174 )


  // Then include the kit
  #include "configurations/vendor/generic/delta/Customization.h"

  or define the individual parts of the kit
  #define KINEMATICS "configurations/kinematics/delta.h"
  #define PROCESSOR  "configurations/processor/Arduino/mega2560.h"
  #define DRIVER     "configurations/driver/ramps/v1_4.h"
  #define DISPLAY    "configurations/display/none.h"

  ...

#endif
