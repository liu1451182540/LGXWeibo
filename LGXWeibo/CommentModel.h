//
//  CommentModel.h
//  LGXWeibo
//
//  Created by admin on 13-8-24.
//  Copyright (c) 2013年 admin. All rights reserved.
//

#import "WXBaseModel.h"
#import "UserModel.h"
#import "WeiboModel.h"

@interface CommentModel : WXBaseModel

/*
 created_at	string	评论创建时间
 id	int64	评论的ID
 text	string	评论的内容
 source	string	评论的来源
 user	object	评论作者的用户信息字段 详细
 mid	string	评论的MID
 idstr	string	字符串型的评论ID
 status	object	评论的微博信息字段 详细
 reply_comment	object	评论来源评论，当本评论属于对另一评论的回复时返回此字段
 */

@property(nonatomic,copy)NSString *created_at;
@property(nonatomic,retain)NSNumber *id;
@property(nonatomic,copy)NSString *text;
@property(nonatomic,copy)NSString *source;
@property(nonatomic,retain)UserModel *user;
@property(nonatomic,copy)NSString *mid;
@property(nonatomic,copy)NSString *idstr;
@property(nonatomic,retain)WeiboModel *weibo;

@end
