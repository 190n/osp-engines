#ifndef TOOLBUTTON_H
#define TOOLBUTTON_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Button.hpp"


namespace godot {



class GD_CPP_BINDING_API ToolButton : public Button {
public:

	void _init();



};

}
#endif
