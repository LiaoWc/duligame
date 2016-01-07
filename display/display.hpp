//
//  display.hpp
//  duligame
//
//  Created by Liao on 16/1/6.
//
//

#ifndef display_hpp
#define display_hpp
#include "image.hpp"
namespace duli
{
    class display
    {
    public:
        static display* get_instance();
        void new_image();
        void new_text();
    private:
        display();
        ~display();
        static display* m_instance;
    };
}


#endif /* display_hpp */
