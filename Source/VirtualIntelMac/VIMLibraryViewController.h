#import <Cocoa/Cocoa.h>
@class VIMMachine;

NS_ASSUME_NONNULL_BEGIN
@interface VIMLibraryViewController : NSViewController
@property(nonatomic, readonly, nullable) VIMMachine *selectedMachine;
@property(nonatomic, readonly) BOOL compact;
@property(nonatomic, readonly) NSString *arrangement;
- (void)reloadLibrary;
- (void)showLibrary;
- (void)openExistingMac:(nullable id)sender;
- (void)registerPackageURL:(NSURL *)URL;
+ (void)registerPackageURL:(NSURL *)URL;
+ (void)moveMachine:(VIMMachine *)machine window:(nullable NSWindow *)window completion:(nullable void (^)(BOOL success, NSError *_Nullable error))completion;
- (void)moveSelectedMachine:(nullable id)sender;
- (void)setDensityFromMenu:(NSMenuItem *)sender;
- (void)arrangeFromMenu:(NSMenuItem *)sender;
- (void)removeSelectedMachine:(nullable id)sender;
@end
NS_ASSUME_NONNULL_END
