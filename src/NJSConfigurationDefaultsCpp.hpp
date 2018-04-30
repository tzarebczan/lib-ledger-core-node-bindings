// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#ifndef DJINNI_GENERATED_NJSCONFIGURATIONDEFAULTS_HPP
#define DJINNI_GENERATED_NJSCONFIGURATIONDEFAULTS_HPP


#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/ConfigurationDefaults.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSConfigurationDefaults: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSConfigurationDefaults() {};
    NJSConfigurationDefaults(const std::shared_ptr<ledger::core::api::ConfigurationDefaults> &iConfigurationDefaults):_ConfigurationDefaults(iConfigurationDefaults){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::ConfigurationDefaults> &object);
    static Nan::Persistent<ObjectTemplate> ConfigurationDefaults_prototype;
    std::shared_ptr<ledger::core::api::ConfigurationDefaults> getCppImpl(){return _ConfigurationDefaults;};

private:
    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
    std::shared_ptr<ledger::core::api::ConfigurationDefaults> _ConfigurationDefaults;
};
#endif //DJINNI_GENERATED_NJSCONFIGURATIONDEFAULTS_HPP
