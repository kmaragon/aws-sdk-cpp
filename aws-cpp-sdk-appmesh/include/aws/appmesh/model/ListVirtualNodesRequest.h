﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppMesh
{
namespace Model
{

  /**
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualNodesInput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API ListVirtualNodesRequest : public AppMeshRequest
  {
  public:
    ListVirtualNodesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVirtualNodes"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results returned by <code>ListVirtualNodes</code> in
     * paginated
         output. When you use this parameter,
     * <code>ListVirtualNodes</code> returns only
            <code>limit</code>
     * results in a single page along with a <code>nextToken</code> response
        
     * element. You can see the remaining results of the initial request by sending
     * another
            <code>ListVirtualNodes</code> request with the returned
     * <code>nextToken</code> value.
         This value can be between 1 and 100. If
     * you don't use this parameter,
         <code>ListVirtualNodes</code> returns up
     * to 100 results and a
            <code>nextToken</code> value if applicable.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of results returned by <code>ListVirtualNodes</code> in
     * paginated
         output. When you use this parameter,
     * <code>ListVirtualNodes</code> returns only
            <code>limit</code>
     * results in a single page along with a <code>nextToken</code> response
        
     * element. You can see the remaining results of the initial request by sending
     * another
            <code>ListVirtualNodes</code> request with the returned
     * <code>nextToken</code> value.
         This value can be between 1 and 100. If
     * you don't use this parameter,
         <code>ListVirtualNodes</code> returns up
     * to 100 results and a
            <code>nextToken</code> value if applicable.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of results returned by <code>ListVirtualNodes</code> in
     * paginated
         output. When you use this parameter,
     * <code>ListVirtualNodes</code> returns only
            <code>limit</code>
     * results in a single page along with a <code>nextToken</code> response
        
     * element. You can see the remaining results of the initial request by sending
     * another
            <code>ListVirtualNodes</code> request with the returned
     * <code>nextToken</code> value.
         This value can be between 1 and 100. If
     * you don't use this parameter,
         <code>ListVirtualNodes</code> returns up
     * to 100 results and a
            <code>nextToken</code> value if applicable.</p>
     */
    inline ListVirtualNodesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The name of the service mesh to list virtual nodes in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh to list virtual nodes in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh to list virtual nodes in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh to list virtual nodes in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh to list virtual nodes in.</p>
     */
    inline ListVirtualNodesRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh to list virtual nodes in.</p>
     */
    inline ListVirtualNodesRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh to list virtual nodes in.</p>
     */
    inline ListVirtualNodesRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
        
     * <code>ListVirtualNodes</code> request where <code>limit</code> was used and the

     * results exceeded the value of that parameter. Pagination continues from the end
     * of the
         previous results that returned the <code>nextToken</code>
     * value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
        
     * <code>ListVirtualNodes</code> request where <code>limit</code> was used and the

     * results exceeded the value of that parameter. Pagination continues from the end
     * of the
         previous results that returned the <code>nextToken</code>
     * value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
        
     * <code>ListVirtualNodes</code> request where <code>limit</code> was used and the

     * results exceeded the value of that parameter. Pagination continues from the end
     * of the
         previous results that returned the <code>nextToken</code>
     * value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
        
     * <code>ListVirtualNodes</code> request where <code>limit</code> was used and the

     * results exceeded the value of that parameter. Pagination continues from the end
     * of the
         previous results that returned the <code>nextToken</code>
     * value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
        
     * <code>ListVirtualNodes</code> request where <code>limit</code> was used and the

     * results exceeded the value of that parameter. Pagination continues from the end
     * of the
         previous results that returned the <code>nextToken</code>
     * value.</p>
     */
    inline ListVirtualNodesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
        
     * <code>ListVirtualNodes</code> request where <code>limit</code> was used and the

     * results exceeded the value of that parameter. Pagination continues from the end
     * of the
         previous results that returned the <code>nextToken</code>
     * value.</p>
     */
    inline ListVirtualNodesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
        
     * <code>ListVirtualNodes</code> request where <code>limit</code> was used and the

     * results exceeded the value of that parameter. Pagination continues from the end
     * of the
         previous results that returned the <code>nextToken</code>
     * value.</p>
     */
    inline ListVirtualNodesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
