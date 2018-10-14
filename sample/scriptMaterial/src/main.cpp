#include "ScriptMaterial.hpp"

#include <iostream>

int main()
{
    try {
        ScriptMaterial application;
        application.start();
        application.run();
        application.stop();
    }
    catch (Ogre::Exception &e) {
        std::cout << "[" << __FUNCTION__ << "] " << e.getFullDescription().c_str() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "[" << __FUNCTION__ << "] " << e.what() << std::endl;
    }

    std::cout << "[" <<__FUNCTION__ << "] " << "finished" << std::endl;

    return 0;
}