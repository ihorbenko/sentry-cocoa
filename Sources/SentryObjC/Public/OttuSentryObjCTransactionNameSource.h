#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, OttuSentryObjCTransactionNameSource) {
    OttuSentryObjCTransactionNameSourceCustom = 0,
    OttuSentryObjCTransactionNameSourceUrl,
    OttuSentryObjCTransactionNameSourceRoute,
    OttuSentryObjCTransactionNameSourceView,
    OttuSentryObjCTransactionNameSourceComponent,
    OttuSentryObjCTransactionNameSourceTask
};
