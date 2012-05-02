%{*
  * To corretcly handle memory cleaning without segmentation faults
  * we obviate sizers, controls and some other wxWidgets classes that
  * are automatically destroyed by the parent window that holds them. 
  * 
  * Also it seems that in the way wxWidgets works is better for classes 
  * that inherit from wxTopLevelWindow to not be automatically deleted and 
  * require the user to call Destroy. Examples: wxMessageDialog, etc...
  * 
  * This classes do not implement a destructor:
  * wxGridCellAttr, wxGridCellEditor, wxDataViewModel, wxVariantData
  * 
  * Strangely wxPageSetupDialog and wxPrintDialog inherit from wxWindow as 
  * pointed by the documentation but they dont implement Destroy
  *}%

void php_%{$class_name}%_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
%{if destructionHandlerHelper1($class_name)}%
    #ifdef USE_WXPHP_DEBUG
    php_printf("Calling php_%{$class_name}%_destruction_handler on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
    php_printf("===========================================\n");
    #endif
    
%{if destructionHandlerHelper2($class_name)}%
    %{$class_name}%_php* object = static_cast< %{$class_name}%_php* >(rsrc->ptr);
    
    if(rsrc->ptr != NULL)
    {
        #ifdef USE_WXPHP_DEBUG
        php_printf("Pointer not null\n");
        php_printf("Pointer address %x\n", (unsigned int)(size_t)rsrc->ptr);
        #endif
        
        if(object->references.IsUserInitialized())
        {
%{if destructionHandlerHelper3($class_name)}%
            #ifdef USE_WXPHP_DEBUG
            php_printf("Deleting object by calling destroy\n");
            #endif
            
            object->Destroy();
%{else}%
            #ifdef USE_WXPHP_DEBUG
            php_printf("Deleting pointer with delete\n");
            #endif
            
            delete object;
%{/if}%%{* End destructionHandlerHelper3 condition *}%
            rsrc->ptr = NULL;
        }
        
        #ifdef USE_WXPHP_DEBUG
        php_printf("Deletion of %{$class_name}% done\n");
        php_printf("===========================================\n\n");
        #endif
    }
    else
    {
        #ifdef USE_WXPHP_DEBUG
        php_printf("Not user space initialized\n");
        #endif
    }
%{/if}%%{* End destructionHandlerHelper2 condition *}%
%{elseif inherits_from_class("wxTopLevelWindow", $class_name) }%
    zend_error(E_NOTICE, "Object of class %{$class_name}% went out of scope. Remember to always call Destroy() to prevent memory leaks.");
%{else}%
    #ifdef USE_WXPHP_DEBUG
    php_printf("Obviate php_%{$class_name}%_destruction_handler call on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
    php_printf("===========================================\n\n");
    #endif
%{/if}%%{* End destructionHandlerHelper1 condition *}%

}

%{* End of C code for this template *}%
