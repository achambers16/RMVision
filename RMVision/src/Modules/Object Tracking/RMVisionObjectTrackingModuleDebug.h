//
//  RMVisionObjectTrackingModuleDebug.h
//  RMVision
//
//  Created by Andrew Chambers on 11/17/13.
//  Copyright (c) 2013 Romotive, Inc. All rights reserved.
//

#import "RMVisionObjectTrackingModule.h"

@interface RMVisionObjectTrackingModuleDebug : NSObject

-(id)initWithModule:(RMVisionObjectTrackingModule *)module;

-(BOOL)startDebugCapture;
-(BOOL)stopDebugCaptureWithCompletion:(void(^)(NSData *compressedData))callback;

@end
