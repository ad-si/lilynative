#include <node/v8.h>
#include <node/node.h>

void RegisterModule(v8::Handle<v8::Object> target) {
    // Add properties to target
}

// Register the module with node.
NODE_MODULE(modulename, RegisterModule);
