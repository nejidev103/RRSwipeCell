//
//  UICollectionView+RRSwipeCell_Internal.h
//  RRSwipeCell
//
//  Created by Moch Xiao on 7/24/17.
//  Copyright © 2017 RedRain. All rights reserved.
//

@class RRSwipeCollectionViewCell;
@interface UICollectionView (RRSwipeCell_Internal)
@property (nonatomic, strong, readonly, nullable) NSArray<__kindof RRSwipeCollectionViewCell *> *rr_swipeCells;
@end
