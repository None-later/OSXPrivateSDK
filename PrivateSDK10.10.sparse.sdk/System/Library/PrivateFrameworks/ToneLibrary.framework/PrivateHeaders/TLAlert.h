/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSTimer;

@interface TLAlert : NSObject
{
    BOOL _shouldOverrideMasterSwitches;
    BOOL _playingRepeatedly;
    int _type;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    struct dispatch_queue_s *_targetQueue;
    id _completionHandler;
    NSTimer *_completionFallbackTimer;
}

+ (void)_playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 shouldOverrideMasterSwitches:(BOOL)arg4;
+ (void)playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
+ (void)playToneAndVibrationForType:(int)arg1 accountIdentifier:(id)arg2;
+ (void)playToneAndVibrationForType:(int)arg1;
@property(nonatomic, getter=_isPlayingRepeatedly, setter=_setPlayingRepeatedly:) BOOL _playingRepeatedly; // @synthesize _playingRepeatedly;
@property(retain, nonatomic, setter=_setCompletionFallbackTimer:) NSTimer *_completionFallbackTimer; // @synthesize _completionFallbackTimer;
@property(copy, nonatomic, setter=_setCompletionHandler:) id _completionHandler; // @synthesize _completionHandler;
@property(nonatomic, setter=_setTargetQueue:) struct dispatch_queue_s *_targetQueue; // @synthesize _targetQueue;
@property(nonatomic, setter=_setShouldOverrideMasterSwitches:) BOOL _shouldOverrideMasterSwitches; // @synthesize _shouldOverrideMasterSwitches;
- (void)_setVibrationIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
- (void)_setToneIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
- (void)_setType:(int)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)stopWithFadeOutDuration:(double)arg1;
- (void)startPlayingRepeatedly;
- (void)stop;
- (BOOL)playWithCompletionHandler:(id)arg1 targetQueue:(void)arg2;
- (void)dealloc;
- (id)initWithType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (id)initWithType:(int)arg1 accountIdentifier:(id)arg2;
- (id)initWithType:(int)arg1;

@end
