/*!***************************************************************************
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 ******************************************************************************/

#import <Foundation/Foundation.h>

@interface SCFileUtils : NSObject

+ (NSDictionary *)jsonStringToDict:(NSString *)string error:(NSError **)err;
+ (NSDictionary *)jsonFileToDict:(NSString *)filepath error:(NSError **)err;
+ (NSString *)filePathFromDocumentsDirectory:(NSString *)fileName;
+ (NSString *)filePathFromSelfBundle:(NSString *)fileName;
+ (NSString *)filePathFromMainBundle:(NSString *)fileName;
+ (NSString *)filePathFromNSHomeDirectory:(NSString *)fileName;
+ (NSURL *)applicationDocumentsDirectory;

/*!
 Checks for the testing mode. Usually used for Test targets

 @return BOOL
 */
+ (BOOL)isTesting;

@end
