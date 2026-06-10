#import <Foundation/Foundation.h>
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCDefines.h"
#    import "OttuSentryObjCLogLevel.h"
#else
#    import <SentryObjC/OttuSentryObjCDefines.h>
#    import <SentryObjC/OttuSentryObjCLogLevel.h>
#endif

@class OttuSentryObjCId;
@class OttuSentryObjCSpanId;
@class OttuSentryObjCAttribute;

NS_ASSUME_NONNULL_BEGIN

/**
 * A structured log entry that captures log data with associated attribute metadata.
 *
 * Use the @c options.beforeSendLog callback to modify or filter log data.
 */
@interface OttuSentryObjCLog : NSObject
SENTRY_NO_INIT

/// The timestamp when the log event occurred.
@property (nonatomic, strong) NSDate *timestamp;

/// The trace ID to associate this log with distributed tracing. This will be set to a valid
/// non-empty value during processing.
@property (nonatomic, strong) OttuSentryObjCId *traceId;

/// The span ID of the span that was active when the log was collected.
@property (nonatomic, strong, nullable) OttuSentryObjCSpanId *spanId;

/// The severity level of the log entry.
@property (nonatomic) OttuSentryObjCLogLevel level;

/// The main log message content.
@property (nonatomic, copy) NSString *body;

/// A dictionary of structured attributes added to the log entry.
@property (nonatomic, copy) NSDictionary<NSString *, OttuSentryObjCAttribute *> *attributes;

/// Numeric representation of the severity level.
@property (nonatomic, strong, nullable) NSNumber *severityNumber;

/**
 * Creates a log entry with the specified level and message.
 * @param level The severity level of the log entry.
 * @param body The main log message content.
 */
- (instancetype)initWithLevel:(OttuSentryObjCLogLevel)level body:(NSString *)body;

/**
 * Creates a log entry with the specified level, message, and attributes.
 * @param level The severity level of the log entry.
 * @param body The main log message content.
 * @param attributes A dictionary of structured attributes to add to the log entry.
 */
- (instancetype)initWithLevel:(OttuSentryObjCLogLevel)level
                         body:(NSString *)body
                   attributes:(NSDictionary<NSString *, OttuSentryObjCAttribute *> *)attributes;

/**
 * Adds or updates an attribute in the log entry. Pass @c nil to remove the attribute for the
 * given key.
 * @param attribute The attribute value to set, or @c nil to remove.
 * @param key The key for the attribute.
 */
- (void)setAttribute:(nullable OttuSentryObjCAttribute *)attribute forKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
