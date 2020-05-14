//
//  LPMSLibraryManager.h
//  LPMSMediaLibrary
//
//  Created by sunyu on 2019/8/9.
//  Copyright © 2019 Linkplay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LPMDPKit/LPMDPKit.h>

@class GCDAsyncSocket;
@class LPMSLibraryPlayItem;

@protocol LPMSMediaLibraryDelegate <NSObject>

@optional

//- (void)onLPDeviceOnline:(LPDevice;
//
//- (void)onLPDeviceOffline:(LPDevice *)device;
//
//- (void)onLPDeviceUpdate:(LPDevice *)device;

@end

NS_ASSUME_NONNULL_BEGIN

typedef void (^LPSearchMediaResultBlock)(LPPlayMusicList *musicListObj);


@interface LPMSLibraryManager : NSObject

+ (LPMSLibraryManager *)sharedInstance;

@property (nonatomic, readonly) NSString *version;

/// 是否在播放本地音乐
- (BOOL)getMediaMusicPlayState;
// 建立HTTP server
- (void)startHTTPServer;
// 停止HTTP server
-(void)stopHTTPServer;

/// Search for iTunes music
/// @param header 为了以后分页准备，暂时可以传nil
/// @param completionHandler 得到LPPlayMusicList对象
- (void)searchSongs:(LPPlayHeader * _Nullable)header completionHandler:(LPSearchMediaResultBlock _Nullable)completionHandler;
/// 搜索Album列表
/// @param header 为了以后分页准备，暂时可以传nil
/// @param completionHandler 得到LPPlayMusicList对象
- (void)searchAlbums:(LPPlayHeader * _Nullable)header completionHandler:(LPSearchMediaResultBlock _Nullable)completionHandler;
/// 搜索Artist列表
/// @param header 为了以后分页准备，暂时可以传nil
/// @param completionHandler 得到LPPlayMusicList对象
- (void)searchArtists:(LPPlayHeader * _Nullable)header completionHandler:(LPSearchMediaResultBlock _Nullable)completionHandler;
/// 搜索歌单列表
/// @param header 为了以后分页准备，暂时可以传nil
/// @param completionHandler 得到LPPlayMusicList对象
- (void)searchSonglists:(LPPlayHeader * _Nullable)header completionHandler:(LPSearchMediaResultBlock _Nullable)completionHandler;
/// 搜索专辑名称对应的专辑列表
/// @param header 为了以后分页准备，暂时可以传nil
/// @param album 专辑名称
/// @param completionHandler 得到LPPlayMusicList对象
- (void)searchAlbumSongs:(LPPlayHeader * _Nullable)header album:(NSString *)album completionHandler:(LPSearchMediaResultBlock _Nullable)completionHandler;
/// 搜索歌手对应的歌手列表
/// @param header 为了以后分页准备，暂时可以传nil
/// @param artist 歌手
/// @param completionHandler 得到LPPlayMusicList对象
- (void)searchArtistSongs:(LPPlayHeader * _Nullable)header artist:(NSString *)artist completionHandler:(LPSearchMediaResultBlock _Nullable)completionHandler;
/// 搜索歌单列表
/// @param header 为了以后分页准备，暂时可以传nil
/// @param songlist 歌单名称
/// @param completionHandler 得到LPPlayMusicList对象
- (void)searchSonglistSongs:(LPPlayHeader * _Nullable)header songlist:(NSString *)songlist completionHandler:(LPSearchMediaResultBlock _Nullable)completionHandler;

- (void)searchAlbumSongsWithItem:(LPMSLibraryPlayItem *)item header:(LPPlayHeader * _Nullable)header completionHandler:(LPSearchMediaResultBlock _Nullable)completionHandler;

/// 通过歌手获取该歌手对应的专辑列表
/// @param item item 对象
/// @param header 为了以后分页准备，暂时可以传nil
/// @param completionHandler 得到LPPlayMusicList对象
- (void)searchAlbumWithItem:(LPMSLibraryPlayItem *)item header:(LPPlayHeader * _Nullable)header completionHandler:(LPSearchMediaResultBlock _Nullable)completionHandler;

/// 通过歌单名称获取对应的歌曲列表
/// @param item item 对象
/// @param header 为了以后分页准备，暂时可以传nil
/// @param completionHandler 得到LPPlayMusicList对象
- (void)searchListSongsWithItem:(LPMSLibraryPlayItem *)item header:(LPPlayHeader * _Nullable)header completionHandler:(LPSearchMediaResultBlock _Nullable)completionHandler;

/// 控制Log输出
/// @param logOn 默认为NO
- (void)setDebugLogOn:(BOOL)logOn;

/// 为了copy本地音乐使用
- (NSArray *)arrItunesMusic;
/// 得到歌曲数目
- (int)getCount;
/// 更新播放时间
- (void)updateDate;
- (uint16_t)localPort;





@end

NS_ASSUME_NONNULL_END
