//
//  DSEInputViewController.m
//  OneThing
//
//  Created by Bob Martens on 3/30/13.
//  Copyright (c) 2013 Deck78. All rights reserved.
//

#import "DSEInputViewController.h"

@interface DSEInputViewController ()
@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UITextField *descriptionField;
@end

@implementation DSEInputViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    if ([segue.identifier isEqualToString:@"saveEntry"]) {
        self.title = self.titleField.text;
        self.eventDescription = self.descriptionField.text;
    }
}

@end
