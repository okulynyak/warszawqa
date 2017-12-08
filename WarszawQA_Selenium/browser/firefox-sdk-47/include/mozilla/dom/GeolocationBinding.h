/* THIS FILE IS AUTOGENERATED FROM Geolocation.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_GeolocationBinding_h
#define mozilla_dom_GeolocationBinding_h

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/ToJSValue.h"

namespace mozilla {
namespace dom {

class Geolocation;
struct GeolocationAtoms;
struct NativePropertyHooks;
class Position;
class PositionCallback;
class PositionError;
class PositionErrorCallback;
struct PositionOptionsAtoms;
class ProtoAndIfaceCache;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct PositionOptions : public DictionaryBase
{
  bool mEnableHighAccuracy;
  int32_t mMaximumAge;
  int32_t mTimeout;

  PositionOptions();

  explicit inline PositionOptions(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline PositionOptions(const PositionOptions& aOther)
  {
    *this = aOther;
  }

  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value", bool passedToJSImpl = false);

  bool
  Init(const nsAString& aJSON);

  bool
  ToObjectInternal(JSContext* cx, JS::MutableHandle<JS::Value> rval) const;

  bool
  ToJSON(nsAString& aJSON) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const PositionOptions& aOther);

private:
  static bool
  InitIds(JSContext* cx, PositionOptionsAtoms* atomsCache);
};

namespace binding_detail {
struct FastPositionOptions : public PositionOptions
{
  inline FastPositionOptions()
    : PositionOptions(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


class PositionCallback : public CallbackFunction
{
public:
  explicit inline PositionCallback(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCx, aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS::IsCallable(mCallback));
  }

  explicit inline PositionCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisVal, Position& position, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "PositionCallback";
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
    return Call(s.GetContext(), thisValJS, position, aRv);
  }

  inline void
  Call(Position& position, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "PositionCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, position, aRv);
  }

  template <typename T>
  inline void
  Call(const T& thisVal, Position& position, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(thisVal, position, rv, aExecutionReason);
  }

  inline void
  Call(Position& position, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(position, rv, aExecutionReason, eReportExceptions, nullptr);
  }

  inline bool
  operator==(const PositionCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, Position& position, ErrorResult& aRv);
};


class PositionErrorCallback : public CallbackFunction
{
public:
  explicit inline PositionErrorCallback(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCx, aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS::IsCallable(mCallback));
  }

  explicit inline PositionErrorCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisVal, PositionError& positionError, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "PositionErrorCallback";
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
    return Call(s.GetContext(), thisValJS, positionError, aRv);
  }

  inline void
  Call(PositionError& positionError, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "PositionErrorCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, positionError, aRv);
  }

  template <typename T>
  inline void
  Call(const T& thisVal, PositionError& positionError, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(thisVal, positionError, rv, aExecutionReason);
  }

  inline void
  Call(PositionError& positionError, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(positionError, rv, aExecutionReason, eReportExceptions, nullptr);
  }

  inline bool
  operator==(const PositionErrorCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, PositionError& positionError, ErrorResult& aRv);
};


namespace GeolocationBinding {

  typedef mozilla::dom::Geolocation NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];

  const JSClass*
  GetJSClass();

  bool
  Wrap(JSContext* aCx, mozilla::dom::Geolocation* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

} // namespace GeolocationBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_GeolocationBinding_h
