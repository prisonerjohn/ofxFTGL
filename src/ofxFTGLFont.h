#pragma once

#include "ofMain.h"
#include "ftgl.h"

class ofxFTGLFont
{    
    public:
        ofxFTGLFont();
        ~ofxFTGLFont();

        virtual void unload();
        virtual bool load(const string& filename, float fontsize, float depth = 0, bool bUsePolygons = false);
        OF_DEPRECATED_MSG("Use load instead", virtual bool loadFont(const string& filename, float fontsize, float depth = 0, bool bUsePolygons = false));
        bool isLoaded();

        void setSize(int size);
        int getSize();
    
        void setTracking(float tracking);
        float getTracking() const;

        float getLineHeight() const;
        float getAscender() const;
        float getDescender() const;
        float getXHeight() const;

        virtual ofRectangle getStringBoundingBox(const wstring& s, float x, float y);
        virtual ofRectangle getStringBoundingBox(const string& s, float x, float y);
        float stringHeight(const string& c);
        float stringWidth(const string& c);
		float getSpaceSize();
        virtual void drawString(const wstring& s, float x, float y);
        virtual void drawString(const string& s, float x, float y);

        FTFont* font;
    
    protected:
        bool loaded;
        FTPoint trackingPoint;
};

