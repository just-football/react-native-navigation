#import "RNNLayoutInfo.h"
#import "RNNBasePresenter.h"
#import "RNNLeafProtocol.h"

@protocol RNNLayoutProtocol <RNNOptionsDelegate, NSObject, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, UISplitViewControllerDelegate>

@required

@property (nonatomic, retain) RNNBasePresenter* presenter;
@property (nonatomic, retain) RNNLayoutInfo* layoutInfo;
@property (nonatomic, strong) RNNNavigationOptions* options;

- (UIViewController<RNNLeafProtocol, RNNLayoutProtocol> *)getLeafViewController;

@end
