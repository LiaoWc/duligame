//
//  text.cpp
//  duligame
//
//  Created by Liao on 16/1/6.
//
//

#include "text.hpp"
using namespace duli;
text::text(){
    m_label = cocos2d::Label::createWithSystemFont("empty text", "", 20);
    this->set_node(m_label);
    cocos2d::Director::getInstance()->getRunningScene()->addChild(m_label);
}
text::~text(){
    m_label->removeFromParent();
}
void text::set_string(const char* str){
    m_label->setString(str);
}
void text::set_size(float size){
    m_label->setSystemFontSize(size);
}