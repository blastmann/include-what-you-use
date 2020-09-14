//===--- objc_call_instance_method.h - test input file for iwyu -----------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that calling instance method in implementation requires full class use

#import <objc/Object.h>

@class Bar;

@interface Foo : Object {
}
- (void)method:(Bar *)var;
@end

/**** IWYU_SUMMARY

(tests/objc-gnustep/objc_call_instance_method.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
