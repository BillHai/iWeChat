//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface GetWCOProductListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *alertDesc; // @dynamic alertDesc;
@property(retain, nonatomic) NSString *alertTitle; // @dynamic alertTitle;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *callCountry; // @dynamic callCountry;
@property(nonatomic) unsigned int cellCount; // @dynamic cellCount;
@property(retain, nonatomic) NSMutableArray *cellList; // @dynamic cellList;
@property(retain, nonatomic) NSString *currentCurrency; // @dynamic currentCurrency;
@property(nonatomic) int isAllowChangeCurrency; // @dynamic isAllowChangeCurrency;
@property(retain, nonatomic) NSString *lastProductId; // @dynamic lastProductId;

@end
