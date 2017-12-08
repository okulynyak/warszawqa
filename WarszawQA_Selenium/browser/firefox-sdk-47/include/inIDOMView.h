/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl\inIDOMView.idl
 */

#ifndef __gen_inIDOMView_h__
#define __gen_inIDOMView_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMNode; /* forward declaration */


/* starting interface:    inIDOMView */
#define INIDOMVIEW_IID_STR "fbb67442-27a3-483c-8eb2-29c3eed7514c"

#define INIDOMVIEW_IID \
  {0xfbb67442, 0x27a3, 0x483c, \
    { 0x8e, 0xb2, 0x29, 0xc3, 0xee, 0xd7, 0x51, 0x4c }}

class NS_NO_VTABLE inIDOMView : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(INIDOMVIEW_IID)

  /* attribute nsIDOMNode rootNode; */
  NS_IMETHOD GetRootNode(nsIDOMNode * *aRootNode) = 0;
  NS_IMETHOD SetRootNode(nsIDOMNode *aRootNode) = 0;

  /* attribute boolean showAnonymousContent; */
  NS_IMETHOD GetShowAnonymousContent(bool *aShowAnonymousContent) = 0;
  NS_IMETHOD SetShowAnonymousContent(bool aShowAnonymousContent) = 0;

  /* attribute boolean showSubDocuments; */
  NS_IMETHOD GetShowSubDocuments(bool *aShowSubDocuments) = 0;
  NS_IMETHOD SetShowSubDocuments(bool aShowSubDocuments) = 0;

  /* attribute boolean showWhitespaceNodes; */
  NS_IMETHOD GetShowWhitespaceNodes(bool *aShowWhitespaceNodes) = 0;
  NS_IMETHOD SetShowWhitespaceNodes(bool aShowWhitespaceNodes) = 0;

  /* attribute boolean showAccessibleNodes; */
  NS_IMETHOD GetShowAccessibleNodes(bool *aShowAccessibleNodes) = 0;
  NS_IMETHOD SetShowAccessibleNodes(bool aShowAccessibleNodes) = 0;

  /* attribute unsigned long whatToShow; */
  NS_IMETHOD GetWhatToShow(uint32_t *aWhatToShow) = 0;
  NS_IMETHOD SetWhatToShow(uint32_t aWhatToShow) = 0;

  /* nsIDOMNode getNodeFromRowIndex (in long rowIndex); */
  NS_IMETHOD GetNodeFromRowIndex(int32_t rowIndex, nsIDOMNode * *_retval) = 0;

  /* long getRowIndexFromNode (in nsIDOMNode node); */
  NS_IMETHOD GetRowIndexFromNode(nsIDOMNode *node, int32_t *_retval) = 0;

  /* void rebuild (); */
  NS_IMETHOD Rebuild(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(inIDOMView, INIDOMVIEW_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_INIDOMVIEW \
  NS_IMETHOD GetRootNode(nsIDOMNode * *aRootNode) override; \
  NS_IMETHOD SetRootNode(nsIDOMNode *aRootNode) override; \
  NS_IMETHOD GetShowAnonymousContent(bool *aShowAnonymousContent) override; \
  NS_IMETHOD SetShowAnonymousContent(bool aShowAnonymousContent) override; \
  NS_IMETHOD GetShowSubDocuments(bool *aShowSubDocuments) override; \
  NS_IMETHOD SetShowSubDocuments(bool aShowSubDocuments) override; \
  NS_IMETHOD GetShowWhitespaceNodes(bool *aShowWhitespaceNodes) override; \
  NS_IMETHOD SetShowWhitespaceNodes(bool aShowWhitespaceNodes) override; \
  NS_IMETHOD GetShowAccessibleNodes(bool *aShowAccessibleNodes) override; \
  NS_IMETHOD SetShowAccessibleNodes(bool aShowAccessibleNodes) override; \
  NS_IMETHOD GetWhatToShow(uint32_t *aWhatToShow) override; \
  NS_IMETHOD SetWhatToShow(uint32_t aWhatToShow) override; \
  NS_IMETHOD GetNodeFromRowIndex(int32_t rowIndex, nsIDOMNode * *_retval) override; \
  NS_IMETHOD GetRowIndexFromNode(nsIDOMNode *node, int32_t *_retval) override; \
  NS_IMETHOD Rebuild(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_INIDOMVIEW \
  NS_METHOD GetRootNode(nsIDOMNode * *aRootNode); \
  NS_METHOD SetRootNode(nsIDOMNode *aRootNode); \
  NS_METHOD GetShowAnonymousContent(bool *aShowAnonymousContent); \
  NS_METHOD SetShowAnonymousContent(bool aShowAnonymousContent); \
  NS_METHOD GetShowSubDocuments(bool *aShowSubDocuments); \
  NS_METHOD SetShowSubDocuments(bool aShowSubDocuments); \
  NS_METHOD GetShowWhitespaceNodes(bool *aShowWhitespaceNodes); \
  NS_METHOD SetShowWhitespaceNodes(bool aShowWhitespaceNodes); \
  NS_METHOD GetShowAccessibleNodes(bool *aShowAccessibleNodes); \
  NS_METHOD SetShowAccessibleNodes(bool aShowAccessibleNodes); \
  NS_METHOD GetWhatToShow(uint32_t *aWhatToShow); \
  NS_METHOD SetWhatToShow(uint32_t aWhatToShow); \
  NS_METHOD GetNodeFromRowIndex(int32_t rowIndex, nsIDOMNode * *_retval); \
  NS_METHOD GetRowIndexFromNode(nsIDOMNode *node, int32_t *_retval); \
  NS_METHOD Rebuild(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_INIDOMVIEW(_to) \
  NS_IMETHOD GetRootNode(nsIDOMNode * *aRootNode) override { return _to GetRootNode(aRootNode); } \
  NS_IMETHOD SetRootNode(nsIDOMNode *aRootNode) override { return _to SetRootNode(aRootNode); } \
  NS_IMETHOD GetShowAnonymousContent(bool *aShowAnonymousContent) override { return _to GetShowAnonymousContent(aShowAnonymousContent); } \
  NS_IMETHOD SetShowAnonymousContent(bool aShowAnonymousContent) override { return _to SetShowAnonymousContent(aShowAnonymousContent); } \
  NS_IMETHOD GetShowSubDocuments(bool *aShowSubDocuments) override { return _to GetShowSubDocuments(aShowSubDocuments); } \
  NS_IMETHOD SetShowSubDocuments(bool aShowSubDocuments) override { return _to SetShowSubDocuments(aShowSubDocuments); } \
  NS_IMETHOD GetShowWhitespaceNodes(bool *aShowWhitespaceNodes) override { return _to GetShowWhitespaceNodes(aShowWhitespaceNodes); } \
  NS_IMETHOD SetShowWhitespaceNodes(bool aShowWhitespaceNodes) override { return _to SetShowWhitespaceNodes(aShowWhitespaceNodes); } \
  NS_IMETHOD GetShowAccessibleNodes(bool *aShowAccessibleNodes) override { return _to GetShowAccessibleNodes(aShowAccessibleNodes); } \
  NS_IMETHOD SetShowAccessibleNodes(bool aShowAccessibleNodes) override { return _to SetShowAccessibleNodes(aShowAccessibleNodes); } \
  NS_IMETHOD GetWhatToShow(uint32_t *aWhatToShow) override { return _to GetWhatToShow(aWhatToShow); } \
  NS_IMETHOD SetWhatToShow(uint32_t aWhatToShow) override { return _to SetWhatToShow(aWhatToShow); } \
  NS_IMETHOD GetNodeFromRowIndex(int32_t rowIndex, nsIDOMNode * *_retval) override { return _to GetNodeFromRowIndex(rowIndex, _retval); } \
  NS_IMETHOD GetRowIndexFromNode(nsIDOMNode *node, int32_t *_retval) override { return _to GetRowIndexFromNode(node, _retval); } \
  NS_IMETHOD Rebuild(void) override { return _to Rebuild(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_INIDOMVIEW(_to) \
  NS_IMETHOD GetRootNode(nsIDOMNode * *aRootNode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRootNode(aRootNode); } \
  NS_IMETHOD SetRootNode(nsIDOMNode *aRootNode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRootNode(aRootNode); } \
  NS_IMETHOD GetShowAnonymousContent(bool *aShowAnonymousContent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShowAnonymousContent(aShowAnonymousContent); } \
  NS_IMETHOD SetShowAnonymousContent(bool aShowAnonymousContent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetShowAnonymousContent(aShowAnonymousContent); } \
  NS_IMETHOD GetShowSubDocuments(bool *aShowSubDocuments) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShowSubDocuments(aShowSubDocuments); } \
  NS_IMETHOD SetShowSubDocuments(bool aShowSubDocuments) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetShowSubDocuments(aShowSubDocuments); } \
  NS_IMETHOD GetShowWhitespaceNodes(bool *aShowWhitespaceNodes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShowWhitespaceNodes(aShowWhitespaceNodes); } \
  NS_IMETHOD SetShowWhitespaceNodes(bool aShowWhitespaceNodes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetShowWhitespaceNodes(aShowWhitespaceNodes); } \
  NS_IMETHOD GetShowAccessibleNodes(bool *aShowAccessibleNodes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShowAccessibleNodes(aShowAccessibleNodes); } \
  NS_IMETHOD SetShowAccessibleNodes(bool aShowAccessibleNodes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetShowAccessibleNodes(aShowAccessibleNodes); } \
  NS_IMETHOD GetWhatToShow(uint32_t *aWhatToShow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWhatToShow(aWhatToShow); } \
  NS_IMETHOD SetWhatToShow(uint32_t aWhatToShow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWhatToShow(aWhatToShow); } \
  NS_IMETHOD GetNodeFromRowIndex(int32_t rowIndex, nsIDOMNode * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNodeFromRowIndex(rowIndex, _retval); } \
  NS_IMETHOD GetRowIndexFromNode(nsIDOMNode *node, int32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRowIndexFromNode(node, _retval); } \
  NS_IMETHOD Rebuild(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Rebuild(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class inDOMView : public inIDOMView
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_INIDOMVIEW

  inDOMView();

private:
  ~inDOMView();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(inDOMView, inIDOMView)

inDOMView::inDOMView()
{
  /* member initializers and constructor code */
}

inDOMView::~inDOMView()
{
  /* destructor code */
}

/* attribute nsIDOMNode rootNode; */
NS_IMETHODIMP inDOMView::GetRootNode(nsIDOMNode * *aRootNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP inDOMView::SetRootNode(nsIDOMNode *aRootNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean showAnonymousContent; */
NS_IMETHODIMP inDOMView::GetShowAnonymousContent(bool *aShowAnonymousContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP inDOMView::SetShowAnonymousContent(bool aShowAnonymousContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean showSubDocuments; */
NS_IMETHODIMP inDOMView::GetShowSubDocuments(bool *aShowSubDocuments)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP inDOMView::SetShowSubDocuments(bool aShowSubDocuments)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean showWhitespaceNodes; */
NS_IMETHODIMP inDOMView::GetShowWhitespaceNodes(bool *aShowWhitespaceNodes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP inDOMView::SetShowWhitespaceNodes(bool aShowWhitespaceNodes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean showAccessibleNodes; */
NS_IMETHODIMP inDOMView::GetShowAccessibleNodes(bool *aShowAccessibleNodes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP inDOMView::SetShowAccessibleNodes(bool aShowAccessibleNodes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long whatToShow; */
NS_IMETHODIMP inDOMView::GetWhatToShow(uint32_t *aWhatToShow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP inDOMView::SetWhatToShow(uint32_t aWhatToShow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode getNodeFromRowIndex (in long rowIndex); */
NS_IMETHODIMP inDOMView::GetNodeFromRowIndex(int32_t rowIndex, nsIDOMNode * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getRowIndexFromNode (in nsIDOMNode node); */
NS_IMETHODIMP inDOMView::GetRowIndexFromNode(nsIDOMNode *node, int32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void rebuild (); */
NS_IMETHODIMP inDOMView::Rebuild()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_inIDOMView_h__ */
