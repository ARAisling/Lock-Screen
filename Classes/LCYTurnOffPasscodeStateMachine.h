//
//  Created by Krishna Kotecha on 23/11/2010.
//  Copyright 2010 Logic Colony Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LCYPasscodeUIStateMachine.h"

typedef enum 
{ 
	LCYTurnOffPasscodeStatesConfirmExistingPassword,
	LCYTurnOffPasscodeStatesDone,
} LCYTurnOffPasscodeStates;

@interface LCYTurnOffPasscodeStateMachine : LCYPasscodeUIStateMachine 
{
	LCYTurnOffPasscodeStates state_;

	NSString *existingPasscode_;	
	NSString *currentErrorText_;
}

@property (nonatomic, copy) NSString* newPasscode;
@property (nonatomic, copy) NSString* existingPasscode;
@property (nonatomic, readonly) NSString *currentErrorText;

- (void) transitionWithInput:(NSString *) input;

- (void) successTransition;
- (void) failTransition;

- (NSString *) currentPromptText;

- (BOOL) gotCompletionState;


@end
