//
//  NeuromobileListener.h
//  CommonSDK
//
//  Created by Marc Estrada on 11/7/17.
//  Copyright © 2017 Neuromobile. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 @brief Interface for listening to Neuromobile operations.
 @version 1.0
 */
@protocol NeuromobileDelegate

/*!
 @brief Method called when the user session is initialized correctly.
 @version 1.0
 */
-(void)onNeuromobileUserSessionInitialized;
/*!
 @brief Method called when an error occurs during the initialization.
 @param reason A message that indicates what went wrong
 @version 1.0
 */
-(void)onNeuromobileError:(NSString *)reason;

@end
