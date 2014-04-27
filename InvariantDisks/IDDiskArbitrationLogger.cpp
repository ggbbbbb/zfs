//
//  IDDiskArbitrationLogger.cpp
//  InvariantDisks
//
//  Created by cbreak on 2014.04.27.
//  Copyright (c) 2014 the-color-black.net. All rights reserved.
//

#include "IDDiskArbitrationLogger.hpp"

#include "IDDiskArbitrationUtils.hpp"

#include <DiskArbitration/DiskArbitration.h>

#include <iostream>

namespace ID
{

	DiskArbitrationLogger::DiskArbitrationLogger(std::ostream & stream) :
		m_logStream(stream)
	{
	}

	void DiskArbitrationLogger::diskAppeared(DADiskRef disk)
	{
		m_logStream << "Disk Appeared: " << disk << std::endl;
	}

	void DiskArbitrationLogger::diskDisappeared(DADiskRef disk)
	{
		m_logStream << "Disk Disappeared: " << disk << std::endl;
	}
}