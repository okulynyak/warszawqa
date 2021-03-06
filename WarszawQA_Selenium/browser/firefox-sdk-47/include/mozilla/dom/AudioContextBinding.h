/* THIS FILE IS AUTOGENERATED FROM AudioContext.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_AudioContextBinding_h
#define mozilla_dom_AudioContextBinding_h

#include "AudioChannelBinding.h"
#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/ToJSValue.h"

namespace mozilla {
namespace dom {

class AudioBuffer;
class AudioContext;
struct AudioContextAtoms;
class DecodeErrorCallback;
class DecodeSuccessCallback;
struct NativePropertyHooks;
class ProtoAndIfaceCache;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

enum class AudioContextState : uint32_t {
  Suspended,
  Running,
  Closed,
  EndGuard_
};

namespace AudioContextStateValues {
extern const EnumEntry strings[4];
} // namespace AudioContextStateValues

bool
ToJSValue(JSContext* aCx, AudioContextState aArgument, JS::MutableHandle<JS::Value> aValue);


class DecodeSuccessCallback : public CallbackFunction
{
public:
  explicit inline DecodeSuccessCallback(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCx, aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS::IsCallable(mCallback));
  }

  explicit inline DecodeSuccessCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisVal, AudioBuffer& decodedData, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "DecodeSuccessCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JS::Value> thisValJS(s.GetContext());
    if (!ToJSValue(s.GetContext(), thisVal, &thisValJS)) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    return Call(s.GetContext(), thisValJS, decodedData, aRv);
  }

  inline void
  Call(AudioBuffer& decodedData, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "DecodeSuccessCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, decodedData, aRv);
  }

  template <typename T>
  inline void
  Call(const T& thisVal, AudioBuffer& decodedData, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(thisVal, decodedData, rv, aExecutionReason);
  }

  inline void
  Call(AudioBuffer& decodedData, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(decodedData, rv, aExecutionReason, eReportExceptions, nullptr);
  }

  inline bool
  operator==(const DecodeSuccessCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, AudioBuffer& decodedData, ErrorResult& aRv);
};


class DecodeErrorCallback : public CallbackFunction
{
public:
  explicit inline DecodeErrorCallback(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCx, aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS::IsCallable(mCallback));
  }

  explicit inline DecodeErrorCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisVal, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "DecodeErrorCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JS::Value> thisValJS(s.GetContext());
    if (!ToJSValue(s.GetContext(), thisVal, &thisValJS)) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    return Call(s.GetContext(), thisValJS, aRv);
  }

  inline void
  Call(ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "DecodeErrorCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, aRv);
  }

  template <typename T>
  inline void
  Call(const T& thisVal, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(thisVal, rv, aExecutionReason);
  }

  inline void
  Call(const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(rv, aExecutionReason, eReportExceptions, nullptr);
  }

  inline bool
  operator==(const DecodeErrorCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, ErrorResult& aRv);
};


namespace AudioContextBinding {

  typedef mozilla::dom::AudioContext NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];

  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  const JSClass*
  GetJSClass();

  bool
  Wrap(JSContext* aCx, mozilla::dom::AudioContext* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, T* aObject, JS::Handle<JSObject*> aGivenProto)
  {
    JS::Rooted<JSObject*> reflector(aCx);
    return Wrap(aCx, aObject, aObject, aGivenProto, &reflector) ? reflector.get() : nullptr;
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceCache& aProtoAndIfaceCache, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObjectHandle(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JSObject*
  GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObjectHandle(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

  JSObject*
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

} // namespace AudioContextBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_AudioContextBinding_h
