#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, OttuSentryObjCSpanStatus) {
    OttuSentryObjCSpanStatusUndefined = 0,
    OttuSentryObjCSpanStatusOk,
    OttuSentryObjCSpanStatusDeadlineExceeded,
    OttuSentryObjCSpanStatusUnauthenticated,
    OttuSentryObjCSpanStatusPermissionDenied,
    OttuSentryObjCSpanStatusNotFound,
    OttuSentryObjCSpanStatusResourceExhausted,
    OttuSentryObjCSpanStatusInvalidArgument,
    OttuSentryObjCSpanStatusUnimplemented,
    OttuSentryObjCSpanStatusUnavailable,
    OttuSentryObjCSpanStatusInternalError,
    OttuSentryObjCSpanStatusUnknownError,
    OttuSentryObjCSpanStatusCancelled,
    OttuSentryObjCSpanStatusAlreadyExists,
    OttuSentryObjCSpanStatusFailedPrecondition,
    OttuSentryObjCSpanStatusAborted,
    OttuSentryObjCSpanStatusOutOfRange,
    OttuSentryObjCSpanStatusDataLoss
};
