#include "IColor.h"

IColor::IColor()
{
	CtrlLayout(*this, "I Color!");
	Sizeable().MinimizeBox().MaximizeBox();
}

GUI_APP_MAIN
{
	IColor().Run();
}
