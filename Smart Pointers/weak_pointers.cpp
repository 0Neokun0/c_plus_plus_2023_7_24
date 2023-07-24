#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sp = std::make_shared<int>(42);
    std::weak_ptr<int> wp = sp;
    
    std::cout << "wp.use_count() = " << wp.use_count() << std::endl;
    
    if (auto locked_sp = wp.lock()) {
        std::cout << "The value of the shared pointer is " << *locked_sp << std::endl;
    } else {
        std::cout << "The object has been deleted" << std::endl;
    }
    
    sp.reset();
    
    std::cout << "wp.use_count() = " << wp.use_count() << std::endl;
    
    if (auto locked_sp = wp.lock()) {
        std::cout << "The value of the shared pointer is " << *locked_sp << std::endl;
    } else {
        std::cout << "The object has been deleted" << std::endl;
    }
    
    return 0;
}