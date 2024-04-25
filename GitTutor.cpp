/*
    sample project used to demonstrate git knowledge
*/ 

#include <iostream>

<<<<<<< HEAD

void foo() 
{
    std::cout << "My main commit"; 
}

int main()
=======
// foo
void foo() 
>>>>>>> feature
{
    std::cout << "This is my intial commit";
}

// foo2
void foo2() 
{
    std::cout << "This is not my intial commit"; 
}


int main()
{
    foo(); 
    foo2(); 
}

