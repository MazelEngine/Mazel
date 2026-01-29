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

int main()
{
    Sandbox* sandbox = new Sandbox();
    sandbox->Run();
    delete sandbox;
}
