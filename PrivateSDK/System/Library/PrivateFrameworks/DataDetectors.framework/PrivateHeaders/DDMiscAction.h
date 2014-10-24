//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DataDetectors/DDAction.h>

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface DDMiscAction : DDAction
{
    NSString *_controllerClassName;
    NSBundle *_bundle;
    BOOL _actionLoadedSuccessfully;
}

- (id)name;
- (BOOL)_loadActionIfNeeded;
- (BOOL)runForTextCheckingResult:(id)arg1 context:(id)arg2;
- (BOOL)runForURL:(id)arg1 context:(id)arg2;
- (BOOL)runForResult:(struct __DDResult *)arg1 context:(id)arg2;
- (BOOL)_runForResult:(struct __DDResult *)arg1 url:(id)arg2 textCheckingResult:(id)arg3 context:(id)arg4;
- (Class)controllerClass;
- (id)controllerClassName;
- (void)dealloc;
- (id)initWithDict:(id)arg1 bundle:(id)arg2;

@end
