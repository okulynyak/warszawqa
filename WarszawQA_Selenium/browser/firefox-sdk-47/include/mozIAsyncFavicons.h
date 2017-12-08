/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl\mozIAsyncFavicons.idl
 */

#ifndef __gen_mozIAsyncFavicons_h__
#define __gen_mozIAsyncFavicons_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIFaviconDataCallback; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class mozIPlacesPendingOperation; /* forward declaration */


/* starting interface:    mozIAsyncFavicons */
#define MOZIASYNCFAVICONS_IID_STR "a9c81797-9133-4823-b55f-3646e67cfd41"

#define MOZIASYNCFAVICONS_IID \
  {0xa9c81797, 0x9133, 0x4823, \
    { 0xb5, 0x5f, 0x36, 0x46, 0xe6, 0x7c, 0xfd, 0x41 }}

class NS_NO_VTABLE mozIAsyncFavicons : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZIASYNCFAVICONS_IID)

  /* mozIPlacesPendingOperation setAndFetchFaviconForPage (in nsIURI aPageURI, in nsIURI aFaviconURI, in boolean aForceReload, in unsigned long aFaviconLoadType, [optional] in nsIFaviconDataCallback aCallback, [optional] in nsIPrincipal aLoadingPrincipal); */
  NS_IMETHOD SetAndFetchFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, bool aForceReload, uint32_t aFaviconLoadType, nsIFaviconDataCallback *aCallback, nsIPrincipal *aLoadingPrincipal, mozIPlacesPendingOperation * *_retval) = 0;

  /* void replaceFaviconData (in nsIURI aFaviconURI, [array, size_is (aDataLen), const] in octet aData, in unsigned long aDataLen, in AUTF8String aMimeType, [optional] in PRTime aExpiration); */
  NS_IMETHOD ReplaceFaviconData(nsIURI *aFaviconURI, const uint8_t *aData, uint32_t aDataLen, const nsACString & aMimeType, PRTime aExpiration) = 0;

  /* void replaceFaviconDataFromDataURL (in nsIURI aFaviconURI, in AString aDataURL, [optional] in PRTime aExpiration, [optional] in nsIPrincipal aLoadingPrincipal); */
  NS_IMETHOD ReplaceFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration, nsIPrincipal *aLoadingPrincipal) = 0;

  /* void getFaviconURLForPage (in nsIURI aPageURI, in nsIFaviconDataCallback aCallback); */
  NS_IMETHOD GetFaviconURLForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) = 0;

  /* void getFaviconDataForPage (in nsIURI aPageURI, in nsIFaviconDataCallback aCallback); */
  NS_IMETHOD GetFaviconDataForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIAsyncFavicons, MOZIASYNCFAVICONS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZIASYNCFAVICONS \
  NS_IMETHOD SetAndFetchFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, bool aForceReload, uint32_t aFaviconLoadType, nsIFaviconDataCallback *aCallback, nsIPrincipal *aLoadingPrincipal, mozIPlacesPendingOperation * *_retval) override; \
  NS_IMETHOD ReplaceFaviconData(nsIURI *aFaviconURI, const uint8_t *aData, uint32_t aDataLen, const nsACString & aMimeType, PRTime aExpiration) override; \
  NS_IMETHOD ReplaceFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration, nsIPrincipal *aLoadingPrincipal) override; \
  NS_IMETHOD GetFaviconURLForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) override; \
  NS_IMETHOD GetFaviconDataForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_MOZIASYNCFAVICONS \
  NS_METHOD SetAndFetchFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, bool aForceReload, uint32_t aFaviconLoadType, nsIFaviconDataCallback *aCallback, nsIPrincipal *aLoadingPrincipal, mozIPlacesPendingOperation * *_retval); \
  NS_METHOD ReplaceFaviconData(nsIURI *aFaviconURI, const uint8_t *aData, uint32_t aDataLen, const nsACString & aMimeType, PRTime aExpiration); \
  NS_METHOD ReplaceFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration, nsIPrincipal *aLoadingPrincipal); \
  NS_METHOD GetFaviconURLForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback); \
  NS_METHOD GetFaviconDataForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZIASYNCFAVICONS(_to) \
  NS_IMETHOD SetAndFetchFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, bool aForceReload, uint32_t aFaviconLoadType, nsIFaviconDataCallback *aCallback, nsIPrincipal *aLoadingPrincipal, mozIPlacesPendingOperation * *_retval) override { return _to SetAndFetchFaviconForPage(aPageURI, aFaviconURI, aForceReload, aFaviconLoadType, aCallback, aLoadingPrincipal, _retval); } \
  NS_IMETHOD ReplaceFaviconData(nsIURI *aFaviconURI, const uint8_t *aData, uint32_t aDataLen, const nsACString & aMimeType, PRTime aExpiration) override { return _to ReplaceFaviconData(aFaviconURI, aData, aDataLen, aMimeType, aExpiration); } \
  NS_IMETHOD ReplaceFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration, nsIPrincipal *aLoadingPrincipal) override { return _to ReplaceFaviconDataFromDataURL(aFaviconURI, aDataURL, aExpiration, aLoadingPrincipal); } \
  NS_IMETHOD GetFaviconURLForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) override { return _to GetFaviconURLForPage(aPageURI, aCallback); } \
  NS_IMETHOD GetFaviconDataForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) override { return _to GetFaviconDataForPage(aPageURI, aCallback); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZIASYNCFAVICONS(_to) \
  NS_IMETHOD SetAndFetchFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, bool aForceReload, uint32_t aFaviconLoadType, nsIFaviconDataCallback *aCallback, nsIPrincipal *aLoadingPrincipal, mozIPlacesPendingOperation * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAndFetchFaviconForPage(aPageURI, aFaviconURI, aForceReload, aFaviconLoadType, aCallback, aLoadingPrincipal, _retval); } \
  NS_IMETHOD ReplaceFaviconData(nsIURI *aFaviconURI, const uint8_t *aData, uint32_t aDataLen, const nsACString & aMimeType, PRTime aExpiration) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReplaceFaviconData(aFaviconURI, aData, aDataLen, aMimeType, aExpiration); } \
  NS_IMETHOD ReplaceFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration, nsIPrincipal *aLoadingPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReplaceFaviconDataFromDataURL(aFaviconURI, aDataURL, aExpiration, aLoadingPrincipal); } \
  NS_IMETHOD GetFaviconURLForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFaviconURLForPage(aPageURI, aCallback); } \
  NS_IMETHOD GetFaviconDataForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFaviconDataForPage(aPageURI, aCallback); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIAsyncFavicons
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZIASYNCFAVICONS

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(_MYCLASS_, mozIAsyncFavicons)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* mozIPlacesPendingOperation setAndFetchFaviconForPage (in nsIURI aPageURI, in nsIURI aFaviconURI, in boolean aForceReload, in unsigned long aFaviconLoadType, [optional] in nsIFaviconDataCallback aCallback, [optional] in nsIPrincipal aLoadingPrincipal); */
NS_IMETHODIMP _MYCLASS_::SetAndFetchFaviconForPage(nsIURI *aPageURI, nsIURI *aFaviconURI, bool aForceReload, uint32_t aFaviconLoadType, nsIFaviconDataCallback *aCallback, nsIPrincipal *aLoadingPrincipal, mozIPlacesPendingOperation * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void replaceFaviconData (in nsIURI aFaviconURI, [array, size_is (aDataLen), const] in octet aData, in unsigned long aDataLen, in AUTF8String aMimeType, [optional] in PRTime aExpiration); */
NS_IMETHODIMP _MYCLASS_::ReplaceFaviconData(nsIURI *aFaviconURI, const uint8_t *aData, uint32_t aDataLen, const nsACString & aMimeType, PRTime aExpiration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void replaceFaviconDataFromDataURL (in nsIURI aFaviconURI, in AString aDataURL, [optional] in PRTime aExpiration, [optional] in nsIPrincipal aLoadingPrincipal); */
NS_IMETHODIMP _MYCLASS_::ReplaceFaviconDataFromDataURL(nsIURI *aFaviconURI, const nsAString & aDataURL, PRTime aExpiration, nsIPrincipal *aLoadingPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getFaviconURLForPage (in nsIURI aPageURI, in nsIFaviconDataCallback aCallback); */
NS_IMETHODIMP _MYCLASS_::GetFaviconURLForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getFaviconDataForPage (in nsIURI aPageURI, in nsIFaviconDataCallback aCallback); */
NS_IMETHODIMP _MYCLASS_::GetFaviconDataForPage(nsIURI *aPageURI, nsIFaviconDataCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_mozIAsyncFavicons_h__ */
