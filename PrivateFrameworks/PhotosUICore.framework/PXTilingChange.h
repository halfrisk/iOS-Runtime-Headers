/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingChange : NSObject {
    NSArray * _compositionInvalidationContexts;
    NSMutableArray * _events;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _initialContentInset;
    PXTilingLayout * _initialLayout;
    struct CGSize { 
        float width; 
        float height; 
    }  _initialReferenceSize;
}

@property (nonatomic, readonly, copy) NSArray *compositionInvalidationContexts;
@property (nonatomic, readonly) BOOL coordinateSpaceDidChange;
@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } fromContentInset;
@property (nonatomic, readonly) PXTilingLayout *fromLayout;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } fromReferenceSize;
@property (getter=isIdentity, nonatomic, readonly) BOOL identity;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } initialContentInset;
@property (nonatomic, readonly) PXTilingLayout *initialLayout;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } initialReferenceSize;
@property (nonatomic, readonly) NSArray *invalidationContexts;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } toContentInset;
@property (nonatomic, readonly) PXTilingLayout *toLayout;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } toReferenceSize;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (id)compositionInvalidationContexts;
- (BOOL)coordinateSpaceDidChange;
- (id)defaultAnimationOptionsForTilingController:(id)arg1;
- (id)description;
- (id)events;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })fromContentInset;
- (id)fromLayout;
- (struct CGSize { float x1; float x2; })fromReferenceSize;
- (id)init;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })initialContentInset;
- (id)initialLayout;
- (struct CGSize { float x1; float x2; })initialReferenceSize;
- (id)invalidationContexts;
- (BOOL)isIdentity;
- (void)recordCompositionInvalidationContexts:(id)arg1;
- (void)recordContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)recordLayout:(id)arg1;
- (void)recordReferenceSize:(struct CGSize { float x1; float x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })toContentInset;
- (id)toLayout;
- (struct CGSize { float x1; float x2; })toReferenceSize;

@end