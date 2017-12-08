/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl\mozIJSSubScriptLoader.idl
 */

#ifndef __gen_mozIJSSubScriptLoader_h__
#define __gen_mozIJSSubScriptLoader_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class nsIObserver; /* forward declaration */


/* starting interface:    mozIJSSubScriptLoader */
#define MOZIJSSUBSCRIPTLOADER_IID_STR "19533e7b-f321-4ef1-bc59-6e812dc2a733"

#define MOZIJSSUBSCRIPTLOADER_IID \
  {0x19533e7b, 0xf321, 0x4ef1, \
    { 0xbc, 0x59, 0x6e, 0x81, 0x2d, 0xc2, 0xa7, 0x33 }}

class NS_NO_VTABLE mozIJSSubScriptLoader : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZIJSSUBSCRIPTLOADER_IID)

  /* [implicit_jscontext] jsval loadSubScript (in AString url, [optional] in jsval obj, [optional] in AString charset); */
  NS_IMETHOD LoadSubScript(const nsAString & url, JS::HandleValue obj, const nsAString & charset, JSContext* cx, JS::MutableHandleValue _retval) = 0;

  /* [implicit_jscontext] jsval loadSubScriptWithOptions (in AString url, in jsval options); */
  NS_IMETHOD LoadSubScriptWithOptions(const nsAString & url, JS::HandleValue options, JSContext* cx, JS::MutableHandleValue _retval) = 0;

  /* void precompileScript (in nsIURI uri, in nsIPrincipal principal, in nsIObserver observer); */
  NS_IMETHOD PrecompileScript(nsIURI *uri, nsIPrincipal *principal, nsIObserver *observer) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIJSSubScriptLoader, MOZIJSSUBSCRIPTLOADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZIJSSUBSCRIPTLOADER \
  NS_IMETHOD LoadSubScript(const nsAString & url, JS::HandleValue obj, const nsAString & charset, JSContext* cx, JS::MutableHandleValue _retval) override; \
  NS_IMETHOD LoadSubScriptWithOptions(const nsAString & url, JS::HandleValue options, JSContext* cx, JS::MutableHandleValue _retval) override; \
  NS_IMETHOD PrecompileScript(nsIURI *uri, nsIPrincipal *principal, nsIObserver *observer) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_MOZIJSSUBSCRIPTLOADER \
  NS_METHOD LoadSubScript(const nsAString & url, JS::HandleValue obj, const nsAString & charset, JSContext* cx, JS::MutableHandleValue _retval); \
  NS_METHOD LoadSubScriptWithOptions(const nsAString & url, JS::HandleValue options, JSContext* cx, JS::MutableHandleValue _retval); \
  NS_METHOD PrecompileScript(nsIURI *uri, nsIPrincipal *principal, nsIObserver *observer); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZIJSSUBSCRIPTLOADER(_to) \
  NS_IMETHOD LoadSubScript(const nsAString & url, JS::HandleValue obj, const nsAString & charset, JSContext* cx, JS::MutableHandleValue _retval) override { return _to LoadSubScript(url, obj, charset, cx, _retval); } \
  NS_IMETHOD LoadSubScriptWithOptions(const nsAString & url, JS::HandleValue options, JSContext* cx, JS::MutableHandleValue _retval) override { return _to LoadSubScriptWithOptions(url, options, cx, _retval); } \
  NS_IMETHOD PrecompileScript(nsIURI *uri, nsIPrincipal *principal, nsIObserver *observer) override { return _to PrecompileScript(uri, principal, observer); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZIJSSUBSCRIPTLOADER(_to) \
  NS_IMETHOD LoadSubScript(const nsAString & url, JS::HandleValue obj, const nsAString & charset, JSContext* cx, JS::MutableHandleValue _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadSubScript(url, obj, charset, cx, _retval); } \
  NS_IMETHOD LoadSubScriptWithOptions(const nsAString & url, JS::HandleValue options, JSContext* cx, JS::MutableHandleValue _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadSubScriptWithOptions(url, options, cx, _retval); } \
  NS_IMETHOD PrecompileScript(nsIURI *uri, nsIPrincipal *principal, nsIObserver *observer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PrecompileScript(uri, principal, observer); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIJSSubScriptLoader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZIJSSUBSCRIPTLOADER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(_MYCLASS_, mozIJSSubScriptLoader)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* [implicit_jscontext] jsval loadSubScript (in AString url, [optional] in jsval obj, [optional] in AString charset); */
NS_IMETHODIMP _MYCLASS_::LoadSubScript(const nsAString & url, JS::HandleValue obj, const nsAString & charset, JSContext* cx, JS::MutableHandleValue _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval loadSubScriptWithOptions (in AString url, in jsval options); */
NS_IMETHODIMP _MYCLASS_::LoadSubScriptWithOptions(const nsAString & url, JS::HandleValue options, JSContext* cx, JS::MutableHandleValue _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void precompileScript (in nsIURI uri, in nsIPrincipal principal, in nsIObserver observer); */
NS_IMETHODIMP _MYCLASS_::PrecompileScript(nsIURI *uri, nsIPrincipal *principal, nsIObserver *observer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_mozIJSSubScriptLoader_h__ */
