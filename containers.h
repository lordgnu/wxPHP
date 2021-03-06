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

#ifndef WXPHP_CONTAINERS_H_GUARD
#define WXPHP_CONTAINERS_H_GUARD

#include "references.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_containers_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern int le_wxClientData;
extern zend_class_entry *php_wxClientData_entry;
void php_wxClientData_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxClientData_php: public wxClientData{
	public:
	
	wxClientData_php():wxClientData(){}
		
		
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
static zend_function_entry php_wxClientData_functions[] = {
	PHP_ME(php_wxClientData, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern int le_wxTreeItemData;
extern zend_class_entry *php_wxTreeItemData_entry;
void php_wxTreeItemData_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxTreeItemData_php: public wxTreeItemData{
	public:
	
	wxTreeItemData_php():wxTreeItemData(){}
		
		
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
static zend_function_entry php_wxTreeItemData_functions[] = {
	PHP_ME(php_wxTreeItemData, GetId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTreeItemData, SetId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTreeItemData, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

#endif //WXPHP_CONTAINERS_H_GUARD
