#pragma once

#include <stdio.h>

namespace Mazel {

    class App
    {
    public:
        App();
        virtual ~App();
        
        void Run();
    };

    // To be define in client
    App* CreateApp();

}
