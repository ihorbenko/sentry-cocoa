#import <Foundation/Foundation.h>

// Platform detection and shared macros
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCDefines.h"
#else
#    import <SentryObjC/OttuSentryObjCDefines.h>
#endif

// --- Enums (no dependencies) ---
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCAttachmentType.h"
#    import "OttuSentryObjCFeedbackSource.h"
#    import "OttuSentryObjCLastRunStatus.h"
#    import "OttuSentryObjCLevel.h"
#    import "OttuSentryObjCLogLevel.h"
#    import "OttuSentryObjCReplayQuality.h"
#    import "OttuSentryObjCSampleDecision.h"
#    import "OttuSentryObjCSpanStatus.h"
#    import "OttuSentryObjCTransactionNameSource.h"
#else
#    import <SentryObjC/OttuSentryObjCAttachmentType.h>
#    import <SentryObjC/OttuSentryObjCFeedbackSource.h>
#    import <SentryObjC/OttuSentryObjCLastRunStatus.h>
#    import <SentryObjC/OttuSentryObjCLevel.h>
#    import <SentryObjC/OttuSentryObjCLogLevel.h>
#    import <SentryObjC/OttuSentryObjCReplayQuality.h>
#    import <SentryObjC/OttuSentryObjCSampleDecision.h>
#    import <SentryObjC/OttuSentryObjCSpanStatus.h>
#    import <SentryObjC/OttuSentryObjCTransactionNameSource.h>
#endif

// --- Data carriers ---
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCAttributeContent.h"
#    import "OttuSentryObjCMetric.h"
#    import "OttuSentryObjCMetricValue.h"
#    import "OttuSentryObjCRedactRegionType.h"
#    import "OttuSentryObjCUnit.h"
#else
#    import <SentryObjC/OttuSentryObjCAttributeContent.h>
#    import <SentryObjC/OttuSentryObjCMetric.h>
#    import <SentryObjC/OttuSentryObjCMetricValue.h>
#    import <SentryObjC/OttuSentryObjCRedactRegionType.h>
#    import <SentryObjC/OttuSentryObjCUnit.h>
#endif

// --- Leaf types (no wrapper dependencies) ---
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCDebugMeta.h"
#    import "OttuSentryObjCFrame.h"
#    import "OttuSentryObjCGeo.h"
#    import "OttuSentryObjCHttpStatusCodeRange.h"
#    import "OttuSentryObjCId.h"
#    import "OttuSentryObjCMeasurementUnit.h"
#    import "OttuSentryObjCMechanismContext.h"
#    import "OttuSentryObjCMessage.h"
#    import "OttuSentryObjCNSError.h"
#    import "OttuSentryObjCRequest.h"
#    import "OttuSentryObjCSpanId.h"
#    import "OttuSentryObjCTraceHeader.h"
#else
#    import <SentryObjC/OttuSentryObjCDebugMeta.h>
#    import <SentryObjC/OttuSentryObjCFrame.h>
#    import <SentryObjC/OttuSentryObjCGeo.h>
#    import <SentryObjC/OttuSentryObjCHttpStatusCodeRange.h>
#    import <SentryObjC/OttuSentryObjCId.h>
#    import <SentryObjC/OttuSentryObjCMeasurementUnit.h>
#    import <SentryObjC/OttuSentryObjCMechanismContext.h>
#    import <SentryObjC/OttuSentryObjCMessage.h>
#    import <SentryObjC/OttuSentryObjCNSError.h>
#    import <SentryObjC/OttuSentryObjCRequest.h>
#    import <SentryObjC/OttuSentryObjCSpanId.h>
#    import <SentryObjC/OttuSentryObjCTraceHeader.h>
#endif

