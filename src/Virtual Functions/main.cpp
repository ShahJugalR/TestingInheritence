
/***
 *      This Project will demonstrate how to call child's
 *      Function when we store child's object as parent's
 * 
 *      NOTE:
 *      This only Works with Reference or pointers.
 ***/


#include <iostream>

class Parent{

public:
    Parent()  = default;
    ~Parent() = default;
    virtual void Function(){
        std::cout << "Called Parent function!\n";
    }
};

class Child : public Parent{

public:
    Child()  = default;
    ~Child() = default;
    void Function() override {
        std::cout << "Called Child function!\n";
    }
};

int main(){

    /* Wont work method */

    Parent parentObj1 = Child();
    parentObj1.Function();              // it will call parent's func
                                        // Reason is its not pointer or ref.

    /* Working methods below */

    // M-1

    Child t_childObj;               
    Parent& parentObj2 = t_childObj;    
    parentObj2.Function();

    // M-2

    Parent* parentObj3 = &t_childObj;    
    parentObj3->Function();  

    // M-3
               
    Parent* parentObj4 = new Child();    
    parentObj4->Function();

    return 0;
}