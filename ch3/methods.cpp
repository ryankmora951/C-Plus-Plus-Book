/*
struct Demo {
    int x;
    virtual void func() { x = 12; } 
// Definition on site
} 

// Good to have method definition outside of the function body if multi-line function
struct Demo {
    int x;
    virtual void func(); // definition (probably) somewhere else
}
...
void Demo::func() { x = 12; } 


struct Demo {
    virtual void func() = 0; // abstract method and also a definition
} 


*/