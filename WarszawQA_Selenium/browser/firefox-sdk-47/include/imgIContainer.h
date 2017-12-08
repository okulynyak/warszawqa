/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl\imgIContainer.idl
 */

#ifndef __gen_imgIContainer_h__
#define __gen_imgIContainer_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "mozilla/Assertions.h"
#include "mozilla/DebugOnly.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "DrawResult.h"
#include "gfxContext.h"
#include "gfxMatrix.h"
#include "gfxRect.h"
#include "mozilla/gfx/2D.h"
#include "mozilla/Maybe.h"
#include "mozilla/RefPtr.h"
#include "nsRect.h"
#include "nsSize.h"
#include "limits.h"
class nsIDocument;
namespace mozilla {
namespace layers {
class LayerManager;
class ImageContainer;
}
}
class nsIFrame;
namespace mozilla {
class TimeStamp;
class SVGImageContext;
}
namespace mozilla {
namespace image {
class ImageRegion;
struct Orientation;
}
}

/* starting interface:    imgIContainer */
#define IMGICONTAINER_IID_STR "a8dbee24-ff86-4755-b40e-51175caf31af"

#define IMGICONTAINER_IID \
  {0xa8dbee24, 0xff86, 0x4755, \
    { 0xb4, 0x0e, 0x51, 0x17, 0x5c, 0xaf, 0x31, 0xaf }}

