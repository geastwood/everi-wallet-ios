//
//  QSOwnedToken.h
//  EVT-Wallet
//
//  Created by 孙俊 on 2018/12/9.
//  Copyright © 2018 HANGZHOU QISHENG TECHNOLOGY CO.LTD. All rights reserved.
//

#import "QSBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface QSOwnedToken : QSBaseModel

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *domain;

@end

NS_ASSUME_NONNULL_END
