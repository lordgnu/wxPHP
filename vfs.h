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

#ifndef WXPHP_VFS_H_GUARD
#define WXPHP_VFS_H_GUARD

#include "references.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_vfs_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern int le_wxFileSystem;
extern zend_class_entry *php_wxFileSystem_entry;
void php_wxFileSystem_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxFileSystem_php: public wxFileSystem{
	public:
	
	wxFileSystem_php():wxFileSystem(){}
		
		
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
static zend_function_entry php_wxFileSystem_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystem, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxFileSystem, URLToFileName, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystem, OpenFile, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystem, HasHandlerForPath, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystem, GetPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystem, FindNext, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystem, FindFirst, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystem, FindFileInPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystem, FileNameToURL, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystem, ChangePathTo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystem, AddHandler, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern int le_wxFileSystemHandler;
extern zend_class_entry *php_wxFileSystemHandler_entry;
void php_wxFileSystemHandler_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxFileSystemHandler_php: public wxFileSystemHandler{
	public:
	
	wxFileSystemHandler_php():wxFileSystemHandler(){}
		
	bool CanOpen(const wxString& location);
	wxFSFile* OpenFile(wxFileSystem& fs, const wxString& location);
		
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
static zend_function_entry php_wxFileSystemHandler_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystemHandler, FindFirst, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystemHandler, FindNext, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystemHandler, GetMimeTypeFromExt, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystemHandler, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

#endif //WXPHP_VFS_H_GUARD
