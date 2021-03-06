#ifndef UNIVERSAL_METHOD_HANDLER_H_
#define UNIVERSAL_METHOD_HANDLER_H_

#include "HookDvm.h"
#include "Utils/JniHelper.h"

extern "C" {
    #include "Utils/fiatlog.h"
    #include "Utils/fiatsocket.h"
}

void UniversalMethodHandler(const u4* args, JValue* pResult, const Method* method, ::Thread* self);

#endif
