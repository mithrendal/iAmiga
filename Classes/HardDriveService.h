//  Created by Simon Toens on 24.03.16
//
//  iUAE is free software: you may copy, redistribute
//  and/or modify it under the terms of the GNU General Public License as
//  published by the Free Software Foundation, either version 2 of the
//  License, or (at your option) any later version.
//
//  This file is distributed in the hope that it will be useful, but
//  WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

#import <Foundation/Foundation.h>

/**
 * The hard drive service handles interactions with the hard drives.
 *
 * Currently only a single mounted hard drive (.hdf file) is supported.
 *
 * Note that this class uses the emulator state as source of truth, it does not/should not read configuration.
 */
@interface HardDriveService : NSObject

- (BOOL)mounted;

- (void)mountHardfile:(NSString *)hardfilePath;
- (void)unmountHardfile;

- (NSString *)getMountedHardfilePath;

@end