#pragma once

#include "gl_app.h"
class GLTexture2App : public GLBaseApp
{
    public:
        GLTexture2App(){};
        ~GLTexture2App(){};
        void Initialize();
        void Render();
        void ShutDown(){};

    private:
        //3 for pos , 3 for colors, 3 for text coordinates
        GLfloat mVertices[8*4]= 
        {
            //pos             //colors          //texture coordinate
            1.0f, 1.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 1.0f, //top right
            1.0f,-1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, //bot right
            -1.0f,-1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, //bot left
            -1.0f, 1.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, 1.0f, //top left
        };
        GLuint mIndices [3*2] = 
        {
            0,1,3,
            1,2,3,
        };
        GLuint mVAO;
        GLuint mEBO;
        GLuint mVBO;
        GLuint mTexture0;
        GLuint mTexture1;
    };