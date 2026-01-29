#pragma once

#include <stdio.h>
#include "Core.h"

namespace Mazel {

    class MZ_API App
    {
    public:
        App();
        virtual ~App();
        
        void Run();
    };

}
