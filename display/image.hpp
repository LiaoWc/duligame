//
//  image.hpp
//  duligame
//
//  Created by Liao on 16/1/6.
//
//

#ifndef image_hpp
#define image_hpp
#include "cocos2d.h"
#include "base.hpp"
namespace duli
{
    class image:public base
    {
    public:
        image();
        ~image();
        
        void set_file(const char* file);
        
    private:
        cocos2d::Sprite* m_sprite;
    };
}

#endif /* image_hpp */
