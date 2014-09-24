/*
 * Copyright (C) 2014, Siemens AG
 * Author: Daniele Fognini
 *
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef COPYRIGHTMATCH_H
#define COPYRIGHTMATCH_H

#include "regex.hpp"
#include <string>

class CopyrightMatch
{
public:
    CopyrightMatch(rx::smatch sm, std::string type, int regexIndex);
    ~CopyrightMatch();
    const std::string getType() const;
    const std::string content() const;
    unsigned start() const;
    unsigned length() const;
private:
    rx::smatch sm;
    int regexIndex;
    std::string type;
};

#endif // COPYRIGHTMATCH_H
