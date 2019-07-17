//
//  FaceViewController.h
//  moviiSdk
//
//  Created by Mac on 09/07/2019.
//  Copyright © 2019 mabel-tech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ScanovateImagingHybridLiveness/SNLivenessVC.h>
#import "TransactionResponse.h"

@protocol SMDelegate
@required
-(void)completedWithResult:(Boolean)result andResponse:( TransactionResponse * _Nullable )response;

@end

NS_ASSUME_NONNULL_BEGIN

@interface FaceViewController : UIViewController

- (instancetype)initWithDelegate:(id<SMDelegate>)delegate andDocType:(NSString *)docType;

@end

NS_ASSUME_NONNULL_END
