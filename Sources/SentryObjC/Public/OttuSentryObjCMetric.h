#import <Foundation/Foundation.h>
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCDefines.h"
#else
#    import <SentryObjC/OttuSentryObjCDefines.h>
#endif

@class OttuSentryObjCId;
@class OttuSentryObjCSpanId;
@class OttuSentryObjCMetricValue;
@class OttuSentryObjCUnit;
@class OttuSentryObjCAttributeContent;

NS_ASSUME_NONNULL_BEGIN

/**
 * A metric entry that captures metric data with associated attribute metadata.
 *
 * Use the @c options.beforeSendMetric callback to modify or filter metric data.
 */
@interface OttuSentryObjCMetric : NSObject
SENTRY_NO_INIT

/**
 * Creates a new metric with the given parameters.
 * @param timestamp The timestamp when the metric was recorded.
 * @param traceId The trace ID to associate this metric with distributed tracing.
 * @param name The name of the metric (e.g., "api.response_time", "db.query.duration").
 * @param value The numeric value of the metric. Counters use integer values, distributions and
 * gauges use double values.
 * @param unit The unit of measurement for the metric value (optional). Examples: "millisecond",
 * "byte", "connection", "request". This helps provide context for the metric value when viewing in
 * Sentry.
 * @param attributes A dictionary of structured attributes added to the metric. Attributes provide
 * additional context and can be used
 */
- (instancetype)initWithTimestamp:(NSDate *)timestamp
                          traceId:(OttuSentryObjCId *)traceId
                             name:(NSString *)name
                            value:(OttuSentryObjCMetricValue *)value
                             unit:(nullable SentryObjCUnit *)unit
                       attributes:
                           (NSDictionary<NSString *, OttuSentryObjCAttributeContent *> *)attributes;

/// The timestamp when the metric was recorded.
@property (nonatomic, strong) NSDate *timestamp;

/**
 * The name of the metric (e.g., "api.response_time", "db.query.duration").
 *
 * Metric names should follow a dot-separated hierarchical naming convention
 * to enable better organization and querying in Sentry.
 */
@property (nonatomic, copy) NSString *name;

/**
 * The trace ID to associate this metric with distributed tracing.
 *
 * This will be set to a valid non-empty value during processing by the buffer,
 * which applies scope-based attribute enrichment including trace context.
 */
@property (nonatomic, strong) OttuSentryObjCId *traceId;

/**
 * The span ID of the span that was active when the metric was collected.
 *
 * Only set when there is an active span; a propagated span_id must not be used.
 */
@property (nonatomic, strong, nullable) OttuSentryObjCSpanId *spanId;

/**
 * The numeric value of the metric.
 *
 * @note Counters use integer values, distributions and gauges use double values.
 */
@property (nonatomic, strong) SentryObjCMetricValue *value;

/**
 * The unit of measurement for the metric value (optional).
 *
 * Examples: "millisecond", "byte", "connection", "request". This helps
 * provide context for the metric value when viewing in Sentry.
 */
@property (nonatomic, strong, nullable) OttuSentryObjCUnit *unit;

/**
 * A dictionary of structured attributes added to the metric.
 *
 * Attributes provide additional context and can be used for filtering and
 * grouping metrics in Sentry. Common attributes include endpoint names,
 * HTTP methods, status codes, etc.
 */
@property (nonatomic, copy) NSDictionary<NSString *, OttuSentryObjCAttributeContent *> *attributes;

@end

NS_ASSUME_NONNULL_END
