//
//  TransactionResponse.h
//  moviiSdk
//
//  Created by Mac on 11/07/2019.
//  Copyright © 2019 mabel-tech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TransactionResponse : NSObject

@property(strong, nonatomic) NSString *Uid;
@property(strong, nonatomic) NSString *StartingDate;
@property(strong, nonatomic) NSString *CreationDate;
@property(strong, nonatomic) NSString *CreationIP;
@property(strong, nonatomic) NSString *IdNumber;
@property(strong, nonatomic) NSString *FirstName;
@property(strong, nonatomic) NSString *SecondName;
@property(strong, nonatomic) NSString *FirstSurname;
@property(strong, nonatomic) NSString *SecondSurname;
@property(strong, nonatomic) NSString *Gender;
@property(strong, nonatomic) NSString *BirthDate;
@property(strong, nonatomic) NSString *BarcodeText;
@property(strong, nonatomic) NSString *OcrTextSideOne;
@property(strong, nonatomic) NSString *OcrTextSideTwo;
@property(strong, nonatomic) NSString *SideOneWrongAttempts;
@property(strong, nonatomic) NSString *SideTwoWrongAttempts;
@property(strong, nonatomic) NSString *FoundOnAdoAlert;
@property(strong, nonatomic) NSString *adoProjectId;
@property(strong, nonatomic) NSString *TransactionId;
@property(strong, nonatomic) NSString *ProductId;

+ (TransactionResponse *)mapResponseToTransactionObject:(id)responseObject;

@end

NS_ASSUME_NONNULL_END
