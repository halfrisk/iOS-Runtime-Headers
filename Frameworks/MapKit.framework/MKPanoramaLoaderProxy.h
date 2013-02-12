/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPanorama, MKPanoramaLoader;

@interface MKPanoramaLoaderProxy : NSProxy <MKPanoramaLoadable> {
    MKPanoramaLoader *_loader;
    MKPanorama *_target;
}

@property MKPanoramaLoader *loader;

+ (id)selectorMap;

- (void)forwardInvocation:(id)arg1;
- (NSUInteger)hash;
- (id)initWithTarget:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)loader;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setLoader:(id)arg1;

@end