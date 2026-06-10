#import <Foundation/Foundation.h>
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCDefines.h"
#    import "OttuSentryObjCSampleDecision.h"
#else
#    import <SentryObjC/OttuSentryObjCDefines.h>
#    import <SentryObjC/OttuSentryObjCSampleDecision.h>
#endif

@class OttuSentryObjCId;
@class OttuSentryObjCSpanId;

NS_ASSUME_NONNULL_BEGIN

/**
 * Represents the @c sentry-trace HTTP header value used for distributed tracing.
 * Contains the trace id, span id, and sampling decision.
 */
@interface OttuSentryObjCTraceHeader : NSObject
SENTRY_NO_INIT

/// The trace ID.
@property (nonatomic, readonly, strong) OttuSentryObjCId *traceId;

/// The span ID.
@property (nonatomic, readonly, strong) OttuSentryObjCSpanId *spanId;

/// The trace sample decision.
@property (nonatomic, readonly) OttuSentryObjCSampleDecision sampled;

/**
 * @param traceId The trace id.
 * @param spanId The span id.
 * @param sampled The decision made to sample the trace related to this header.
 */
- (instancetype)initWithTraceId:(OttuSentryObjCId *)traceId
                         spanId:(OttuSentryObjCSpanId *)spanId
                        sampled:(OttuSentryObjCSampleDecision)sampled;

/// Returns the value to use in a request header.
- (NSString *)value;

@end

NS_ASSUME_NONNULL_END
