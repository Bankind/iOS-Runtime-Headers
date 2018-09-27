/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHActivitySummaryUtility : NSObject {
    HDActivitySummaryBuilder * _summaryBuilder;
}

@property (nonatomic, retain) HDActivitySummaryBuilder *summaryBuilder;

- (void).cxx_destruct;
- (void)enumerateActivitySummariesForDateComponentInterval:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithProfile:(id)arg1 shouldIncludePrivateProperties:(bool)arg2;
- (id)newEmptyActivitySummaryWithIndex:(long long)arg1 calorieGoal:(id)arg2;
- (void)setSummaryBuilder:(id)arg1;
- (id)summaryBuilder;

@end