//
//  MXLiquidParticleFactory.h
//  LiquidKit
//
//  Created by Kevin Hartman on 2/1/14.
//  Copyright (c) 2014 Hackathon. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface MXLiquidParticleFactory : NSObject

/* Constants */
extern const CGFloat CIRCLE_COLOR[];

/* Properties */
@property CGFloat circleRadius;
@property SKTexture *circleTexture;

/* Instance methods */
- (id) initWithRadius:(CGFloat)radius;

- (SKNode*) createLiquidParticle;

@end
