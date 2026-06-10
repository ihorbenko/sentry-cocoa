#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, OttuSentryObjCRedactRegionType) {
    OttuSentryObjCRedactRegionTypeRedact = 0,
    OttuSentryObjCRedactRegionTypeClipOut,
    OttuSentryObjCRedactRegionTypeClipBegin,
    OttuSentryObjCRedactRegionTypeClipEnd,
    OttuSentryObjCRedactRegionTypeRedactSwiftUI
};
