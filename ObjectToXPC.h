/**
 * ObjectToXPC
 *
 * Copyright 2011 Aron Cedercrantz. All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 * 
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY ARON CEDERCRANTZ ''AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 * EVENT SHALL ARON CEDERCRANTZ OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * The views and conclusions contained in the software and documentation are
 * those of the authors and should not be interpreted as representing official
 * policies, either expressed or implied, of Aron Cedercrantz.
 */

#import <Foundation/Foundation.h>
#import <xpc/xpc.h>

#define CDXPC WM_CDXPC
#define arrayWithXPCObject arrayWithWMXPCObject
#define dataWithXPCObject dataWithWMXPCObject
#define dateWithXPCObject dateWithWMXPCObject
#define dictionaryWithXPCObject dictionaryWithWMXPCObject
#define replyXPCObject replyWMXPCObject
#define nullWithXPCObject nullWithWMXPCObject
#define numberWithXPCObject numberWithWMXPCObject
#define stringWithXPCObject stringWithWMXPCObject
#define initWithXPCObject initWithWMXPCObject
#define XPCObject WMXPCObject
#define errorFromXPCObject errorFromWMXPCObject

@interface NSArray (CDXPC)
+ (id)arrayWithXPCObject:(xpc_object_t)xpcObject;
- (id)initWithXPCObject:(xpc_object_t)xpcObject;
- (xpc_object_t)XPCObject;
@end

@interface NSData (CDXPC)
+ (id)dataWithXPCObject:(xpc_object_t)xpcObject;
- (id)initWithXPCObject:(xpc_object_t)xpcObject;
- (xpc_object_t)XPCObject;
@end

@interface NSDate (CDXPC)
+ (id)dateWithXPCObject:(xpc_object_t)xpcObject;
- (id)initWithXPCObject:(xpc_object_t)xpcObject;
- (xpc_object_t)XPCObject;
@end

@interface NSDictionary (CDXPC)
+ (id)dictionaryWithXPCObject:(xpc_object_t)xpcObject;
- (id)initWithXPCObject:(xpc_object_t)xpcObject;
- (xpc_object_t)XPCObject;
- (xpc_object_t)replyXPCObject:(xpc_object_t)object;
@end

@interface NSNull (CDXPC)
+ (id)nullWithXPCObject:(xpc_object_t)xpcObject;
- (id)initWithXPCObject:(xpc_object_t)xpcObject;
- (xpc_object_t)XPCObject;
@end

@interface NSNumber (CDXPC)
+ (id)numberWithXPCObject:(xpc_object_t)xpcObject;
- (id)initWithXPCObject:(xpc_object_t)xpcObject;
- (xpc_object_t)XPCObject;
@end

@interface NSString (CDXPC)
+ (id)stringWithXPCObject:(xpc_object_t)xpcObject;
- (id)initWithXPCObject:(xpc_object_t)xpcObject;
- (xpc_object_t)XPCObject;
@end

@interface NSError (CDXPC)
+ (NSError *)errorFromXPCObject:(xpc_object_t)xpcObject;
@end