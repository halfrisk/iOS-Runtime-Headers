/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISVisibilityOffsetHelper : NSObject <ISVisibilityOffsetComputer> {
    UIScrollView * __scrollView;
    struct CGPoint { 
        float x; 
        float y; 
    }  __targetContentOffset;
    int  _direction;
    float  _maximumDistance;
    float  _maximumDistanceLag;
}

@property (setter=_setScrollView:, nonatomic, retain) UIScrollView *_scrollView;
@property (setter=_setTargetContentOffset:, nonatomic) struct CGPoint { float x1; float x2; } _targetContentOffset;
@property (nonatomic) int direction;
@property (nonatomic) float maximumDistance;
@property (nonatomic) float maximumDistanceLag;

- (void).cxx_destruct;
- (id)_scrollView;
- (void)_setScrollView:(id)arg1;
- (void)_setTargetContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_targetContentOffset;
- (void)_updateDirectionIfNeeded;
- (struct ISVisibilityRange { double x1; double x2; })_visibilityRangeForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForView:(struct NSObject { Class x1; }*)arg1 inScrollView:(struct NSObject { Class x1; }*)arg2;
- (void)computeVisibilityOffsetsInScrollView:(id)arg1 withTargetContentOffset:(struct CGPoint { float x1; float x2; })arg2 usingBlock:(id /* block */)arg3;
- (int)direction;
- (void)getVisibility:(BOOL*)arg1 offset:(double*)arg2 targetVisibilityOffset:(double*)arg3 forView:(struct NSObject { Class x1; }*)arg4;
- (float)maximumDistance;
- (float)maximumDistanceLag;
- (void)setDirection:(int)arg1;
- (void)setMaximumDistance:(float)arg1;
- (void)setMaximumDistanceLag:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectForScrollView:(struct NSObject { Class x1; }*)arg1;

@end
