/*****************************************************************************
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

#import "SCStoreStatusEvent.h"

@implementation SCStoreStatusEvent

@synthesize status = _status;
@synthesize storeId = _storeId;

+ (instancetype)fromEvent:(StoreStatusEvent)s andStoreId:(NSString *)sId {
  SCStoreStatusEvent *evt =
      [[SCStoreStatusEvent alloc] initWithEvent:s andStoreId:sId];
  return evt;
}

- (id)initWithEvent:(StoreStatusEvent)s andStoreId:(NSString *)sId {
  if (self = [super init]) {
    _status = s;
    _storeId = sId;
  }
  return self;
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%ld,%@", (long)self.status, self.storeId];
}

@end
