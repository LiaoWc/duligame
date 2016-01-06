//
//  glview.cpp
//  duligame
//
//  Created by Liao on 16/1/6.
//
//

#include "glview.hpp"
#include "cocos2d.h"
USING_NS_CC;
glview* glview::m_instance = nullptr;

glview::glview(){
}
glview::~glview(){
    
}
glview* glview::get_instance(){
    if (m_instance == nullptr) {
        m_instance = new glview();
    }
    return m_instance;
}
void glview::set_size(float width, float height){
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    if(glview) {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
        glview->setFrameSize(width, height);
#else
        
#endif
    }

}

float glview::get_width(){
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    auto size = glview->getFrameSize();
    return size.width;
}

float glview::get_height(){
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    auto size = glview->getFrameSize();
    return size.height;
}