class NS_NO_VTABLE imgIContainer : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(IMGICONTAINER_IID)

  /* readonly attribute int32_t width; */
  NS_IMETHOD GetWidth(int32_t *aWidth) = 0;

  /* readonly attribute int32_t height; */
  NS_IMETHOD GetHeight(int32_t *aHeight) = 0;

  /* [noscript] readonly attribute nsSize intrinsicSize; */
  NS_IMETHOD GetIntrinsicSize(nsSize *aIntrinsicSize) = 0;

  /* [noscript] readonly attribute nsSize intrinsicRatio; */
  NS_IMETHOD GetIntrinsicRatio(nsSize *aIntrinsicRatio) = 0;

  /* [nostdcall,notxpcom] nsIntSizeByVal optimalImageSizeForDest ([const] in gfxSize aDest, in uint32_t aWhichFrame, in Filter aFilter, in uint32_t aFlags); */
  virtual nsIntSize OptimalImageSizeForDest(const gfxSize & aDest, uint32_t aWhichFrame, mozilla::gfx::Filter aFilter, uint32_t aFlags) = 0;

  enum {
    TYPE_RASTER = 0U,
    TYPE_VECTOR = 1U
  };

  /* [infallible] readonly attribute unsigned short type; */
  NS_IMETHOD GetType(uint16_t *aType) = 0;
  inline uint16_t GetType()
  {
    uint16_t result;
    mozilla::DebugOnly<nsresult> rv = GetType(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* readonly attribute boolean animated; */
  NS_IMETHOD GetAnimated(bool *aAnimated) = 0;

  enum {
    FLAG_NONE = 0U,
    FLAG_SYNC_DECODE = 1U,
    FLAG_SYNC_DECODE_IF_FAST = 2U,
    FLAG_ASYNC_NOTIFY = 4U,
    FLAG_DECODE_NO_PREMULTIPLY_ALPHA = 8U,
    FLAG_DECODE_NO_COLORSPACE_CONVERSION = 16U,
    FLAG_CLAMP = 32U,
    FLAG_HIGH_QUALITY_SCALING = 64U,
    FLAG_WANT_DATA_SURFACE = 128U,
    FLAG_BYPASS_SURFACE_CACHE = 256U,
    DECODE_FLAGS_DEFAULT = 0U,
    FRAME_FIRST = 0U,
    FRAME_CURRENT = 1U,
    FRAME_MAX_VALUE = 1U
  };

  /* [noscript,notxpcom] TempRefSourceSurface getFrame (in uint32_t aWhichFrame, in uint32_t aFlags); */
  NS_IMETHOD_(already_AddRefed<mozilla::gfx::SourceSurface>) GetFrame(uint32_t aWhichFrame, uint32_t aFlags) = 0;

  /* [noscript,notxpcom] TempRefSourceSurface getFrameAtSize ([const] in nsIntSize aSize, in uint32_t aWhichFrame, in uint32_t aFlags); */
  NS_IMETHOD_(already_AddRefed<mozilla::gfx::SourceSurface>) GetFrameAtSize(const nsIntSize & aSize, uint32_t aWhichFrame, uint32_t aFlags) = 0;

  /* [notxpcom] boolean isOpaque (); */
  NS_IMETHOD_(bool) IsOpaque(void) = 0;

  /* [noscript,notxpcom] boolean isImageContainerAvailable (in LayerManager aManager, in uint32_t aFlags); */
  NS_IMETHOD_(bool) IsImageContainerAvailable(mozilla::layers::LayerManager *aManager, uint32_t aFlags) = 0;

  /* [noscript,notxpcom] TempRefImageContainer getImageContainer (in LayerManager aManager, in uint32_t aFlags); */
  NS_IMETHOD_(already_AddRefed<mozilla::layers::ImageContainer>) GetImageContainer(mozilla::layers::LayerManager *aManager, uint32_t aFlags) = 0;

  /* [noscript,notxpcom] DrawResult draw (in gfxContext aContext, [const] in nsIntSize aSize, [const] in ImageRegion aRegion, in uint32_t aWhichFrame, in Filter aFilter, [const] in MaybeSVGImageContext aSVGContext, in uint32_t aFlags); */
  NS_IMETHOD_(mozilla::image::DrawResult) Draw(gfxContext *aContext, const nsIntSize & aSize, const mozilla::image::ImageRegion & aRegion, uint32_t aWhichFrame, mozilla::gfx::Filter aFilter, const mozilla::Maybe<mozilla::SVGImageContext> & aSVGContext, uint32_t aFlags) = 0;

  /* [noscript] void startDecoding (); */
  NS_IMETHOD StartDecoding(void) = 0;

  /* [noscript] void requestDecodeForSize ([const] in nsIntSize aSize, in uint32_t aFlags); */
  NS_IMETHOD RequestDecodeForSize(const nsIntSize & aSize, uint32_t aFlags) = 0;

  /* void lockImage (); */
  NS_IMETHOD LockImage(void) = 0;

  /* void unlockImage (); */
  NS_IMETHOD UnlockImage(void) = 0;

  /* void requestDiscard (); */
  NS_IMETHOD RequestDiscard(void) = 0;

  /* [notxpcom] void requestRefresh ([const] in TimeStamp aTime); */
  NS_IMETHOD_(void) RequestRefresh(const mozilla::TimeStamp & aTime) = 0;

  enum {
    kNormalAnimMode = 0,
    kDontAnimMode = 1,
    kLoopOnceAnimMode = 2
  };

  /* attribute unsigned short animationMode; */
  NS_IMETHOD GetAnimationMode(uint16_t *aAnimationMode) = 0;
  NS_IMETHOD SetAnimationMode(uint16_t aAnimationMode) = 0;

  /* void resetAnimation (); */
  NS_IMETHOD ResetAnimation(void) = 0;

  /* [notxpcom] float getFrameIndex (in uint32_t aWhichFrame); */
  NS_IMETHOD_(float) GetFrameIndex(uint32_t aWhichFrame) = 0;

  /* [notxpcom] Orientation getOrientation (); */
  NS_IMETHOD_(mozilla::image::Orientation) GetOrientation(void) = 0;

  /* [notxpcom] int32_t getFirstFrameDelay (); */
  NS_IMETHOD_(int32_t) GetFirstFrameDelay(void) = 0;

  /* [notxpcom] void setAnimationStartTime ([const] in TimeStamp aTime); */
  NS_IMETHOD_(void) SetAnimationStartTime(const mozilla::TimeStamp & aTime) = 0;

  /* [notxpcom] nsIntRectByVal getImageSpaceInvalidationRect ([const] in nsIntRect aRect); */
  NS_IMETHOD_(nsIntRect) GetImageSpaceInvalidationRect(const nsIntRect & aRect) = 0;

  /* [nostdcall,notxpcom] TempRefImgIContainer unwrap (); */
  virtual already_AddRefed<imgIContainer> Unwrap(void) = 0;

  /* [noscript,notxpcom] void propagateUseCounters (in nsIDocument aDocument); */
  NS_IMETHOD_(void) PropagateUseCounters(nsIDocument *aDocument) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(imgIContainer, IMGICONTAINER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IMGICONTAINER \
  NS_IMETHOD GetWidth(int32_t *aWidth) override; \
  NS_IMETHOD GetHeight(int32_t *aHeight) override; \
  NS_IMETHOD GetIntrinsicSize(nsSize *aIntrinsicSize) override; \
  NS_IMETHOD GetIntrinsicRatio(nsSize *aIntrinsicRatio) override; \
  virtual nsIntSize OptimalImageSizeForDest(const gfxSize & aDest, uint32_t aWhichFrame, mozilla::gfx::Filter aFilter, uint32_t aFlags) override; \
  using imgIContainer::GetType; \
  NS_IMETHOD GetType(uint16_t *aType) override; \
  NS_IMETHOD GetAnimated(bool *aAnimated) override; \
  NS_IMETHOD_(already_AddRefed<mozilla::gfx::SourceSurface>) GetFrame(uint32_t aWhichFrame, uint32_t aFlags) override; \
  NS_IMETHOD_(already_AddRefed<mozilla::gfx::SourceSurface>) GetFrameAtSize(const nsIntSize & aSize, uint32_t aWhichFrame, uint32_t aFlags) override; \
  NS_IMETHOD_(bool) IsOpaque(void) override; \
  NS_IMETHOD_(bool) IsImageContainerAvailable(mozilla::layers::LayerManager *aManager, uint32_t aFlags) override; \
  NS_IMETHOD_(already_AddRefed<mozilla::layers::ImageContainer>) GetImageContainer(mozilla::layers::LayerManager *aManager, uint32_t aFlags) override; \
  NS_IMETHOD_(mozilla::image::DrawResult) Draw(gfxContext *aContext, const nsIntSize & aSize, const mozilla::image::ImageRegion & aRegion, uint32_t aWhichFrame, mozilla::gfx::Filter aFilter, const mozilla::Maybe<mozilla::SVGImageContext> & aSVGContext, uint32_t aFlags) override; \
  NS_IMETHOD StartDecoding(void) override; \
  NS_IMETHOD RequestDecodeForSize(const nsIntSize & aSize, uint32_t aFlags) override; \
  NS_IMETHOD LockImage(void) override; \
  NS_IMETHOD UnlockImage(void) override; \
  NS_IMETHOD RequestDiscard(void) override; \
  NS_IMETHOD_(void) RequestRefresh(const mozilla::TimeStamp & aTime) override; \
  NS_IMETHOD GetAnimationMode(uint16_t *aAnimationMode) override; \
  NS_IMETHOD SetAnimationMode(uint16_t aAnimationMode) override; \
  NS_IMETHOD ResetAnimation(void) override; \
  NS_IMETHOD_(float) GetFrameIndex(uint32_t aWhichFrame) override; \
  NS_IMETHOD_(mozilla::image::Orientation) GetOrientation(void) override; \
  NS_IMETHOD_(int32_t) GetFirstFrameDelay(void) override; \
  NS_IMETHOD_(void) SetAnimationStartTime(const mozilla::TimeStamp & aTime) override; \
  NS_IMETHOD_(nsIntRect) GetImageSpaceInvalidationRect(const nsIntRect & aRect) override; \
  virtual already_AddRefed<imgIContainer> Unwrap(void) override; \
  NS_IMETHOD_(void) PropagateUseCounters(nsIDocument *aDocument) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_IMGICONTAINER \
  NS_METHOD GetWidth(int32_t *aWidth); \
  NS_METHOD GetHeight(int32_t *aHeight); \
  NS_METHOD GetIntrinsicSize(nsSize *aIntrinsicSize); \
  NS_METHOD GetIntrinsicRatio(nsSize *aIntrinsicRatio); \
  nsIntSize OptimalImageSizeForDest(const gfxSize & aDest, uint32_t aWhichFrame, mozilla::gfx::Filter aFilter, uint32_t aFlags); \
  using imgIContainer::GetType; \
  NS_METHOD GetType(uint16_t *aType); \
  NS_METHOD GetAnimated(bool *aAnimated); \
  NS_METHOD_(already_AddRefed<mozilla::gfx::SourceSurface>) GetFrame(uint32_t aWhichFrame, uint32_t aFlags); \
  NS_METHOD_(already_AddRefed<mozilla::gfx::SourceSurface>) GetFrameAtSize(const nsIntSize & aSize, uint32_t aWhichFrame, uint32_t aFlags); \
  NS_METHOD_(bool) IsOpaque(void); \
  NS_METHOD_(bool) IsImageContainerAvailable(mozilla::layers::LayerManager *aManager, uint32_t aFlags); \
  NS_METHOD_(already_AddRefed<mozilla::layers::ImageContainer>) GetImageContainer(mozilla::layers::LayerManager *aManager, uint32_t aFlags); \
  NS_METHOD_(mozilla::image::DrawResult) Draw(gfxContext *aContext, const nsIntSize & aSize, const mozilla::image::ImageRegion & aRegion, uint32_t aWhichFrame, mozilla::gfx::Filter aFilter, const mozilla::Maybe<mozilla::SVGImageContext> & aSVGContext, uint32_t aFlags); \
  NS_METHOD StartDecoding(void); \
  NS_METHOD RequestDecodeForSize(const nsIntSize & aSize, uint32_t aFlags); \
  NS_METHOD LockImage(void); \
  NS_METHOD UnlockImage(void); \
  NS_METHOD RequestDiscard(void); \
  NS_METHOD_(void) RequestRefresh(const mozilla::TimeStamp & aTime); \
  NS_METHOD GetAnimationMode(uint16_t *aAnimationMode); \
  NS_METHOD SetAnimationMode(uint16_t aAnimationMode); \
  NS_METHOD ResetAnimation(void); \
  NS_METHOD_(float) GetFrameIndex(uint32_t aWhichFrame); \
  NS_METHOD_(mozilla::image::Orientation) GetOrientation(void); \
  NS_METHOD_(int32_t) GetFirstFrameDelay(void); \
  NS_METHOD_(void) SetAnimationStartTime(const mozilla::TimeStamp & aTime); \
  NS_METHOD_(nsIntRect) GetImageSpaceInvalidationRect(const nsIntRect & aRect); \
  already_AddRefed<imgIContainer> Unwrap(void); \
  NS_METHOD_(void) PropagateUseCounters(nsIDocument *aDocument); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IMGICONTAINER(_to) \
  NS_IMETHOD GetWidth(int32_t *aWidth) override { return _to GetWidth(aWidth); } \
  NS_IMETHOD GetHeight(int32_t *aHeight) override { return _to GetHeight(aHeight); } \
  NS_IMETHOD GetIntrinsicSize(nsSize *aIntrinsicSize) override { return _to GetIntrinsicSize(aIntrinsicSize); } \
  NS_IMETHOD GetIntrinsicRatio(nsSize *aIntrinsicRatio) override { return _to GetIntrinsicRatio(aIntrinsicRatio); } \
  virtual nsIntSize OptimalImageSizeForDest(const gfxSize & aDest, uint32_t aWhichFrame, mozilla::gfx::Filter aFilter, uint32_t aFlags) override { return _to OptimalImageSizeForDest(aDest, aWhichFrame, aFilter, aFlags); } \
  using imgIContainer::GetType; \
  NS_IMETHOD GetType(uint16_t *aType) override { return _to GetType(aType); } \
  NS_IMETHOD GetAnimated(bool *aAnimated) override { return _to GetAnimated(aAnimated); } \
  NS_IMETHOD_(already_AddRefed<mozilla::gfx::SourceSurface>) GetFrame(uint32_t aWhichFrame, uint32_t aFlags) override { return _to GetFrame(aWhichFrame, aFlags); } \
  NS_IMETHOD_(already_AddRefed<mozilla::gfx::SourceSurface>) GetFrameAtSize(const nsIntSize & aSize, uint32_t aWhichFrame, uint32_t aFlags) override { return _to GetFrameAtSize(aSize, aWhichFrame, aFlags); } \
  NS_IMETHOD_(bool) IsOpaque(void) override { return _to IsOpaque(); } \
  NS_IMETHOD_(bool) IsImageContainerAvailable(mozilla::layers::LayerManager *aManager, uint32_t aFlags) override { return _to IsImageContainerAvailable(aManager, aFlags); } \
  NS_IMETHOD_(already_AddRefed<mozilla::layers::ImageContainer>) GetImageContainer(mozilla::layers::LayerManager *aManager, uint32_t aFlags) override { return _to GetImageContainer(aManager, aFlags); } \
  NS_IMETHOD_(mozilla::image::DrawResult) Draw(gfxContext *aContext, const nsIntSize & aSize, const mozilla::image::ImageRegion & aRegion, uint32_t aWhichFrame, mozilla::gfx::Filter aFilter, const mozilla::Maybe<mozilla::SVGImageContext> & aSVGContext, uint32_t aFlags) override { return _to Draw(aContext, aSize, aRegion, aWhichFrame, aFilter, aSVGContext, aFlags); } \
  NS_IMETHOD StartDecoding(void) override { return _to StartDecoding(); } \
  NS_IMETHOD RequestDecodeForSize(const nsIntSize & aSize, uint32_t aFlags) override { return _to RequestDecodeForSize(aSize, aFlags); } \
  NS_IMETHOD LockImage(void) override { return _to LockImage(); } \
  NS_IMETHOD UnlockImage(void) override { return _to UnlockImage(); } \
  NS_IMETHOD RequestDiscard(void) override { return _to RequestDiscard(); } \
  NS_IMETHOD_(void) RequestRefresh(const mozilla::TimeStamp & aTime) override { return _to RequestRefresh(aTime); } \
  NS_IMETHOD GetAnimationMode(uint16_t *aAnimationMode) override { return _to GetAnimationMode(aAnimationMode); } \
  NS_IMETHOD SetAnimationMode(uint16_t aAnimationMode) override { return _to SetAnimationMode(aAnimationMode); } \
  NS_IMETHOD ResetAnimation(void) override { return _to ResetAnimation(); } \
  NS_IMETHOD_(float) GetFrameIndex(uint32_t aWhichFrame) override { return _to GetFrameIndex(aWhichFrame); } \
  NS_IMETHOD_(mozilla::image::Orientation) GetOrientation(void) override { return _to GetOrientation(); } \
  NS_IMETHOD_(int32_t) GetFirstFrameDelay(void) override { return _to GetFirstFrameDelay(); } \
  NS_IMETHOD_(void) SetAnimationStartTime(const mozilla::TimeStamp & aTime) override { return _to SetAnimationStartTime(aTime); } \
  NS_IMETHOD_(nsIntRect) GetImageSpaceInvalidationRect(const nsIntRect & aRect) override { return _to GetImageSpaceInvalidationRect(aRect); } \
  virtual already_AddRefed<imgIContainer> Unwrap(void) override { return _to Unwrap(); } \
  NS_IMETHOD_(void) PropagateUseCounters(nsIDocument *aDocument) override { return _to PropagateUseCounters(aDocument); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IMGICONTAINER(_to) \
  NS_IMETHOD GetWidth(int32_t *aWidth) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWidth(aWidth); } \
  NS_IMETHOD GetHeight(int32_t *aHeight) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeight(aHeight); } \
  NS_IMETHOD GetIntrinsicSize(nsSize *aIntrinsicSize) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIntrinsicSize(aIntrinsicSize); } \
  NS_IMETHOD GetIntrinsicRatio(nsSize *aIntrinsicRatio) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIntrinsicRatio(aIntrinsicRatio); } \
  virtual nsIntSize OptimalImageSizeForDest(const gfxSize & aDest, uint32_t aWhichFrame, mozilla::gfx::Filter aFilter, uint32_t aFlags) override; \
  NS_IMETHOD GetType(uint16_t *aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetAnimated(bool *aAnimated) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnimated(aAnimated); } \
  NS_IMETHOD_(already_AddRefed<mozilla::gfx::SourceSurface>) GetFrame(uint32_t aWhichFrame, uint32_t aFlags) override; \
  NS_IMETHOD_(already_AddRefed<mozilla::gfx::SourceSurface>) GetFrameAtSize(const nsIntSize & aSize, uint32_t aWhichFrame, uint32_t aFlags) override; \
  NS_IMETHOD_(bool) IsOpaque(void) override; \
  NS_IMETHOD_(bool) IsImageContainerAvailable(mozilla::layers::LayerManager *aManager, uint32_t aFlags) override; \
  NS_IMETHOD_(already_AddRefed<mozilla::layers::ImageContainer>) GetImageContainer(mozilla::layers::LayerManager *aManager, uint32_t aFlags) override; \
  NS_IMETHOD_(mozilla::image::DrawResult) Draw(gfxContext *aContext, const nsIntSize & aSize, const mozilla::image::ImageRegion & aRegion, uint32_t aWhichFrame, mozilla::gfx::Filter aFilter, const mozilla::Maybe<mozilla::SVGImageContext> & aSVGContext, uint32_t aFlags) override; \
  NS_IMETHOD StartDecoding(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StartDecoding(); } \
  NS_IMETHOD RequestDecodeForSize(const nsIntSize & aSize, uint32_t aFlags) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestDecodeForSize(aSize, aFlags); } \
  NS_IMETHOD LockImage(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->LockImage(); } \
  NS_IMETHOD UnlockImage(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnlockImage(); } \
  NS_IMETHOD RequestDiscard(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestDiscard(); } \
  NS_IMETHOD_(void) RequestRefresh(const mozilla::TimeStamp & aTime) override; \
  NS_IMETHOD GetAnimationMode(uint16_t *aAnimationMode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnimationMode(aAnimationMode); } \
  NS_IMETHOD SetAnimationMode(uint16_t aAnimationMode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAnimationMode(aAnimationMode); } \
  NS_IMETHOD ResetAnimation(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ResetAnimation(); } \
  NS_IMETHOD_(float) GetFrameIndex(uint32_t aWhichFrame) override; \
  NS_IMETHOD_(mozilla::image::Orientation) GetOrientation(void) override; \
  NS_IMETHOD_(int32_t) GetFirstFrameDelay(void) override; \
  NS_IMETHOD_(void) SetAnimationStartTime(const mozilla::TimeStamp & aTime) override; \
  NS_IMETHOD_(nsIntRect) GetImageSpaceInvalidationRect(const nsIntRect & aRect) override; \
  virtual already_AddRefed<imgIContainer> Unwrap(void) override; \
  NS_IMETHOD_(void) PropagateUseCounters(nsIDocument *aDocument) override; 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public imgIContainer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IMGICONTAINER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(_MYCLASS_, imgIContainer)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* readonly attribute int32_t width; */
