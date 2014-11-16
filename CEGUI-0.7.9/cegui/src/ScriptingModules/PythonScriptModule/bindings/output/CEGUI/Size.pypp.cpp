// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "Size.pypp.hpp"

namespace bp = boost::python;

void register_Size_class(){

    { //::CEGUI::Size
        typedef bp::class_< CEGUI::Size > Size_exposer_t;
        Size_exposer_t Size_exposer = Size_exposer_t( "Size", "*!\n\
        \n\
           Class that holds the size (width & height) of something.\n\
        *\n", bp::init< >() );
        bp::scope Size_scope( Size_exposer );
        Size_exposer.def( bp::init< float, float >(( bp::arg("width"), bp::arg("height") )) );
        Size_exposer.def( bp::init< CEGUI::Size const & >(( bp::arg("v") )) );
        Size_exposer.def( bp::self != bp::self );
        Size_exposer.def( bp::self * bp::other< float >() );
        Size_exposer.def( bp::self + bp::self );
        Size_exposer.def( bp::self == bp::self );
        Size_exposer.def_readwrite( "d_height", &CEGUI::Size::d_height );
        Size_exposer.def_readwrite( "d_width", &CEGUI::Size::d_width );
    }

}
