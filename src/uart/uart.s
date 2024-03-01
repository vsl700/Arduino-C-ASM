# #define F_CPU 1000000L
#include "Pin13.h"

.global setPin13Out
setPin13Out:
    call setupPin13
    ret

.global turnPin13On
turnPin13On:
    call pin13On
    ret

.global turnPin13Off
turnPin13Off:
    call pin13Off
    ret
