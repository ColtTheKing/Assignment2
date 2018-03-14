//
//  Renderer.h
//  Assignment2
//
//  Created by Aaron F on 2018-03-12.
//  Copyright © 2018 2Toucans. All rights reserved.
//

#ifndef Renderer_h
#define Renderer_h

#import <Foundation/Foundation.h>
#include "Model.h"

@interface Renderer : NSObject

+ (void)setup: (GLKView*)view;

+ (void)draw: (CGRect)drawRect;

+ (void)close;

+ (void)addModel: (Model*)model texture:(NSString*)texture;

+ (void)moveCamera: (float)x y:(float)y z:(float)z;

+ (void)moveCameraRelative: (float)x y:(float)y z:(float)z;

+ (void)rotateCamera:(float)angle x:(float)x y:(float)y z:(float)z;

@end

#endif /* Renderer_h */