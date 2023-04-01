#include <string>

extern "C" {
    #include <ngx_config.h>
    #include <ngx_core.h>
    #include <ngx_http.h>
    extern ngx_module_t ngx_http_hello_module;
}

typedef struct {
    ngx_str_t name;
} ngx_http_hello_loc_conf_t;

