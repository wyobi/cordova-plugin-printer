/*
 Copyright 2013-2016 appPlant GmbH

 Licensed to the Apache Software Foundation (ASF) under one
 or more contributor license agreements.  See the NOTICE file
 distributed with this work for additional information
 regarding copyright ownership.  The ASF licenses this file
 to you under the Apache License, Version 2.0 (the
 "License"); you may not use this file except in compliance
 with the License.  You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an
 "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 KIND, either express or implied.  See the License for the
 specific language governing permissions and limitations
 under the License.
 */

#import <Cordova/CDVPlugin.h>
#import "WebKit/WebKit.h"
#import <UIKit/UIKit.h>

@interface APPPrinter : CDVPlugin <UIPrintInteractionControllerDelegate, WKNavigationDelegate>

- (void) check:(CDVInvokedUrlCommand *)command;

- (void) types:(CDVInvokedUrlCommand *)command;

- (void) pick:(CDVInvokedUrlCommand *)command;

- (void) print:(CDVInvokedUrlCommand *)command;

- (void)webView:(WKWebView *)webView didFinishNavigation:(WKNavigation *)navigation;

@end
