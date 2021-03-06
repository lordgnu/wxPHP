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

#include "php_wxwidgets.h"
#include "appmanagement.h"
#include "cfg.h"
#include "bookctrl.h"
#include "dnd.h"
#include "cmndlg.h"
#include "containers.h"
#include "ctrl.h"
#include "data.h"
#include "dc.h"
#include "docview.h"
#include "events.h"
#include "file.h"
#include "gdi.h"
#include "grid.h"
#include "html.h"
#include "help.h"
#include "logging.h"
#include "managedwnd.h"
#include "menus.h"
#include "misc.h"
#include "miscwnd.h"
#include "media.h"
#include "pickers.h"
#include "printing.h"
#include "ribbon.h"
#include "richtext.h"
#include "rtti.h"
#include "stc.h"
#include "streams.h"
#include "threading.h"
#include "validator.h"
#include "vfs.h"
#include "aui.h"
#include "winlayout.h"
#include "xml.h"
#include "xrc.h"
#include "dvc.h"
#include "others.h"


void php_wxSound_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxSound_destruction_handler on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	
	wxSound_php* object = static_cast<wxSound_php*>(rsrc->ptr);
	
	if(rsrc->ptr != NULL)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Pointer not null\n");
		php_printf("Pointer address %x\n", (unsigned int)(size_t)rsrc->ptr);
		#endif
		
		if(object->references.IsUserInitialized())
		{	
			#ifdef USE_WXPHP_DEBUG
			php_printf("Deleting pointer with delete\n");
			#endif
			
			delete object;
			
			rsrc->ptr = NULL;
		}
		
		#ifdef USE_WXPHP_DEBUG
		php_printf("Deletion of wxSound done\n");
		php_printf("===========================================\n\n");
		#endif
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Not user space initialized\n");
		#endif
	}
}
PHP_METHOD(php_wxSound, Create)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxSound::Create\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxSound::Create\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxSound){
				references = &((wxSound_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Processing the method call as static\n");
		#endif
	}
	
	//Parameters for overload 0
	char* fileName0;
	long fileName_len0;
	bool isResource0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received >= 1  && arguments_received <= 2)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 's|b' (&fileName0, &fileName_len0, &isResource0)\n");
		#endif
		char parse_parameters_string[] = "s|b";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &fileName0, &fileName_len0, &isResource0 ) == SUCCESS)
		{
			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing RETURN_BOOL(wxSound::Create(wxString(fileName0, wxConvUTF8)))\n\n");
				#endif
				ZVAL_BOOL(return_value, ((wxSound_php*)_this)->Create(wxString(fileName0, wxConvUTF8)));


				return;
				break;
			}
			case 2:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing RETURN_BOOL(wxSound::Create(wxString(fileName0, wxConvUTF8), isResource0))\n\n");
				#endif
				ZVAL_BOOL(return_value, ((wxSound_php*)_this)->Create(wxString(fileName0, wxConvUTF8), isResource0));


				return;
				break;
			}
		}
	}

		
}
PHP_METHOD(php_wxSound, IsOk)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxSound::IsOk\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxSound::IsOk\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxSound){
				references = &((wxSound_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Processing the method call as static\n");
		#endif
	}
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif
		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing RETURN_BOOL(wxSound::IsOk())\n\n");
				#endif
				ZVAL_BOOL(return_value, ((wxSound_php*)_this)->IsOk());


				return;
				break;
			}
		}
	}

		
}
PHP_METHOD(php_wxSound, Play)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxSound::Play\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxSound::Play\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxSound){
				references = &((wxSound_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Processing the method call as static\n");
		#endif
	}
	
	//Parameters for overload 0
	long flags0;
	bool overload0_called = false;
	//Parameters for overload 1
	char* filename1;
	long filename_len1;
	long flags1;
	bool overload1_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received >= 0  && arguments_received <= 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '|l' (&flags0)\n");
		#endif
		char parse_parameters_string[] = "|l";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &flags0 ) == SUCCESS)
		{
			overload0_called = true;
			already_called = true;
		}
	}

	//Overload 1
	overload1:
	if(!already_called && arguments_received >= 1  && arguments_received <= 2)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 's|l' (&filename1, &filename_len1, &flags1)\n");
		#endif
		char parse_parameters_string[] = "s|l";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &filename1, &filename_len1, &flags1 ) == SUCCESS)
		{
			overload1_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing RETURN_BOOL(wxSound::Play())\n\n");
				#endif
				ZVAL_BOOL(return_value, ((wxSound_php*)_this)->Play());


				return;
				break;
			}
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing RETURN_BOOL(wxSound::Play((unsigned) flags0))\n\n");
				#endif
				ZVAL_BOOL(return_value, ((wxSound_php*)_this)->Play((unsigned) flags0));


				return;
				break;
			}
		}
	}

	if(overload1_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Static ");
				php_printf("Executing RETURN_BOOL(wxSound::Play(wxString(filename1, wxConvUTF8)))\n\n");
				#endif
				ZVAL_BOOL(return_value, wxSound::Play(wxString(filename1, wxConvUTF8)));


				return;
				break;
			}
			case 2:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Static ");
				php_printf("Executing RETURN_BOOL(wxSound::Play(wxString(filename1, wxConvUTF8), (unsigned) flags1))\n\n");
				#endif
				ZVAL_BOOL(return_value, wxSound::Play(wxString(filename1, wxConvUTF8), (unsigned) flags1));


				return;
				break;
			}
		}
	}

		
}
PHP_METHOD(php_wxSound, Stop)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxSound::Stop\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxSound::Stop\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxSound){
				references = &((wxSound_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Processing the method call as static\n");
		#endif
	}
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif
		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Static ");
				php_printf("Executing wxSound::Stop()\n\n");
				#endif
				wxSound::Stop();


				return;
				break;
			}
		}
	}

		
}
PHP_METHOD(php_wxSound, __construct)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxSound::__construct\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	
	//Parameters for overload 0
	bool overload0_called = false;
	//Parameters for overload 1
	char* fileName1;
	long fileName_len1;
	bool isResource1;
	bool overload1_called = false;
	//Parameters for overload 2
	long size2;
	char* data2;
	long data_len2;
	bool overload2_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif
		overload0_called = true;
		already_called = true;
	}

	//Overload 1
	overload1:
	if(!already_called && arguments_received >= 1  && arguments_received <= 2)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 's|b' (&fileName1, &fileName_len1, &isResource1)\n");
		#endif
		char parse_parameters_string[] = "s|b";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &fileName1, &fileName_len1, &isResource1 ) == SUCCESS)
		{
			overload1_called = true;
			already_called = true;
		}
	}

	//Overload 2
	overload2:
	if(!already_called && arguments_received == 2)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'ls' (&size2, &data2, &data_len2)\n");
		#endif
		char parse_parameters_string[] = "ls";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &size2, &data2, &data_len2 ) == SUCCESS)
		{
			overload2_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct()\n");
				#endif
				_this = new wxSound_php();

				((wxSound_php*) _this)->references.Initialize();
				break;
			}
		}
	}

	if(overload1_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct(wxString(fileName1, wxConvUTF8))\n");
				#endif
				_this = new wxSound_php(wxString(fileName1, wxConvUTF8));

				((wxSound_php*) _this)->references.Initialize();
				break;
			}
			case 2:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct(wxString(fileName1, wxConvUTF8), isResource1)\n");
				#endif
				_this = new wxSound_php(wxString(fileName1, wxConvUTF8), isResource1);

				((wxSound_php*) _this)->references.Initialize();
				break;
			}
		}
	}

	if(overload2_called)
	{
		switch(arguments_received)
		{
			case 2:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct((size_t) size2, (const void*) data2)\n");
				#endif
				_this = new wxSound_php((size_t) size2, (const void*) data2);

				((wxSound_php*) _this)->references.Initialize();
				break;
			}
		}
	}

		
	if(already_called)
	{
		long id_to_find = zend_list_insert(_this, le_wxSound);
		
		add_property_resource(getThis(), _wxResource, id_to_find);
		
		MAKE_STD_ZVAL(((wxSound_php*) _this)->evnArray);
		
		array_init(((wxSound_php*) _this)->evnArray);
		
		((wxSound_php*) _this)->phpObj = getThis();
		
		((wxSound_php*) _this)->InitProperties();
		
		#ifdef ZTS 
		((wxSound_php*) _this)->TSRMLS_C = TSRMLS_C;
		#endif
	}
	else
	{
		zend_error(E_ERROR, "Abstract type: failed to call a proper constructor");
	}
	
	#ifdef USE_WXPHP_DEBUG
		php_printf("===========================================\n\n");
	#endif
}
