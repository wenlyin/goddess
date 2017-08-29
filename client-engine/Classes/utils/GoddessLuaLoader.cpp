/****************************************************************************
Copyright (c) 2011 cocos2d-x.org

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
extern "C" {
#include "xxtea.h"
}
#include <string>
#include <algorithm>
#include "Common.h"
#include "GoddessLuaLoader.h"

using namespace cocos2d;

extern "C"
{
    int goddess_lua_loader(lua_State *L)
    {
        std::string filename(luaL_checkstring(L, 1));
        size_t pos = filename.rfind(".js");
        if (pos != std::string::npos)
        {
            filename = filename.substr(0, pos);
        }
        
        pos = filename.find_first_of(".");
        while (pos != std::string::npos)
        {
            filename.replace(pos, 1, "/");
            pos = filename.find_first_of(".");
        }
        filename.append(".js");
        
//        std::string path = CCFileUtils::sharedFileUtils()->fullPathForFilename(filename.c_str());
//        printf("load file path:%s\n", path.c_str());
        
        unsigned long tmpSize = 0;
        unsigned char* tmpBuffer = CCFileUtils::sharedFileUtils()->getFileData(filename.c_str(), "rb", &tmpSize);

        if (!tmpBuffer){
            return 1;
        }
        
        unsigned int codeBufferSize = 0;
        unsigned char* codeBuffer = xxtea_decrypt(tmpBuffer, tmpSize, (unsigned char*)SCRIPT_KEY, sizeof(SCRIPT_KEY), &codeBufferSize);
        delete[] tmpBuffer;
        
        if (codeBuffer)
        {
            if (luaL_loadbuffer(L, (char*)codeBuffer, codeBufferSize, filename.c_str()) != 0)
            {
                luaL_error(L, "error decode module %s from file %s :\n\t%s", lua_tostring(L, 1), filename.c_str(), lua_tostring(L, -1));
            }
            delete[] codeBuffer;
        }
        
        return 1;
    }
}
