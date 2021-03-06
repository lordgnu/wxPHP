/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_APPMANAGEMENT_H_GUARD
#define WXPHP_APPMANAGEMENT_H_GUARD

#include "references.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_appmanagement_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern int le_wxEventLoopBase;
extern zend_class_entry *php_wxEventLoopBase_entry;
void php_wxEventLoopBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxEventLoopBase_php: public wxEventLoopBase{
	public:
	
		
	bool Dispatch();
	int DispatchTimeout(unsigned long timeout);
	void Exit(int rc=0);
	void OnExit();
	bool Pending() const;
	int Run();
	void WakeUp();
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxEventLoopBase_functions[] = {
	PHP_ME(php_wxEventLoopBase, GetActive, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEventLoopBase, IsEventAllowedInsideYield, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEventLoopBase, IsMain, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEventLoopBase, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEventLoopBase, IsRunning, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEventLoopBase, IsYielding, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEventLoopBase, ProcessIdle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEventLoopBase, SetActive, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEventLoopBase, WakeUpIdle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEventLoopBase, Yield, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEventLoopBase, YieldFor, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern int le_wxEventLoopActivator;
extern zend_class_entry *php_wxEventLoopActivator_entry;
void php_wxEventLoopActivator_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxEventLoopActivator_php: public wxEventLoopActivator{
	public:
	
	wxEventLoopActivator_php(wxEventLoopBase* loop):wxEventLoopActivator(loop){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxEventLoopActivator_functions[] = {
	PHP_ME(php_wxEventLoopActivator, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxModule;
extern zend_class_entry *php_wxModule_entry;
void php_wxModule_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxModule_php: public wxModule{
	public:
	
	wxModule_php():wxModule(){}
		
	void OnExit();
	bool OnInit();
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxModule_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxModule, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxProcess;
extern zend_class_entry *php_wxProcess_entry;
void php_wxProcess_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxProcess_php: public wxProcess{
	public:
	
	wxProcess_php(wxEvtHandler* parent=NULL, int id=-1):wxProcess(parent, id){}
	wxProcess_php(int flags):wxProcess(flags){}
		
	void OnTerminate(int pid, int status);
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxProcess_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, Connect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, AddFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, AddPendingEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, DeletePendingEvents, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetEvtHandlerEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetNextHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetPreviousHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, IsUnlinked, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessEventLocally, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessPendingEvents, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, QueueEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, RemoveFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SafelyProcessEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SetEvtHandlerEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SetNextHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SetPreviousHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, Unlink, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, CloseOutput, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, Detach, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, Exists, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, GetErrorStream, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, GetInputStream, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, GetOutputStream, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, GetPid, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, IsErrorAvailable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, IsInputOpened, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, Kill, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, IsInputAvailable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, Redirect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, Open, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxProcess, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxSingleInstanceChecker;
extern zend_class_entry *php_wxSingleInstanceChecker_entry;
void php_wxSingleInstanceChecker_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxSingleInstanceChecker_php: public wxSingleInstanceChecker{
	public:
	
	wxSingleInstanceChecker_php():wxSingleInstanceChecker(){}
	wxSingleInstanceChecker_php(const wxString& name, const wxString& path=wxEmptyString):wxSingleInstanceChecker(name, path){}
		
		
	void InitProperties(){
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxSingleInstanceChecker_functions[] = {
	PHP_ME(php_wxSingleInstanceChecker, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSingleInstanceChecker, CreateDefault, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSingleInstanceChecker, IsAnotherRunning, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSingleInstanceChecker, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

#endif //WXPHP_APPMANAGEMENT_H_GUARD
