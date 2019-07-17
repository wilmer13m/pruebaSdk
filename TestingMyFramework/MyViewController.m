//
//  MyViewController.m
//  TestingMyFramework
//
//  Created by Wilmer Mendoza on 7/17/19.
//  Copyright © 2019 Wilmer Mendoza. All rights reserved.
//

#import "MyViewController.h"
#import <SM_SDK/FaceViewController.h>

@interface MyViewController ()
@property (weak, nonatomic) IBOutlet UILabel *messageLabel;

@end

@implementation MyViewController

- (void)viewDidLoad {
    [super viewDidLoad];

}

- (IBAction)startMyAction:(id)sender {
    
    FaceViewController *vc = [[FaceViewController alloc] initWithDelegate: self andDocType:@"1"];
    [self presentViewController:vc animated:YES completion:nil];
    
}


@end
