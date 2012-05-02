<?php

// Include the Smarty Template Engine
require_once 'Smarty/Smarty.class.php';

// Instance Template Engine
$smarty = new Smarty;

// Create a temp dir for caching
$smartyCacheDir = sys_get_temp_dir() . DIRECTORY_SEPARATOR . 'wxPHPTemplates';
if (is_dir($smartyCacheDir) === false) 
{
	if (mkdir($smartyCacheDir) === false) 
	{
		die('Unable to create temporary directory for compiling templates: ' . $smartyCacheDir);
	}
}

// Point Smarty to Cache Directory
$smarty->setCacheDir($smartyCacheDir);
$smarty->setCompileDir($smartyCacheDir);

// Clear any cache that may be there from a previous run of the parser
$smarty->clearAllCache();

// Point Smarty to template directory
$smarty->setTemplateDir(
	array(
		dirname(dirname(__FILE__)) . DS . 'templates',
		dirname(dirname(__FILE__)) . DS . 'source_templates',
		dirname(dirname(__FILE__)) . DS . 'config_templates'
	)
);

// Override the default delimiters
$smarty->left_delimiter = '%{';
$smarty->right_delimiter = '}%';

// Now for some template helper functions
function destructionHandlerHelper1($class_name) 
{
	return	(
		!inherits_from_class("wxSizer", $class_name) && 
		!inherits_from_class("wxTopLevelWindow", $class_name) && 
		!inherits_from_class("wxPanel", $class_name) && 
		!inherits_from_class("wxControl", $class_name) && 
		$class_name != "wxMenu" && 
		$class_name != "wxMenuItem" && 
		$class_name != "wxMenuBar" && 
		$class_name != "wxPanel" && 
		$class_name != "wxSplitterWindow" && 
		$class_name != "wxScrolledWindow" && 
		$class_name != "wxScrolledWindow" && 
		$class_name != "wxAuiManager"
	);
}

function destructionHandlerHelper2($class_name)
{
	return (
		$class_name != "wxGridCellAttr" &&
		$class_name != "wxGridCellEditor" &&
		$class_name != "wxDataViewModel" &&
		$class_name != "wxRefCounter" &&
		$class_name != "wxVariantData"
	);
}

function destructionHandlerHelper3($class_name)
{
	return (
		inherits_from_class("wxWindow", $class_name) && 
		$class_name != "wxPageSetupDialog" && 
		$class_name != "wxPrintDialog"
	);
}

function funcsOfClassHelper1($class_name) {
	$methods_entry = '';
	funcsOfClass($class_name, 1, $methods_entry);
	return $methods_entry;
}

function verboseHeaderEnd($class_name) {
	global $defClassProperties, $defIni;
	
	return isset($defClassProperties[$class_name]) && isset($defIni[$class_name][$class_name]);
}