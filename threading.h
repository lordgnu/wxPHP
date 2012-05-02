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

#ifndef WXPHP_THREADING_H_GUARD
#define WXPHP_THREADING_H_GUARD

#include "references.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_threading_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern int le_wxCondition;
extern zend_class_entry *php_wxCondition_entry;
void php_wxCondition_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxCondition_php: public wxCondition{
	public:
	
	wxCondition_php(wxMutex& mutex):wxCondition(mutex){}
		
		
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
static zend_function_entry php_wxCondition_functions[] = {
	PHP_ME(php_wxCondition, Broadcast, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCondition, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCondition, Signal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCondition, Wait, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCondition, WaitTimeout, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCondition, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxCriticalSectionLocker;
extern zend_class_entry *php_wxCriticalSectionLocker_entry;
void php_wxCriticalSectionLocker_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxCriticalSectionLocker_php: public wxCriticalSectionLocker{
	public:
	
	wxCriticalSectionLocker_php(wxCriticalSection& criticalsection):wxCriticalSectionLocker(criticalsection){}
		
		
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
static zend_function_entry php_wxCriticalSectionLocker_functions[] = {
	PHP_ME(php_wxCriticalSectionLocker, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxThreadHelper;
extern zend_class_entry *php_wxThreadHelper_entry;
void php_wxThreadHelper_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxThreadHelper_php: public wxThreadHelper{
	public:
	
		
		
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
static zend_function_entry php_wxThreadHelper_functions[] = {
	PHP_ME(php_wxThreadHelper, GetThread, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThreadHelper, CreateThread, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThreadHelper, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern int le_wxCriticalSection;
extern zend_class_entry *php_wxCriticalSection_entry;
void php_wxCriticalSection_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxCriticalSection_php: public wxCriticalSection{
	public:
	
	wxCriticalSection_php(wxCriticalSectionType critSecType=wxCRITSEC_DEFAULT):wxCriticalSection(critSecType){}
		
		
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
static zend_function_entry php_wxCriticalSection_functions[] = {
	PHP_ME(php_wxCriticalSection, Enter, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCriticalSection, Leave, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCriticalSection, TryEnter, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCriticalSection, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxThread;
extern zend_class_entry *php_wxThread_entry;
void php_wxThread_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxThread_php: public wxThread{
	public:
	
	wxThread_php(wxThreadKind kind=wxTHREAD_DETACHED):wxThread(kind){}
		
	void* Entry();
		
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
static zend_function_entry php_wxThread_functions[] = {
	PHP_ME(php_wxThread, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxThread, Yield, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, This, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, TestDestroy, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, SetPriority, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Sleep, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, SetConcurrency, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, GetCPUCount, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, GetCurrentId, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, GetId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, GetKind, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, GetMainId, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, GetPriority, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, IsAlive, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, IsDetached, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, IsMain, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, IsPaused, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, IsRunning, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Kill, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Pause, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Resume, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Run, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Delete, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Wait, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern int le_wxSemaphore;
extern zend_class_entry *php_wxSemaphore_entry;
void php_wxSemaphore_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxSemaphore_php: public wxSemaphore{
	public:
	
	wxSemaphore_php(int initialcount=0, int maxcount=0):wxSemaphore(initialcount, maxcount){}
		
		
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
static zend_function_entry php_wxSemaphore_functions[] = {
	PHP_ME(php_wxSemaphore, Post, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSemaphore, TryWait, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSemaphore, Wait, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSemaphore, WaitTimeout, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSemaphore, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxMutexLocker;
extern zend_class_entry *php_wxMutexLocker_entry;
void php_wxMutexLocker_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxMutexLocker_php: public wxMutexLocker{
	public:
	
	wxMutexLocker_php(wxMutex& mutex):wxMutexLocker(mutex){}
		
		
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
static zend_function_entry php_wxMutexLocker_functions[] = {
	PHP_ME(php_wxMutexLocker, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMutexLocker, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxMutex;
extern zend_class_entry *php_wxMutex_entry;
void php_wxMutex_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxMutex_php: public wxMutex{
	public:
	
	wxMutex_php(wxMutexType type=wxMUTEX_DEFAULT):wxMutex(type){}
		
		
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
static zend_function_entry php_wxMutex_functions[] = {
	PHP_ME(php_wxMutex, Lock, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMutex, LockTimeout, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMutex, TryLock, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMutex, Unlock, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMutex, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

#endif //WXPHP_THREADING_H_GUARD
