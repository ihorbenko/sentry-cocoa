#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, OttuSentryObjCLastRunStatus) {
    OttuSentryObjCLastRunStatusUnknown = 0,
    OttuSentryObjCLastRunStatusDidNotCrash,
    OttuSentryObjCLastRunStatusDidCrash
};
