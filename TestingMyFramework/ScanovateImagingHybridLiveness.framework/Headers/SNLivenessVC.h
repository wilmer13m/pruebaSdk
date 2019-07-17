//
//  SNLivenessVC.h
//  ScanovateSDK
//
//  Created by Nimrod Borochov on 02/01/2018.
//  Copyright © 2018 Scanovate. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SNLivenessVC;

//Cancel
typedef enum {
    SNCancellationRationale_UserCanceled,
    SNCancellationRationale_LivenessFailed,
    SNCancellationRationale_LivenessTimeout,
    SNCancellationRationale_CanNotOpenCamera,
    SNCancellationRationale_AppGoesToBackground,
    SNCancellationRationale_ServerError,
    SNCancellationRationale_ConnectionError,
    SNCancellationRationale_DemoExpired,
}SNLivenessCancellationRationale;


@protocol SNLivenessDelegate
@required
-(void)livenessVC:(SNLivenessVC *)livenessVC succeededWithFaceImage:(UIImage *)faceImage;
-(void)livenessVC:(SNLivenessVC *)livenessVC canceledWithRationale:(SNLivenessCancellationRationale)cancellationRationale optionalFaceImage:(UIImage *)optionalFaceImage;
//-(void)livenessProcessCompleted:(SNLivenessVC *)livenessVC;
@end

@interface SNLivenessVC : UIViewController

//-(instancetype) init __attribute__((unavailable("-init is not a valid initializer for the class SNLivenessVC, Please use initWithURL:secure:token:caseID:")));
//- (instancetype)initWithURL:(NSURL *)url secure:(BOOL)secure token:(NSString *)token caseID:(NSString *)caseID;

-(instancetype) init __attribute__((unavailable("-init is not a valid initializer for the class SNLivenessVC, Please use initWithURL:secure:caseID:")));
- (instancetype)initWithURL:(NSURL *)url secure:(BOOL)secure caseID:(NSString *)caseID;

@property (nonatomic, weak) id <SNLivenessDelegate> delegate;


-(void)setPassiveCheckProgressText:(NSString *)text;
@end