// --- Composite types (depend on leaf types) ---
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCAttachment.h"
#    import "OttuSentryObjCBreadcrumb.h"
#    import "OttuSentryObjCException.h"
#    import "OttuSentryObjCMechanism.h"
#    import "OttuSentryObjCStacktrace.h"
#    import "OttuSentryObjCThread.h"
#    import "OttuSentryObjCUser.h"
#else
#    import <SentryObjC/OttuSentryObjCAttachment.h>
#    import <SentryObjC/OttuSentryObjCBreadcrumb.h>
#    import <SentryObjC/OttuSentryObjCException.h>
#    import <SentryObjC/OttuSentryObjCMechanism.h>
#    import <SentryObjC/OttuSentryObjCStacktrace.h>
#    import <SentryObjC/OttuSentryObjCThread.h>
#    import <SentryObjC/OttuSentryObjCUser.h>
#endif

// --- Span context hierarchy ---
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCSpanContext.h"
#    import "OttuSentryObjCTransactionContext.h"
#else
#    import <SentryObjC/OttuSentryObjCSpanContext.h>
#    import <SentryObjC/OttuSentryObjCTransactionContext.h>
#endif

// --- Higher-level types ---
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCEvent.h"
#    import "OttuSentryObjCFeedback.h"
#    import "OttuSentryObjCSamplingContext.h"
#    import "OttuSentryObjCScope.h"
#    import "OttuSentryObjCSpan.h"
#    import "OttuSentryObjCTraceContext.h"
#else
#    import <SentryObjC/OttuSentryObjCEvent.h>
#    import <SentryObjC/OttuSentryObjCFeedback.h>
#    import <SentryObjC/OttuSentryObjCSamplingContext.h>
#    import <SentryObjC/OttuSentryObjCScope.h>
#    import <SentryObjC/OttuSentryObjCSpan.h>
#    import <SentryObjC/OttuSentryObjCTraceContext.h>
#endif

// --- Attribute and log types ---
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCAttribute.h"
#    import "OttuSentryObjCLog.h"
#    import "OttuSentryObjCLogger.h"
#else
#    import <SentryObjC/OttuSentryObjCAttribute.h>
#    import <SentryObjC/OttuSentryObjCLog.h>
#    import <SentryObjC/OttuSentryObjCLogger.h>
#endif

// --- Configuration ---
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCExperimentalOptions.h"
#    import "OttuSentryObjCOptions.h"
#    import "OttuSentryObjCReplayOptions.h"
#else
#    import <SentryObjC/OttuSentryObjCExperimentalOptions.h>
#    import <SentryObjC/OttuSentryObjCOptions.h>
#    import <SentryObjC/OttuSentryObjCReplayOptions.h>
#endif

// --- API surfaces ---
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCFeedbackApi.h"
#    import "OttuSentryObjCMetricsApi.h"
#    import "OttuSentryObjCReplayApi.h"
#else
#    import <SentryObjC/OttuSentryObjCFeedbackApi.h>
#    import <SentryObjC/OttuSentryObjCMetricsApi.h>
#    import <SentryObjC/OttuSentryObjCReplayApi.h>
#endif

// --- Envelope types (SPI for hybrid SDKs) ---
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCEnvelope.h"
#    import "OttuSentryObjCEnvelopeHeader.h"
#    import "OttuSentryObjCEnvelopeItem.h"
#else
#    import <SentryObjC/OttuSentryObjCEnvelope.h>
#    import <SentryObjC/OttuSentryObjCEnvelopeHeader.h>
#    import <SentryObjC/OttuSentryObjCEnvelopeItem.h>
#endif

// --- Entry points ---
#if !__has_include(<SentryObjC/OttuSentryObjCDefines.h>)
#    import "OttuSentryObjCClient.h"
#    import "OttuSentryObjCHub.h"
#    import "OttuSentryObjCPrivateSDKOnly.h"
#    import "OttuSentryObjCSDK.h"
#else
#    import <SentryObjC/OttuSentryObjCClient.h>
#    import <SentryObjC/OttuSentryObjCHub.h>
#    import <SentryObjC/OttuSentryObjCPrivateSDKOnly.h>
#    import <SentryObjC/OttuSentryObjCSDK.h>
#endif
