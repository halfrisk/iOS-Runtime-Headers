/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class NSLock, NSMutableArray;

@interface EANotificationCenter : NSObject {
    int (*_callback)();
    void *_context;
    NSMutableArray *_notifications;
    NSLock *_notificationsLock;
    struct __CFRunLoop { } *_runLoopForNotifications;
    struct __CFRunLoopSource { } *_runLoopSource;
}

- (void)_notificationHandler:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)notificationCallback;
- (void)setCallback:(int (*)())arg1 andContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;

@end