//
//  NeuromobileService.h
//  CommonSDK
//
//  Created by Marc Estrada on 11/7/17.
//  Copyright © 2017 Neuromobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol NeuromobileService

-(NSString *)getIdentifier;
-(NSString *)getVersion;
-(void)onServiceEnabledWithUser:(NSString *)userId andConfig:(NSString *)config;
-(void)onServiceNotAvailable:(NSString *)reason;
-(void)onUserSessionClosed;
-(void)getNMSConfig:(NSString *)config;

@end
