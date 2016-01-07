//
//  image.cpp
//  duligame
//
//  Created by Liao on 16/1/6.
//
//

#include "image.hpp"
using namespace duli;
image::image(){
    m_sprite = cocos2d::Sprite::create();
    this->set_node(m_sprite);
    cocos2d::Director::getInstance()->getRunningScene()->addChild(m_sprite);
}
image::~image(){
    m_sprite->removeFromParent();
}

void image::set_file(const char *file){
    m_sprite->initWithFile(file);
}