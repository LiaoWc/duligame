//
//  text.hpp
//  duligame
//
//  Created by Liao on 16/1/6.
//
//

#ifndef text_hpp
#define text_hpp
#include "cocos2d.h"
#include "base.hpp"
namespace duli
{
    class text:public base
    {
    public:
        text();
        ~text();
        
        void set_string(const char* str);
        void set_size(const float size);
        void set_color(const float r,const float g,const float b);
        
    private:
        cocos2d::Label* m_label;
    };
}
#endif /* text_hpp */
