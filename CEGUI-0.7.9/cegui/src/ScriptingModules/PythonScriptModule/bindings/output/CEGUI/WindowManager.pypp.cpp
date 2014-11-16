// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "WindowManager.pypp.hpp"

namespace bp = boost::python;

struct WindowManager_wrapper : CEGUI::WindowManager, bp::wrapper< CEGUI::WindowManager > {

    WindowManager_wrapper( )
    : CEGUI::WindowManager( )
      , bp::wrapper< CEGUI::WindowManager >(){
        // null constructor
    
    }

    virtual void fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        if( bp::override func_fireEvent = this->get_override( "fireEvent" ) )
            func_fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        else{
            this->CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        }
    }
    
    void default_fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
    }

};

CEGUI::Window*
WindowManager_loadWindowLayout(::CEGUI::WindowManager & me,
    const CEGUI::String& filename, const CEGUI::String& name_prefix = "", const CEGUI::String& resourceGroup = "") {
      return me.loadWindowLayout( filename, name_prefix , resourceGroup);
    }

void register_WindowManager_class(){

    { //::CEGUI::WindowManager
        typedef bp::class_< WindowManager_wrapper, bp::bases< CEGUI::Singleton< CEGUI::WindowManager >, CEGUI::EventSet >, boost::noncopyable > WindowManager_exposer_t;
        WindowManager_exposer_t WindowManager_exposer = WindowManager_exposer_t( "WindowManager", bp::init< >("*************************************************************************\n\
              Construction and Destruction\n\
           *************************************************************************\n\
           *!\n\
           \n\
              Constructs a new WindowManager object.\n\
        \n\
              NB: Client code should not create WindowManager objects - they are of limited use to you!\
              The\n\
              intended pattern of access is to get a pointer to the GUI system's WindowManager via the\
              System\n\
              object, and use that.\n\
           *\n") );
        bp::scope WindowManager_scope( WindowManager_exposer );
        { //::CEGUI::WindowManager::DEBUG_dumpWindowNames
        
            typedef void ( ::CEGUI::WindowManager::*DEBUG_dumpWindowNames_function_type )( ::CEGUI::String ) ;
            
            WindowManager_exposer.def( 
                "DEBUG_dumpWindowNames"
                , DEBUG_dumpWindowNames_function_type( &::CEGUI::WindowManager::DEBUG_dumpWindowNames )
                , ( bp::arg("zone") )
                , "*!\n\
                \n\
                Outputs the names of ALL existing windows to log (DEBUG function).\n\
            \n\
                @param zone\n\
                Helper string that can specify where the name dump was made (e.g. BEFORE FRAME DELETION).\n\
            \n\
                @return\n\
                Nothing.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowManager::cleanDeadPool
        
            typedef void ( ::CEGUI::WindowManager::*cleanDeadPool_function_type )(  ) ;
            
            WindowManager_exposer.def( 
                "cleanDeadPool"
                , cleanDeadPool_function_type( &::CEGUI::WindowManager::cleanDeadPool )
                , "*!\n\
                \n\
                    Permanently destroys any windows placed in the dead pool.\n\
            \n\
                \note\n\
                    It is probably not a good idea to call this from a Window based event handler\n\
                    if the specific window has been or is being destroyed.\n\
            \n\
                @return\n\
                    Nothing.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowManager::createWindow
        
            typedef ::CEGUI::Window * ( ::CEGUI::WindowManager::*createWindow_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            WindowManager_exposer.def( 
                "createWindow"
                , createWindow_function_type( &::CEGUI::WindowManager::createWindow )
                , ( bp::arg("type"), bp::arg("name")="" )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*************************************************************************\n\
                  Window Related Methods\n\
               *************************************************************************\n\
               *!\n\
               \n\
                  Creates a new Window object of the specified type, and gives it the specified unique name.\n\
            \n\
               @param type\n\
                  String that describes the type of Window to be created.  A valid WindowFactory for the\
                  specified type must be registered.\n\
            \n\
               @param name\n\
                  String that holds a unique name that is to be given to the new window.  If this string is\
                  empty (), a name\n\
                  will be generated for the window.\n\
            \n\
               @return\n\
                  Pointer to the newly created Window object.\n\
            \n\
                @exception  InvalidRequestException WindowManager is locked and no Windows\n\
                                                    may be created.\n\
               @exception  AlreadyExistsException     A Window object with the name  name already exists.\n\
               @exception  UnknownObjectException     No WindowFactory is registered for  type Window objects.\n\
               @exception  GenericException        Some other error occurred (Exception message has details).\n\
               *\n" );
        
        }
        { //::CEGUI::WindowManager::destroyAllWindows
        
            typedef void ( ::CEGUI::WindowManager::*destroyAllWindows_function_type )(  ) ;
            
            WindowManager_exposer.def( 
                "destroyAllWindows"
                , destroyAllWindows_function_type( &::CEGUI::WindowManager::destroyAllWindows )
                , "*!\n\
               \n\
                  Destroys all Window objects within the system\n\
            \n\
               @return\n\
                  Nothing.\n\
            \n\
               @exception  InvalidRequestException    Thrown if the WindowFactory for any Window object type has\
               been removed.\n\
               *\n" );
        
        }
        { //::CEGUI::WindowManager::destroyWindow
        
            typedef void ( ::CEGUI::WindowManager::*destroyWindow_function_type )( ::CEGUI::Window * ) ;
            
            WindowManager_exposer.def( 
                "destroyWindow"
                , destroyWindow_function_type( &::CEGUI::WindowManager::destroyWindow )
                , ( bp::arg("window") )
                , "*!\n\
               \n\
                  Destroy the specified Window object.\n\
            \n\
               @param window\n\
                  Pointer to the Window object to be destroyed.  If the  window is null, or is not recognised,\
                  nothing happens.\n\
            \n\
               @return\n\
                  Nothing\n\
            \n\
               @exception  InvalidRequestException    Can be thrown if the WindowFactory for  window's object\
               type was removed.\n\
               *\n" );
        
        }
        { //::CEGUI::WindowManager::destroyWindow
        
            typedef void ( ::CEGUI::WindowManager::*destroyWindow_function_type )( ::CEGUI::String const & ) ;
            
            WindowManager_exposer.def( 
                "destroyWindow"
                , destroyWindow_function_type( &::CEGUI::WindowManager::destroyWindow )
                , ( bp::arg("window") )
                , "*!\n\
               \n\
                  Destroy the specified Window object.\n\
            \n\
               @param\n\
                  window   String containing the name of the Window object to be destroyed.  If  window is not\
                  recognised, nothing happens.\n\
            \n\
               @return\n\
                  Nothing.\n\
            \n\
               @exception  InvalidRequestException    Can be thrown if the WindowFactory for  window's object\
               type was removed.\n\
               *\n" );
        
        }
        { //::CEGUI::WindowManager::getDefaultResourceGroup
        
            typedef ::CEGUI::String const & ( *getDefaultResourceGroup_function_type )(  );
            
            WindowManager_exposer.def( 
                "getDefaultResourceGroup"
                , getDefaultResourceGroup_function_type( &::CEGUI::WindowManager::getDefaultResourceGroup )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Returns the default resource group currently set for layouts.\n\
            \n\
                @return\n\
                    String describing the default resource group identifier that will be\n\
                    used when loading layouts.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowManager::getIterator
        
            typedef ::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::Window*, CEGUI::String::FastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Window*> > > > ( ::CEGUI::WindowManager::*getIterator_function_type )(  ) const;
            
            WindowManager_exposer.def( 
                "getIterator"
                , getIterator_function_type( &::CEGUI::WindowManager::getIterator )
                , "*!\n\
            \n\
               Return a WindowManager.WindowIterator object to iterate over the currently defined Windows.\n\
            *\n" );
        
        }
        { //::CEGUI::WindowManager::getWindow
        
            typedef ::CEGUI::Window * ( ::CEGUI::WindowManager::*getWindow_function_type )( ::CEGUI::String const & ) const;
            
            WindowManager_exposer.def( 
                "getWindow"
                , getWindow_function_type( &::CEGUI::WindowManager::getWindow )
                , ( bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
               \n\
                  Return a pointer to the specified Window object.\n\
            \n\
               @param name\n\
                  String holding the name of the Window object to be returned.\n\
            \n\
               @return\n\
                  Pointer to the Window object with the name  name.\n\
            \n\
               @exception UnknownObjectException   No Window object with a name matching  name was found.\n\
               *\n" );
        
        }
        { //::CEGUI::WindowManager::isDeadPoolEmpty
        
            typedef bool ( ::CEGUI::WindowManager::*isDeadPoolEmpty_function_type )(  ) const;
            
            WindowManager_exposer.def( 
                "isDeadPoolEmpty"
                , isDeadPoolEmpty_function_type( &::CEGUI::WindowManager::isDeadPoolEmpty )
                , "*!\n\
                \n\
                    Return whether the window dead pool is empty.\n\
            \n\
                @return\n\
                    - true if there are no windows in the dead pool.\n\
                    - false if the dead pool contains >=1 window awaiting destruction.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowManager::isLocked
        
            typedef bool ( ::CEGUI::WindowManager::*isLocked_function_type )(  ) const;
            
            WindowManager_exposer.def( 
                "isLocked"
                , isLocked_function_type( &::CEGUI::WindowManager::isLocked )
                , "*!\n\
                \n\
                    Returns whether WindowManager is currently in the locked state.\n\
            \n\
                    While WindowManager is in the locked state all attempts to create a\n\
                    Window of any type will fail with an InvalidRequestException being\n\
                    thrown.  Calls to lockunlock are recursive; if multiple calls to lock\n\
                    are made, WindowManager is only unlocked after a matching number of\n\
                    calls to unlock.\n\
            \n\
                @return\n\
                    - true to indicate WindowManager is locked and that any attempt to\n\
                    create Window objects will fail.\n\
                    - false to indicate WindowManager is unlocked and that Window objects\n\
                    may be created as normal.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowManager::isWindowPresent
        
            typedef bool ( ::CEGUI::WindowManager::*isWindowPresent_function_type )( ::CEGUI::String const & ) const;
            
            WindowManager_exposer.def( 
                "isWindowPresent"
                , isWindowPresent_function_type( &::CEGUI::WindowManager::isWindowPresent )
                , ( bp::arg("name") )
                , "*!\n\
               \n\
                  Examines the list of Window objects to see if one exists with the given name\n\
            \n\
               @param name\n\
                  String holding the name of the Window object to look for.\n\
            \n\
               @return\n\
                  true if a Window object was found with a name matching  name.  false if no matching Window\
                  object was found.\n\
               *\n" );
        
        }
        { //::CEGUI::WindowManager::lock
        
            typedef void ( ::CEGUI::WindowManager::*lock_function_type )(  ) ;
            
            WindowManager_exposer.def( 
                "lock"
                , lock_function_type( &::CEGUI::WindowManager::lock )
                , "*!\n\
                \n\
                    Put WindowManager into the locked state.\n\
            \n\
                    While WindowManager is in the locked state all attempts to create a\n\
                    Window of any type will fail with an InvalidRequestException being\n\
                    thrown.  Calls to lockunlock are recursive; if multiple calls to lock\n\
                    are made, WindowManager is only unlocked after a matching number of\n\
                    calls to unlock.\n\
            \n\
                \note\n\
                    This is primarily intended for internal use within the system.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowManager::renameWindow
        
            typedef void ( ::CEGUI::WindowManager::*renameWindow_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            WindowManager_exposer.def( 
                "renameWindow"
                , renameWindow_function_type( &::CEGUI::WindowManager::renameWindow )
                , ( bp::arg("window"), bp::arg("new_name") )
                , "*!\n\
                \n\
                    Rename a window.\n\
            \n\
                @param window\n\
                    String holding the current name of the window to be renamed.\n\
            \n\
                @param new_name\n\
                    String holding the new name for the window\n\
            \n\
                @exception UnknownObjectException\n\
                    thrown if  window is not known in the system.\n\
            \n\
                @exception AlreadyExistsException\n\
                    thrown if a Window named  new_name already exists.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowManager::renameWindow
        
            typedef void ( ::CEGUI::WindowManager::*renameWindow_function_type )( ::CEGUI::Window *,::CEGUI::String const & ) ;
            
            WindowManager_exposer.def( 
                "renameWindow"
                , renameWindow_function_type( &::CEGUI::WindowManager::renameWindow )
                , ( bp::arg("window"), bp::arg("new_name") )
                , "*!\n\
                \n\
                    Rename a window.\n\
            \n\
                @param window\n\
                    Pointer to the window to be renamed.\n\
            \n\
                @param new_name\n\
                    String holding the new name for the window\n\
            \n\
                @exception AlreadyExistsException\n\
                    thrown if a Window named  new_name already exists.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowManager::saveWindowLayout
        
            typedef void ( ::CEGUI::WindowManager::*saveWindowLayout_function_type )( ::CEGUI::String const &,::CEGUI::String const &,bool const ) const;
            
            WindowManager_exposer.def( 
                "saveWindowLayout"
                , saveWindowLayout_function_type( &::CEGUI::WindowManager::saveWindowLayout )
                , ( bp::arg("window"), bp::arg("filename"), bp::arg("writeParent")=(bool const)(false) )
                , "*!\n\
                \n\
                    Save a full XML window layout, starting at the given Window, to a file\n\
                    with the given file name.\n\
            \n\
                @param window\n\
                    String holding the name of the Window object to become the root of the\n\
                    layout.\n\
            \n\
                @param filename\n\
                    The name of the file to which the XML will be written.  Note that this\n\
                    does not use any part of the ResourceProvider system, but rather will\n\
                    write directly to disk.  If this is not desirable, you should prefer the\n\
                    OutStream based writeWindowLayoutToStream functions.\n\
            \n\
                @param writeParent\n\
                    If the starting window has a parent window, specifies whether to write\n\
                    the parent name into the Parent attribute of the GUILayout XML element.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowManager::saveWindowLayout
        
            typedef void ( ::CEGUI::WindowManager::*saveWindowLayout_function_type )( ::CEGUI::Window const &,::CEGUI::String const &,bool const ) const;
            
            WindowManager_exposer.def( 
                "saveWindowLayout"
                , saveWindowLayout_function_type( &::CEGUI::WindowManager::saveWindowLayout )
                , ( bp::arg("window"), bp::arg("filename"), bp::arg("writeParent")=(bool const)(false) )
                , "*!\n\
                \n\
                    Save a full XML window layout, starting at the given Window, to a file\n\
                    with the given file name.\n\
            \n\
                @param window\n\
                    Window object to become the root of the layout.\n\
            \n\
                @param filename\n\
                    The name of the file to which the XML will be written.  Note that this\n\
                    does not use any part of the ResourceProvider system, but rather will\n\
                    write directly to disk.  If this is not desirable, you should prefer the\n\
                    OutStream based writeWindowLayoutToStream functions.\n\
            \n\
                @param writeParent\n\
                    If the starting window has a parent window, specifies whether to write\n\
                    the parent name into the Parent attribute of the GUILayout XML element.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowManager::setDefaultResourceGroup
        
            typedef void ( *setDefaultResourceGroup_function_type )( ::CEGUI::String const & );
            
            WindowManager_exposer.def( 
                "setDefaultResourceGroup"
                , setDefaultResourceGroup_function_type( &::CEGUI::WindowManager::setDefaultResourceGroup )
                , ( bp::arg("resourceGroup") )
                , "*!\n\
                \n\
                    Sets the default resource group to be used when loading layouts\n\
            \n\
                @param resourceGroup\n\
                    String describing the default resource group identifier to be used.\n\
            \n\
                @return\n\
                    Nothing.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowManager::unlock
        
            typedef void ( ::CEGUI::WindowManager::*unlock_function_type )(  ) ;
            
            WindowManager_exposer.def( 
                "unlock"
                , unlock_function_type( &::CEGUI::WindowManager::unlock )
                , "*!\n\
                \n\
                    Put WindowManager into the unlocked state.\n\
            \n\
                    While WindowManager is in the locked state all attempts to create a\n\
                    Window of any type will fail with an InvalidRequestException being\n\
                    thrown.  Calls to lockunlock are recursive; if multiple calls to lock\n\
                    are made, WindowManager is only unlocked after a matching number of\n\
                    calls to unlock.\n\
            \n\
                \note\n\
                    This is primarily intended for internal use within the system.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowManager::writeWindowLayoutToStream
        
            typedef void ( ::CEGUI::WindowManager::*writeWindowLayoutToStream_function_type )( ::CEGUI::Window const &,::CEGUI::OutStream &,bool ) const;
            
            WindowManager_exposer.def( 
                "writeWindowLayoutToStream"
                , writeWindowLayoutToStream_function_type( &::CEGUI::WindowManager::writeWindowLayoutToStream )
                , ( bp::arg("window"), bp::arg("out_stream"), bp::arg("writeParent")=(bool)(false) )
                , "*!\n\
                \n\
                    Writes a full XML window layout, starting at the given Window to the given OutStream.\n\
            \n\
                @param window\n\
                    Window object to become the root of the layout.\n\
            \n\
                @param out_stream\n\
                    OutStream (std.ostream based) object where data is to be sent.\n\
            \n\
                @param writeParent\n\
                    If the starting window has a parent window, specifies whether to write the parent name\
                    into\n\
                    the Parent attribute of the GUILayout XML element.\n\
            \n\
                @return\n\
                    Nothing.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowManager::writeWindowLayoutToStream
        
            typedef void ( ::CEGUI::WindowManager::*writeWindowLayoutToStream_function_type )( ::CEGUI::String const &,::CEGUI::OutStream &,bool ) const;
            
            WindowManager_exposer.def( 
                "writeWindowLayoutToStream"
                , writeWindowLayoutToStream_function_type( &::CEGUI::WindowManager::writeWindowLayoutToStream )
                , ( bp::arg("window"), bp::arg("out_stream"), bp::arg("writeParent")=(bool)(false) )
                , "*!\n\
                \n\
                    Writes a full XML window layout, starting at the given Window to the given OutStream.\n\
            \n\
                @param window\n\
                    String holding the name of the Window object to become the root of the layout.\n\
            \n\
                @param out_stream\n\
                    OutStream (std.ostream based) object where data is to be sent.\n\
            \n\
                @param writeParent\n\
                    If the starting window has a parent window, specifies whether to write the parent name\
                    into\n\
                    the Parent attribute of the GUILayout XML element.\n\
            \n\
                @return\n\
                    Nothing.\n\
                *\n" );
        
        }
        WindowManager_exposer.add_static_property( "EventWindowCreated"
                        , bp::make_getter( &CEGUI::WindowManager::EventWindowCreated
                                , bp::return_value_policy< bp::return_by_value >() ) );
        WindowManager_exposer.add_static_property( "EventWindowDestroyed"
                        , bp::make_getter( &CEGUI::WindowManager::EventWindowDestroyed
                                , bp::return_value_policy< bp::return_by_value >() ) );
        WindowManager_exposer.add_static_property( "GeneratedWindowNameBase"
                        , bp::make_getter( &CEGUI::WindowManager::GeneratedWindowNameBase
                                , bp::return_value_policy< bp::return_by_value >() ) );
        { //::CEGUI::EventSet::fireEvent
        
            typedef void ( ::CEGUI::EventSet::*fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            typedef void ( WindowManager_wrapper::*default_fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            
            WindowManager_exposer.def( 
                "fireEvent"
                , fireEvent_function_type(&::CEGUI::EventSet::fireEvent)
                , default_fireEvent_function_type(&WindowManager_wrapper::default_fireEvent)
                , ( bp::arg("name"), bp::arg("args"), bp::arg("eventNamespace")="" ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( WindowManager_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            WindowManager_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&WindowManager_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( WindowManager_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            
            WindowManager_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&WindowManager_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("group"), bp::arg("subscriber_name") ) );
        
        }
        WindowManager_exposer.staticmethod( "getDefaultResourceGroup" );
        WindowManager_exposer.staticmethod( "setDefaultResourceGroup" );
        WindowManager_exposer.def ("loadWindowLayout", &::WindowManager_loadWindowLayout,        ( bp::arg("filename"), bp::arg("name_prefix")="", bp::arg("resourceGroup")="" ),         bp::return_value_policy< bp::reference_existing_object,bp::default_call_policies >());;
    }

}
