/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBUISlidingFullscreenAlertController.h"

@class NSNumber, NSString, UIView;

@interface MPIncomingPhoneCallController : SBUISlidingFullscreenAlertController
{
    BOOL _causedSuspension;
    void *_addressBook;
    BOOL _answered;
    BOOL _pendingRing;
    BOOL _isVCCallWaitingRinging;
    BOOL _wasToldToStopRinging;
    BOOL _observingRingerChanged;
    struct __CTCall *_incomingCall;
    NSNumber *_incomingCallerABUID;
    NSString *_callerName;
    NSString *_incomingCallNumber;
    NSString *_incomingCallerLabel;
    NSNumber *_callerNameBreakPoint;
    UIView *_backgroundView;
}

- (id)initWithCall:(struct __CTCall *)arg1;
- (void)viewDidLoad;
- (void)updateLCDWithName:(id)arg1 label:(id)arg2 breakPoint:(id)arg3;
- (id)defaultBackgroundView;
- (id)backgroundView;
- (void)answerAndRelease:(id)arg1;
- (void)updateImageFromPerson:(void *)arg1;
- (void)dealloc;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (id)additionalURLParameter;
- (int)deactivationStyle;
- (void)_handleCallEvent:(struct __CTCall *)arg1;
- (BOOL)isShowingWallpaper;
- (void)_handleCallerIDEvent:(struct __CTCall *)arg1;
- (void)answerCall:(struct __CTCall *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)answer:(id)arg1;
- (void)ignore;
- (void)finishedAnimatingIn;
- (void)_ringIfNecessary;
- (void)ringOrVibrate;
- (void)stopRingingOrVibrating;
- (void)lockBarUnlocked:(id)arg1;
- (void)dismiss;
- (void)dismiss:(BOOL)arg1;
- (void)ringerChanged;
- (id)newTopBar;
- (id)newBottomBar;
@property(retain, nonatomic) NSNumber *callerNameBreakPoint; // @synthesize callerNameBreakPoint=_callerNameBreakPoint;
@property(retain, nonatomic) NSString *incomingCallerLabel; // @synthesize incomingCallerLabel=_incomingCallerLabel;
@property(retain, nonatomic) NSString *incomingCallNumber; // @synthesize incomingCallNumber=_incomingCallNumber;
@property(retain, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
@property(retain, nonatomic) NSNumber *incomingCallerABUID; // @synthesize incomingCallerABUID=_incomingCallerABUID;

@end
