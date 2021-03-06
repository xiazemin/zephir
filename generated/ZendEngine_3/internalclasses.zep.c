
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/object.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Test_InternalClasses) {

	ZEPHIR_REGISTER_CLASS(Test, InternalClasses, test, internalclasses, test_internalclasses_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Test_InternalClasses, testStaticCall) {

	zend_class_entry *_0;
	int ZEPHIR_LAST_CALL_STATUS;
	ZEPHIR_INIT_THIS();


	ZEPHIR_MM_GROW();

	_0 = zephir_fetch_class_str_ex(SL("Phalcon\\Di"), ZEND_FETCH_CLASS_AUTO);
	ZEPHIR_RETURN_CALL_CE_STATIC(_0, "getdefault", NULL, 0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Test_InternalClasses, testStaticPropertyFetch) {

	ZEPHIR_INIT_THIS();


	RETURN_LONG(303);

}

