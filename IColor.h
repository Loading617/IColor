#ifndef _IColor_IColor_h
#define _IColor_IColor_h

#include <CtrlLib/CtrlLib.h>

using namespace Upp;

#define LAYOUTFILE <IColor/IColor.lay>
#include <CtrlCore/lay.h>

class IColor : public WithIColorLayout<TopWindow> {
public:
	IColor();
};

#endif
