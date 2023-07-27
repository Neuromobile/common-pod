//
//  NMCUser.h
//  CommonSDK
//
//  Created by Marc Estrada on 6/7/17.
//  Copyright © 2017 Neuromobile. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 @brief User model used in the statistics system.
 @version 1.0
 */
@interface NeuromobileUser : NSObject

/*!
 @brief Typedef to select the NeuromobileUser gender.\n\n
 GENDER_MALE to select a male gender.\n
 GENDER_FEMALE to select a female gender.
 @version 1.0
 */
typedef NS_ENUM(NSUInteger, Gender) {
    GENDER_MALE = 0,
    GENDER_FEMALE
};

/*!
 @brief Typedef to select the NeuromobileUser marital status.\n\n
 MS_SINGLE to select single as marital status.\n
 MS_MARRIED to select married as marital status.\n
 MS_WITH_CHILDREN to select family with children as marital status.
 @version 1.0
 */
typedef NS_ENUM(NSUInteger, MaritalStatus){
    MS_SINGLE = 0,
    MS_MARRIED,
    MS_WITH_CHILDREN
};

/*!
 @brief The email of the NeuromobileUser.
 @version 1.0
 */
@property (nonatomic, strong) NSString *email;
/*!
 @brief The password of the NeuromobileUser.
 @version 1.0
 */
@property (nonatomic, strong) NSString *password;
/*!
 @brief The Id of the user in external CRM/ERP.
 @version 1.0
 */
@property (nonatomic, strong) NSString *code;
/*!
 @brief The name of the NeuromobileUser.
 @version 1.0
 */
@property (nonatomic, strong) NSString *name;
/*!
 @brief The birthday of the NeuromobileUser.
 @version 1.0
 */
@property (nonatomic, strong) NSDate *birthday;
/*!
 @brief The zip code of the NeuromobileUser.
 @version 1.0
 */
@property (nonatomic, strong) NSString *zipCode;
/*!
 @brief The Gender of the NeuromobileUser.
 @version 1.0
 */
@property (nonatomic) Gender gender;
/*!
 @brief The MaritalStatus of the NeuromobileUser.
 @version 1.0
 */
@property (nonatomic) MaritalStatus maritalStatus;

/*!
 @brief Method to initialize a basic NeuromobileUser with his email and password.
 Other properties can be set using the returned NeuromobileUser.
 @param email The email of the NeuromobileUser.
 @param password The password of te NeuromobileUser.
 @return NeuromobileUser The initialized user.
 @version 1.0
 */
+(NeuromobileUser *)initWithEmail:(NSString *)email andPassword:(NSString *)password;

/*!
 @brief Method to initialize a basic NeuromobileUser with his email and password.
 Other properties can be set using the returned NeuromobileUser.
 @param email The email of the NeuromobileUser.
 @param password The password of te NeuromobileUser.
 @param code The Id of the user in external CRM/ERP.
 @return NeuromobileUser The initialized user.
 @version 1.0
 */
+(NeuromobileUser *)initWithEmail:(NSString *)email andPassword:(NSString *)password andCode:(NSString *)code;

@end
