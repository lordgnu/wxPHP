%{$method_definition.return_type}% %{$class_name}%_php::%{$method_name}%(%{function_arguments_string($method_definition, false)}%)%{if $method_definition.constant}%const%{/if}%
{
    #ifdef USE_WXPHP_DEBUG
    php_printf("Invoking virtual %{$class_name}%::%{$method_name}%\n");
    php_printf("===========================================\n");
    #endif
%{if $method_definition.parameters_type|count <= 0}%
    zval* arguments[1];
    arguments[0] = NULL;
%{else}%
    zval *arguments[%{$method_definition.parameters_type|count}%];
    
    //Initilize arguments array
    for(int i = 0; i < %{$method_definition.parameters_type|count}%; i++)
    {
        MAKE_STD_ZVAL(arguments[i]);
    }
%{/if}%
    
    zval* return_value;
    MAKE_STD_ZVAL(return_value);
    zval function_name;
    ZVAL_STRING(&function_name, "%{$method_name}%", 0);
    char* temp_string;
    char _wxResource[] = "wxResource";
    zval **tmp;
    int id_to_find;
    void* return_object;
    int rsrc_type;
    
    %{class_virtual_method_parameters_to_zvals($method_definition, $method_name, $class_name)}%
    
    #ifdef USE_WXPHP_DEBUG
    php_printf("Trying to call user defined method\n");
    #endif
    
    if(call_user_function(NULL, (zval**) &this->phpObj, &function_name, return_value, %{$method_definition.parameters_type|count}%, arguments TSRMLS_CC) == FAILURE)
    {
        #ifdef USE_WXPHP_DEBUG
        php_printf("Invocation of user defined method failed\n");
        #endif
        
%{if $method_definition.pure_virtual}%
        wxMessageBox("Failed to call virtual method '%{$method_name}%'!", "Error");
%{/if}%
    }
%{if !$method_definition.pure_virtual}%
    else
    {
%{assign var="indent" value="    "}%
%{else}%
%{assign var="indent" value=""}%
%{/if}%
%{* The indent value is used just for formatting of the produced code so it looks prettier *}%
%{$indent}%    #ifdef USE_WXPHP_DEBUG
%{$indent}%    php_printf("Returning userspace value.\n");
%{$indent}%    #endif
%{$indent}%    
%{$indent}%    %{class_virtual_method_return($method_definition, $method_name, $class_name)}%
%{if !$method_definition.pure_virtual}%    }%{/if}%
    
%{if !$method_definition.pure_virtual}%
    #ifdef USE_WXPHP_DEBUG
    php_printf("Calling original method\n");
    php_printf("===========================================\n\n");
    #endif
    
    //Call original method
%{if $method_definition.return_type != "void"}%
    return %{$class_name}%::%{$method_name}%(%{function_arguments_call_string($method_definition)}%);
%{else}%
    %{$class_name}%::%{$method_name}%(%{function_arguments_call_string($method_definition)}%);
%{/if}%
%{/if}%

}

%{* End of C code for this template *}%
