/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/ByteMatchSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAF
{
namespace Model
{
  class AWS_WAF_API CreateByteMatchSetResult
  {
  public:
    CreateByteMatchSetResult();
    CreateByteMatchSetResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateByteMatchSetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A <a>ByteMatchSet</a> that contains no <code>ByteMatchTuple</code>
     * objects.</p>
     */
    inline const ByteMatchSet& GetByteMatchSet() const{ return m_byteMatchSet; }

    /**
     * <p>A <a>ByteMatchSet</a> that contains no <code>ByteMatchTuple</code>
     * objects.</p>
     */
    inline void SetByteMatchSet(const ByteMatchSet& value) { m_byteMatchSet = value; }

    /**
     * <p>A <a>ByteMatchSet</a> that contains no <code>ByteMatchTuple</code>
     * objects.</p>
     */
    inline void SetByteMatchSet(ByteMatchSet&& value) { m_byteMatchSet = value; }

    /**
     * <p>A <a>ByteMatchSet</a> that contains no <code>ByteMatchTuple</code>
     * objects.</p>
     */
    inline CreateByteMatchSetResult& WithByteMatchSet(const ByteMatchSet& value) { SetByteMatchSet(value); return *this;}

    /**
     * <p>A <a>ByteMatchSet</a> that contains no <code>ByteMatchTuple</code>
     * objects.</p>
     */
    inline CreateByteMatchSetResult& WithByteMatchSet(ByteMatchSet&& value) { SetByteMatchSet(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = value; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateByteMatchSetResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateByteMatchSetResult& WithChangeToken(Aws::String&& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateByteMatchSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateByteMatchSetResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:
    ByteMatchSet m_byteMatchSet;
    Aws::String m_changeToken;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
