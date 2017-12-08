/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl\imgICache.idl
 */

#ifndef __gen_imgICache_h__
#define __gen_imgICache_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class imgIRequest; /* forward declaration */

class nsIDocument; /* forward declaration */

class nsIDOMDocument; /* forward declaration */

class nsIProperties; /* forward declaration */

class nsIURI; /* forward declaration */


/* starting interface:    imgICache */
#define IMGICACHE_IID_STR "bfdf23ff-378e-402e-8a6c-840f0c82b6c3"

#define IMGICACHE_IID \
  {0xbfdf23ff, 0x378e, 0x402e, \
    { 0x8a, 0x6c, 0x84, 0x0f, 0x0c, 0x82, 0xb6, 0xc3 }}

class NS_NO_VTABLE imgICache : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(IMGICACHE_IID)

  /* void clearCache (in boolean chrome); */
  NS_IMETHOD ClearCache(bool chrome) = 0;

  /* nsIProperties findEntryProperties (in nsIURI uri, [optional] in nsIDOMDocument doc); */
  NS_IMETHOD FindEntryProperties(nsIURI *uri, nsIDOMDocument *doc, nsIProperties * *_retval) = 0;

  /* void respectPrivacyNotifications (); */
  NS_IMETHOD RespectPrivacyNotifications(void) = 0;

  /* [noscript,notxpcom] void clearCacheForControlledDocument (in nsIDocument doc); */
  NS_IMETHOD_(void) ClearCacheForControlledDocument(nsIDocument *doc) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(imgICache, IMGICACHE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IMGICACHE \
  NS_IMETHOD ClearCache(bool chrome) override; \
  NS_IMETHOD FindEntryProperties(nsIURI *uri, nsIDOMDocument *doc, nsIProperties * *_retval) override; \
  NS_IMETHOD RespectPrivacyNotifications(void) override; \
  NS_IMETHOD_(void) ClearCacheForControlledDocument(nsIDocument *doc) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_IMGICACHE \
  NS_METHOD ClearCache(bool chrome); \
  NS_METHOD FindEntryProperties(nsIURI *uri, nsIDOMDocument *doc, nsIProperties * *_retval); \
  NS_METHOD RespectPrivacyNotifications(void); \
  NS_METHOD_(void) ClearCacheForControlledDocument(nsIDocument *doc); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IMGICACHE(_to) \
  NS_IMETHOD ClearCache(bool chrome) override { return _to ClearCache(chrome); } \
  NS_IMETHOD FindEntryProperties(nsIURI *uri, nsIDOMDocument *doc, nsIProperties * *_retval) override { return _to FindEntryProperties(uri, doc, _retval); } \
  NS_IMETHOD RespectPrivacyNotifications(void) override { return _to RespectPrivacyNotifications(); } \
  NS_IMETHOD_(void) ClearCacheForControlledDocument(nsIDocument *doc) override { return _to ClearCacheForControlledDocument(doc); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IMGICACHE(_to) \
  NS_IMETHOD ClearCache(bool chrome) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearCache(chrome); } \
  NS_IMETHOD FindEntryProperties(nsIURI *uri, nsIDOMDocument *doc, nsIProperties * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FindEntryProperties(uri, doc, _retval); } \
  NS_IMETHOD RespectPrivacyNotifications(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RespectPrivacyNotifications(); } \
  NS_IMETHOD_(void) ClearCacheForControlledDocument(nsIDocument *doc) override; 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public imgICache
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IMGICACHE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(_MYCLASS_, imgICache)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void clearCache (in boolean chrome); */
NS_IMETHODIMP _MYCLASS_::ClearCache(bool chrome)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIProperties findEntryProperties (in nsIURI uri, [optional] in nsIDOMDocument doc); */
NS_IMETHODIMP _MYCLASS_::FindEntryProperties(nsIURI *uri, nsIDOMDocument *doc, nsIProperties * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void respectPrivacyNotifications (); */
NS_IMETHODIMP _MYCLASS_::RespectPrivacyNotifications()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] void clearCacheForControlledDocument (in nsIDocument doc); */
NS_IMETHODIMP_(void) _MYCLASS_::ClearCacheForControlledDocument(nsIDocument *doc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_imgICache_h__ */
