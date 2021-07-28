/*
 * Copyright Neurala Inc. 2013-2021. All rights reserved.
 *
 * Except as expressly permitted in the accompanying License Agreement, if at all, (a) you shall
 * not license, sell, rent, lease, transfer, assign, distribute, display, host, outsource, disclose
 * or otherwise commercially exploit or make this source code available to any third party; (b) you
 * shall not modify, make derivative works of, disassemble, reverse compile or reverse engineer any
 * part of the SDK; (c) You shall not access the SDK in order to build a similar or competitive
 * product or service; (d) no part of the this source may be copied, reproduced, distributed,
 * republished, downloaded, displayed, posted or transmitted in any form or by any means, including
 * but not limited to electronic, mechanical, photocopying, recording or other means; and (e) any
 * future release, update, or other addition to functionality of the SDK shall be subject to the
 * terms of the accompanying License Agreement. You must reproduce, on all copies made by you or
 * for you, and must not remove, alter, or obscure in any way all proprietary rights notices
 * (including copyright notices) of Neurala Inc or its suppliers on or within the copies of the
 * SDK. Any sample code provided with the SDK and designated as such are for illustrative purposes
 * only and are not to be included in your applications.
 *
 * In cases when the accompanying License Agreement permits redistribution of this file, the above
 * notice shall be reproduced its entirety in every copy of a distributed version of this file.
 */

#ifndef NEURALA_EMPTY_RESULTS_OUTPUT_H
#define NEURALA_EMPTY_RESULTS_OUTPUT_H

#include <neurala/plugin/PluginArguments.h>
#include <neurala/plugin/PluginErrorCallback.h>
#include <neurala/utils/ResultsOutput.h>

namespace neurala::plug::empty
{
class ResultsOutput final : public neurala::ResultsOutput
{
public:
	static void* create(PluginArguments&, PluginErrorCallback&) { return new ResultsOutput; }
	static void destroy(void* p) { delete reinterpret_cast<ResultsOutput*>(p); }

	/**
	 * @brief Function call operator for invoking the output action.
	 *
	 * @param metadata A JSON document containing information about the result.
	 * @param image A pointer to an image view, which may be null if no frame
	 *              is available or could be retrieved.
	 */
	void operator()(const std::string&, const ImageView*) final { }
};

} // namespace neurala::plug

#endif // NEURALA_EMPTY_RESULTS_OUTPUT_H
