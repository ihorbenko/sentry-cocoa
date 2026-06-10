#import <Foundation/Foundation.h>
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCDefines.h"
#else
#    import <SentryObjC/OttuSentryObjCDefines.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 * Type-safe units for telemetry data (Metrics, Spans, and Logs).
 *
 * These units help Sentry display metric values in a human-readable format.
 * Use the predefined class properties for common units, or initialize with a custom string
 * for custom units.
 *
 * @see https://develop.sentry.dev/sdk/telemetry/attributes/#units
 */
@interface OttuSentryObjCUnit : NSObject
SENTRY_NO_INIT

/// The string representation of the unit.
@property (nonatomic, readonly, copy) NSString *rawValue;

/// Creates a unit from its string representation.
- (instancetype)initWithRawValue:(NSString *)rawValue;

// Duration

/// Nanosecond duration unit.
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *nanosecond;
/// Microsecond duration unit.
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *microsecond;
/// Millisecond duration unit.
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *millisecond;
/// Second duration unit.
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *second;
/// Minute duration unit.
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *minute;
/// Hour duration unit.
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *hour;
/// Day duration unit.
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *day;
/// Week duration unit.
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *week;

// Information

/// Bit information unit.
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *bit;
/// Byte information unit.
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *byte;
/// Kilobyte information unit (1000 bytes).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *kilobyte;
/// Kibibyte information unit (1024 bytes).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *kibibyte;
/// Megabyte information unit (1000^2 bytes).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *megabyte;
/// Mebibyte information unit (1024^2 bytes).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *mebibyte;
/// Gigabyte information unit (1000^3 bytes).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *gigabyte;
/// Gibibyte information unit (1024^3 bytes).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *gibibyte;
/// Terabyte information unit (1000^4 bytes).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *terabyte;
/// Tebibyte information unit (1024^4 bytes).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *tebibyte;
/// Petabyte information unit (1000^5 bytes).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *petabyte;
/// Pebibyte information unit (1024^5 bytes).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *pebibyte;
/// Exabyte information unit (1000^6 bytes).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *exabyte;
/// Exbibyte information unit (1024^6 bytes).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *exbibyte;

// Fraction

/// Ratio fraction unit (value between 0 and 1).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *ratio;
/// Percent fraction unit (value between 0 and 100).
@property (nonatomic, class, readonly, strong) OttuSentryObjCUnit *percent;

@end

NS_ASSUME_NONNULL_END
