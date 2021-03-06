/*
 * Copyright 2010-2012 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import <Foundation/Foundation.h>

#import "../AmazonUnmarshallerXMLParserDelegate.h"
#import "S3ListVersionsResult.h"
#import "S3VersionSummaryUnmarshaller.h"
#import "S3CommonPrefixesUnmarshaller.h"

/** Creates an S3ListVersionResult from an XML service repsonse. */
@interface S3ListVersionsResultUnmarshaller:AmazonUnmarshallerXMLParserDelegate {
    S3ListVersionsResult *listVersionsResult;
}

/** The S3ListVersionsResult represented by the XML */
@property (nonatomic, readonly) S3ListVersionsResult *listVersionsResult;

@end