NS_IMETHODIMP _MYCLASS_::GetWidth(int32_t *aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int32_t height; */
NS_IMETHODIMP _MYCLASS_::GetHeight(int32_t *aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsSize intrinsicSize; */
NS_IMETHODIMP _MYCLASS_::GetIntrinsicSize(nsSize *aIntrinsicSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsSize intrinsicRatio; */
NS_IMETHODIMP _MYCLASS_::GetIntrinsicRatio(nsSize *aIntrinsicRatio)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [nostdcall,notxpcom] nsIntSizeByVal optimalImageSizeForDest ([const] in gfxSize aDest, in uint32_t aWhichFrame, in Filter aFilter, in uint32_t aFlags); */
nsIntSize _MYCLASS_::OptimalImageSizeForDest(const gfxSize & aDest, uint32_t aWhichFrame, mozilla::gfx::Filter aFilter, uint32_t aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] readonly attribute unsigned short type; */
NS_IMETHODIMP _MYCLASS_::GetType(uint16_t *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean animated; */
NS_IMETHODIMP _MYCLASS_::GetAnimated(bool *aAnimated)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] TempRefSourceSurface getFrame (in uint32_t aWhichFrame, in uint32_t aFlags); */
NS_IMETHODIMP_(already_AddRefed<mozilla::gfx::SourceSurface>) _MYCLASS_::GetFrame(uint32_t aWhichFrame, uint32_t aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] TempRefSourceSurface getFrameAtSize ([const] in nsIntSize aSize, in uint32_t aWhichFrame, in uint32_t aFlags); */
NS_IMETHODIMP_(already_AddRefed<mozilla::gfx::SourceSurface>) _MYCLASS_::GetFrameAtSize(const nsIntSize & aSize, uint32_t aWhichFrame, uint32_t aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] boolean isOpaque (); */
NS_IMETHODIMP_(bool) _MYCLASS_::IsOpaque()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] boolean isImageContainerAvailable (in LayerManager aManager, in uint32_t aFlags); */
NS_IMETHODIMP_(bool) _MYCLASS_::IsImageContainerAvailable(mozilla::layers::LayerManager *aManager, uint32_t aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] TempRefImageContainer getImageContainer (in LayerManager aManager, in uint32_t aFlags); */
NS_IMETHODIMP_(already_AddRefed<mozilla::layers::ImageContainer>) _MYCLASS_::GetImageContainer(mozilla::layers::LayerManager *aManager, uint32_t aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] DrawResult draw (in gfxContext aContext, [const] in nsIntSize aSize, [const] in ImageRegion aRegion, in uint32_t aWhichFrame, in Filter aFilter, [const] in MaybeSVGImageContext aSVGContext, in uint32_t aFlags); */
NS_IMETHODIMP_(mozilla::image::DrawResult) _MYCLASS_::Draw(gfxContext *aContext, const nsIntSize & aSize, const mozilla::image::ImageRegion & aRegion, uint32_t aWhichFrame, mozilla::gfx::Filter aFilter, const mozilla::Maybe<mozilla::SVGImageContext> & aSVGContext, uint32_t aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void startDecoding (); */
NS_IMETHODIMP _MYCLASS_::StartDecoding()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void requestDecodeForSize ([const] in nsIntSize aSize, in uint32_t aFlags); */
NS_IMETHODIMP _MYCLASS_::RequestDecodeForSize(const nsIntSize & aSize, uint32_t aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void lockImage (); */
NS_IMETHODIMP _MYCLASS_::LockImage()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unlockImage (); */
NS_IMETHODIMP _MYCLASS_::UnlockImage()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void requestDiscard (); */
NS_IMETHODIMP _MYCLASS_::RequestDiscard()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] void requestRefresh ([const] in TimeStamp aTime); */
NS_IMETHODIMP_(void) _MYCLASS_::RequestRefresh(const mozilla::TimeStamp & aTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned short animationMode; */
NS_IMETHODIMP _MYCLASS_::GetAnimationMode(uint16_t *aAnimationMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetAnimationMode(uint16_t aAnimationMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resetAnimation (); */
NS_IMETHODIMP _MYCLASS_::ResetAnimation()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] float getFrameIndex (in uint32_t aWhichFrame); */
NS_IMETHODIMP_(float) _MYCLASS_::GetFrameIndex(uint32_t aWhichFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] Orientation getOrientation (); */
NS_IMETHODIMP_(mozilla::image::Orientation) _MYCLASS_::GetOrientation()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] int32_t getFirstFrameDelay (); */
NS_IMETHODIMP_(int32_t) _MYCLASS_::GetFirstFrameDelay()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] void setAnimationStartTime ([const] in TimeStamp aTime); */
NS_IMETHODIMP_(void) _MYCLASS_::SetAnimationStartTime(const mozilla::TimeStamp & aTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] nsIntRectByVal getImageSpaceInvalidationRect ([const] in nsIntRect aRect); */
NS_IMETHODIMP_(nsIntRect) _MYCLASS_::GetImageSpaceInvalidationRect(const nsIntRect & aRect)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [nostdcall,notxpcom] TempRefImgIContainer unwrap (); */
already_AddRefed<imgIContainer> _MYCLASS_::Unwrap()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] void propagateUseCounters (in nsIDocument aDocument); */
NS_IMETHODIMP_(void) _MYCLASS_::PropagateUseCounters(nsIDocument *aDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_imgIContainer_h__ */
