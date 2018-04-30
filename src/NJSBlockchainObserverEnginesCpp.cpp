// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#include "NJSBlockchainObserverEnginesCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSBlockchainObserverEngines::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBlockchainObserverEngines function can only be called as constructor (use New)");
    }
    NJSBlockchainObserverEngines *node_instance = new NJSBlockchainObserverEngines(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSBlockchainObserverEngines::BlockchainObserverEngines_prototype;

Handle<Object> NJSBlockchainObserverEngines::wrap(const std::shared_ptr<ledger::core::api::BlockchainObserverEngines> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BlockchainObserverEngines_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSBlockchainObserverEngines *new_obj = new NJSBlockchainObserverEngines(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSBlockchainObserverEngines::wrap: object template not valid");
    }
    return obj;
}

NAN_METHOD(NJSBlockchainObserverEngines::isNull) {
    NJSBlockchainObserverEngines* obj = Nan::ObjectWrap::Unwrap<NJSBlockchainObserverEngines>(info.This());
    auto cpp_implementation = obj->getCppImpl();
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSBlockchainObserverEngines::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBlockchainObserverEngines::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBlockchainObserverEngines").ToLocalChecked());

    //SetPrototypeMethod all methods
    //Set object prototype
    BlockchainObserverEngines_prototype.Reset(objectTemplate);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);

    //Add template to target
    target->Set(Nan::New<String>("NJSBlockchainObserverEngines").ToLocalChecked(), func_template->GetFunction());
}
