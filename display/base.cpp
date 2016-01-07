//
//  base.cpp
//  duligame
//
//  Created by Liao on 16/1/6.
//
//

#include "base.hpp"
using namespace duli;
base::base(){
    
}
base::~base(){
    
}
void base::set_position(float x, float y){
    m_node->setPosition(x,y);
}
void base::set_position_x(float x){
    m_node->setPositionX(x);
}
void base::set_position_y(float y){
    m_node->setPositionY(y);
}
float base::get_position_x(){
    return m_node->getPositionX();
}
float base::get_position_y(){
    return m_node->getPositionY();
}

void base::set_rotation(float r){
    m_node->setRotation(r);
}
float base::get_rotation(){
    return m_node->getRotation();
}

void base::set_scale(float s){
    m_node->setScale(s);
}
void base::set_scale_x(float x){
    m_node->setScaleX(x);
}
void base::set_scale_y(float y){
    m_node->setScaleY(y);
}
float base::get_scale(){
    return m_node->getScale();
}
float base::get_scale_x(){
    return m_node->getScaleX();
}
float base::get_scale_y(){
    return m_node->getScaleY();
}
void base::set_node(cocos2d::Node *node){
    m_node = node;
}