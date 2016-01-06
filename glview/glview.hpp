//
//  glview.hpp
//  duligame
//
//  Created by Liao on 16/1/6.
//
//

#ifndef glview_hpp
#define glview_hpp

class glview
{
public:
    static glview* get_instance();
    void set_size(float width,float height);
    float get_width();
    float get_height();
private:
    glview();
    ~glview();
    static glview* m_instance;
};


#endif /* glview_hpp */
