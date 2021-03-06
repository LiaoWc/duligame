//
//  base.hpp
//  duligame
//
//  Created by Liao on 16/1/6.
//
//

#ifndef base_hpp
#define base_hpp
#include "cocos2d.h"
namespace duli
{
    class base
    {
    public:
        base();
        ~base();
        void set_node(cocos2d::Node * node);
        
        void set_position(float x,float y);
        void set_position_x(float x);
        void set_position_y(float y);
        float get_position_x();
        float get_position_y();
        
        void set_scale(float s);
        void set_scale_x(float s);
        void set_scale_y(float s);
        float get_scale_x();
        float get_scale_y();
        float get_scale();
        
        void set_rotation(float r);
        float get_rotation();
    private:
        cocos2d::Node * m_node;
    };
}


#endif /* base_hpp */
