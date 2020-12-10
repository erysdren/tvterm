#ifndef TVTERM_CMDS_H
#define TVTERM_CMDS_H

#include <tvision/tv.h>

enum : ushort {
    cmGrabInput         = 100,
    cmReleaseInput,
    // Commands that cannot be deactivated.
    cmNewTerm           = 1000,
    cmVTermReadable,
};

enum : ushort {
    hcInputGrabbed      = 1000,
};

#endif // TVTERM_CMDS_H
