#include <Mazel.hpp>

class Sandbox : public Mazel::App
{
public:
    Sandbox()
    {
        
    }
    
    ~Sandbox()
    {
        
    }
    
};

Mazel::App* Mazel::CreateApp()
{
    return new Sandbox();
}
