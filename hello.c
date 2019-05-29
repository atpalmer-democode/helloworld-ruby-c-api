#include <ruby.h>


VALUE hello(VALUE self, VALUE str) {
    Check_Type(str, T_STRING);
    return rb_sprintf("Hello, %s", RSTRING_PTR(str));
}


void Init_hello(void) {
    VALUE module = rb_define_module("Hello");
    rb_define_module_function(module, "hello", hello, 1);
}
