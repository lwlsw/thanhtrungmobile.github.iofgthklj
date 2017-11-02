/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridCellAttributes : UICollectionViewLayoutAttributes {
    NSIndexPath * _candidateIndexPath;
    unsigned long long  _candidateNumber;
    int  _candidatesVisualStyle;
    bool  _dummy;
    unsigned long long  _edges;
    bool  _emphasizedAppearance;
    bool  _groupHeader;
    bool  _groupShowsAlternativeText;
    bool  _needsPaddingForIndexScrubber;
    unsigned long long  _rowIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  _rowSize;
    bool  _secondaryCandidateAppearance;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 16; 
    }  _visualStyling;
}

@property (nonatomic, retain) NSIndexPath *candidateIndexPath;
@property (nonatomic) unsigned long long candidateNumber;
@property (nonatomic) int candidatesVisualStyle;
@property (nonatomic) bool dummy;
@property (nonatomic) unsigned long long edges;
@property (nonatomic) bool emphasizedAppearance;
@property (nonatomic) bool groupHeader;
@property (nonatomic) bool groupShowsAlternativeText;
@property (nonatomic) bool needsPaddingForIndexScrubber;
@property (nonatomic) unsigned long long rowIndex;
@property (nonatomic) struct CGSize { double x1; double x2; } rowSize;
@property (nonatomic) bool secondaryCandidateAppearance;
@property (nonatomic) struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; } visualStyling;

- (id)candidateIndexPath;
- (unsigned long long)candidateNumber;
- (int)candidatesVisualStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)dummy;
- (unsigned long long)edges;
- (bool)emphasizedAppearance;
- (bool)groupHeader;
- (bool)groupShowsAlternativeText;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)needsPaddingForIndexScrubber;
- (unsigned long long)representedElementCategory;
- (unsigned long long)rowIndex;
- (struct CGSize { double x1; double x2; })rowSize;
- (bool)secondaryCandidateAppearance;
- (void)setCandidateIndexPath:(id)arg1;
- (void)setCandidateNumber:(unsigned long long)arg1;
- (void)setCandidatesVisualStyle:(int)arg1;
- (void)setDummy:(bool)arg1;
- (void)setEdges:(unsigned long long)arg1;
- (void)setEmphasizedAppearance:(bool)arg1;
- (void)setGroupHeader:(bool)arg1;
- (void)setGroupShowsAlternativeText:(bool)arg1;
- (void)setNeedsPaddingForIndexScrubber:(bool)arg1;
- (void)setRowIndex:(unsigned long long)arg1;
- (void)setRowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSecondaryCandidateAppearance:(bool)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;

@end