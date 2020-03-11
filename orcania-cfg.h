/**
 * 
 * Orcania library
 * 
 * Different functions for different purposes but that can be shared between
 * other projects
 * 
 * orcania-cfg.h.in: configuration file
 * 
 * Copyright 2018 Nicolas Mora <mail@babelouest.org>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation;
 * version 2.1 of the License.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU GENERAL PUBLIC LICENSE for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#ifndef _ORCANIA_CFG_H_
#define _ORCANIA_CFG_H_

#define ORCANIA_VERSION ${PROJECT_VERSION}
#define ORCANIA_VERSION_STR "${PROJECT_VERSION}"

#define ORCANIA_VERSION_MAJOR ${PROJECT_VERSION_MAJOR}
#define ORCANIA_VERSION_MINOR ${PROJECT_VERSION_MINOR}
#define ORCANIA_VERSION_PATCH ${PROJECT_VERSION_PATCH}

#define ORCANIA_VERSION_NUMBER ((ORCANIA_VERSION_MAJOR << 16) | (ORCANIA_VERSION_MINOR << 8) | (ORCANIA_VERSION_PATCH << 0))

//#cmakedefine O_STRSTR

#endif /* _ORCANIA_CFG_H_ */
