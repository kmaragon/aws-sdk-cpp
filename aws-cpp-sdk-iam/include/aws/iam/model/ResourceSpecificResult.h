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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/PolicyEvaluationDecisionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iam/model/Statement.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains the result of the simulation of a single API action call on a single
   * resource.</p> <p>This data type is used by a member of the
   * <a>EvaluationResult</a> data type.</p>
   */
  class AWS_IAM_API ResourceSpecificResult
  {
  public:
    ResourceSpecificResult();
    ResourceSpecificResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    ResourceSpecificResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The name of the simulated resource, in Amazon Resource Name (ARN) format.</p>
     */
    inline const Aws::String& GetEvalResourceName() const{ return m_evalResourceName; }

    /**
     * <p>The name of the simulated resource, in Amazon Resource Name (ARN) format.</p>
     */
    inline void SetEvalResourceName(const Aws::String& value) { m_evalResourceNameHasBeenSet = true; m_evalResourceName = value; }

    /**
     * <p>The name of the simulated resource, in Amazon Resource Name (ARN) format.</p>
     */
    inline void SetEvalResourceName(Aws::String&& value) { m_evalResourceNameHasBeenSet = true; m_evalResourceName = value; }

    /**
     * <p>The name of the simulated resource, in Amazon Resource Name (ARN) format.</p>
     */
    inline void SetEvalResourceName(const char* value) { m_evalResourceNameHasBeenSet = true; m_evalResourceName.assign(value); }

    /**
     * <p>The name of the simulated resource, in Amazon Resource Name (ARN) format.</p>
     */
    inline ResourceSpecificResult& WithEvalResourceName(const Aws::String& value) { SetEvalResourceName(value); return *this;}

    /**
     * <p>The name of the simulated resource, in Amazon Resource Name (ARN) format.</p>
     */
    inline ResourceSpecificResult& WithEvalResourceName(Aws::String&& value) { SetEvalResourceName(value); return *this;}

    /**
     * <p>The name of the simulated resource, in Amazon Resource Name (ARN) format.</p>
     */
    inline ResourceSpecificResult& WithEvalResourceName(const char* value) { SetEvalResourceName(value); return *this;}

    /**
     * <p>The result of the simulation of the simulated API action on the resource
     * specified in <code>EvalResourceName</code>.</p>
     */
    inline const PolicyEvaluationDecisionType& GetEvalResourceDecision() const{ return m_evalResourceDecision; }

    /**
     * <p>The result of the simulation of the simulated API action on the resource
     * specified in <code>EvalResourceName</code>.</p>
     */
    inline void SetEvalResourceDecision(const PolicyEvaluationDecisionType& value) { m_evalResourceDecisionHasBeenSet = true; m_evalResourceDecision = value; }

    /**
     * <p>The result of the simulation of the simulated API action on the resource
     * specified in <code>EvalResourceName</code>.</p>
     */
    inline void SetEvalResourceDecision(PolicyEvaluationDecisionType&& value) { m_evalResourceDecisionHasBeenSet = true; m_evalResourceDecision = value; }

    /**
     * <p>The result of the simulation of the simulated API action on the resource
     * specified in <code>EvalResourceName</code>.</p>
     */
    inline ResourceSpecificResult& WithEvalResourceDecision(const PolicyEvaluationDecisionType& value) { SetEvalResourceDecision(value); return *this;}

    /**
     * <p>The result of the simulation of the simulated API action on the resource
     * specified in <code>EvalResourceName</code>.</p>
     */
    inline ResourceSpecificResult& WithEvalResourceDecision(PolicyEvaluationDecisionType&& value) { SetEvalResourceDecision(value); return *this;}

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this part of the simulation. Remember that even if multiple statements allow the
     * action on the resource, if <i>any</i> statement denies that action, then the
     * explicit deny overrides any allow, and the deny statement is the only entry
     * included in the result.</p>
     */
    inline const Aws::Vector<Statement>& GetMatchedStatements() const{ return m_matchedStatements; }

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this part of the simulation. Remember that even if multiple statements allow the
     * action on the resource, if <i>any</i> statement denies that action, then the
     * explicit deny overrides any allow, and the deny statement is the only entry
     * included in the result.</p>
     */
    inline void SetMatchedStatements(const Aws::Vector<Statement>& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements = value; }

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this part of the simulation. Remember that even if multiple statements allow the
     * action on the resource, if <i>any</i> statement denies that action, then the
     * explicit deny overrides any allow, and the deny statement is the only entry
     * included in the result.</p>
     */
    inline void SetMatchedStatements(Aws::Vector<Statement>&& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements = value; }

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this part of the simulation. Remember that even if multiple statements allow the
     * action on the resource, if <i>any</i> statement denies that action, then the
     * explicit deny overrides any allow, and the deny statement is the only entry
     * included in the result.</p>
     */
    inline ResourceSpecificResult& WithMatchedStatements(const Aws::Vector<Statement>& value) { SetMatchedStatements(value); return *this;}

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this part of the simulation. Remember that even if multiple statements allow the
     * action on the resource, if <i>any</i> statement denies that action, then the
     * explicit deny overrides any allow, and the deny statement is the only entry
     * included in the result.</p>
     */
    inline ResourceSpecificResult& WithMatchedStatements(Aws::Vector<Statement>&& value) { SetMatchedStatements(value); return *this;}

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this part of the simulation. Remember that even if multiple statements allow the
     * action on the resource, if <i>any</i> statement denies that action, then the
     * explicit deny overrides any allow, and the deny statement is the only entry
     * included in the result.</p>
     */
    inline ResourceSpecificResult& AddMatchedStatements(const Statement& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements.push_back(value); return *this; }

    /**
     * <p>A list of the statements in the input policies that determine the result for
     * this part of the simulation. Remember that even if multiple statements allow the
     * action on the resource, if <i>any</i> statement denies that action, then the
     * explicit deny overrides any allow, and the deny statement is the only entry
     * included in the result.</p>
     */
    inline ResourceSpecificResult& AddMatchedStatements(Statement&& value) { m_matchedStatementsHasBeenSet = true; m_matchedStatements.push_back(value); return *this; }

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when a
     * list of ARNs is included in the <code>ResourceArns</code> parameter instead of
     * "*". If you do not specify individual resources, by setting
     * <code>ResourceArns</code> to "*" or by not including the
     * <code>ResourceArns</code> parameter, then any missing context values are instead
     * included under the <code>EvaluationResults</code> section. To discover the
     * context keys used by a set of policies, you can call
     * <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMissingContextValues() const{ return m_missingContextValues; }

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when a
     * list of ARNs is included in the <code>ResourceArns</code> parameter instead of
     * "*". If you do not specify individual resources, by setting
     * <code>ResourceArns</code> to "*" or by not including the
     * <code>ResourceArns</code> parameter, then any missing context values are instead
     * included under the <code>EvaluationResults</code> section. To discover the
     * context keys used by a set of policies, you can call
     * <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline void SetMissingContextValues(const Aws::Vector<Aws::String>& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues = value; }

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when a
     * list of ARNs is included in the <code>ResourceArns</code> parameter instead of
     * "*". If you do not specify individual resources, by setting
     * <code>ResourceArns</code> to "*" or by not including the
     * <code>ResourceArns</code> parameter, then any missing context values are instead
     * included under the <code>EvaluationResults</code> section. To discover the
     * context keys used by a set of policies, you can call
     * <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline void SetMissingContextValues(Aws::Vector<Aws::String>&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues = value; }

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when a
     * list of ARNs is included in the <code>ResourceArns</code> parameter instead of
     * "*". If you do not specify individual resources, by setting
     * <code>ResourceArns</code> to "*" or by not including the
     * <code>ResourceArns</code> parameter, then any missing context values are instead
     * included under the <code>EvaluationResults</code> section. To discover the
     * context keys used by a set of policies, you can call
     * <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline ResourceSpecificResult& WithMissingContextValues(const Aws::Vector<Aws::String>& value) { SetMissingContextValues(value); return *this;}

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when a
     * list of ARNs is included in the <code>ResourceArns</code> parameter instead of
     * "*". If you do not specify individual resources, by setting
     * <code>ResourceArns</code> to "*" or by not including the
     * <code>ResourceArns</code> parameter, then any missing context values are instead
     * included under the <code>EvaluationResults</code> section. To discover the
     * context keys used by a set of policies, you can call
     * <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline ResourceSpecificResult& WithMissingContextValues(Aws::Vector<Aws::String>&& value) { SetMissingContextValues(value); return *this;}

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when a
     * list of ARNs is included in the <code>ResourceArns</code> parameter instead of
     * "*". If you do not specify individual resources, by setting
     * <code>ResourceArns</code> to "*" or by not including the
     * <code>ResourceArns</code> parameter, then any missing context values are instead
     * included under the <code>EvaluationResults</code> section. To discover the
     * context keys used by a set of policies, you can call
     * <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline ResourceSpecificResult& AddMissingContextValues(const Aws::String& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.push_back(value); return *this; }

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when a
     * list of ARNs is included in the <code>ResourceArns</code> parameter instead of
     * "*". If you do not specify individual resources, by setting
     * <code>ResourceArns</code> to "*" or by not including the
     * <code>ResourceArns</code> parameter, then any missing context values are instead
     * included under the <code>EvaluationResults</code> section. To discover the
     * context keys used by a set of policies, you can call
     * <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline ResourceSpecificResult& AddMissingContextValues(Aws::String&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.push_back(value); return *this; }

    /**
     * <p>A list of context keys that are required by the included input policies but
     * that were not provided by one of the input parameters. This list is used when a
     * list of ARNs is included in the <code>ResourceArns</code> parameter instead of
     * "*". If you do not specify individual resources, by setting
     * <code>ResourceArns</code> to "*" or by not including the
     * <code>ResourceArns</code> parameter, then any missing context values are instead
     * included under the <code>EvaluationResults</code> section. To discover the
     * context keys used by a set of policies, you can call
     * <a>GetContextKeysForCustomPolicy</a> or
     * <a>GetContextKeysForPrincipalPolicy</a>.</p>
     */
    inline ResourceSpecificResult& AddMissingContextValues(const char* value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.push_back(value); return *this; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access.</p>
     */
    inline const Aws::Map<Aws::String, PolicyEvaluationDecisionType>& GetEvalDecisionDetails() const{ return m_evalDecisionDetails; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access.</p>
     */
    inline void SetEvalDecisionDetails(const Aws::Map<Aws::String, PolicyEvaluationDecisionType>& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails = value; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access.</p>
     */
    inline void SetEvalDecisionDetails(Aws::Map<Aws::String, PolicyEvaluationDecisionType>&& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails = value; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access.</p>
     */
    inline ResourceSpecificResult& WithEvalDecisionDetails(const Aws::Map<Aws::String, PolicyEvaluationDecisionType>& value) { SetEvalDecisionDetails(value); return *this;}

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access.</p>
     */
    inline ResourceSpecificResult& WithEvalDecisionDetails(Aws::Map<Aws::String, PolicyEvaluationDecisionType>&& value) { SetEvalDecisionDetails(value); return *this;}

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access.</p>
     */
    inline ResourceSpecificResult& AddEvalDecisionDetails(const Aws::String& key, const PolicyEvaluationDecisionType& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails[key] = value; return *this; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access.</p>
     */
    inline ResourceSpecificResult& AddEvalDecisionDetails(Aws::String&& key, const PolicyEvaluationDecisionType& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails[key] = value; return *this; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access.</p>
     */
    inline ResourceSpecificResult& AddEvalDecisionDetails(const Aws::String& key, PolicyEvaluationDecisionType&& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails[key] = value; return *this; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access.</p>
     */
    inline ResourceSpecificResult& AddEvalDecisionDetails(Aws::String&& key, PolicyEvaluationDecisionType&& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails[key] = value; return *this; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access.</p>
     */
    inline ResourceSpecificResult& AddEvalDecisionDetails(const char* key, PolicyEvaluationDecisionType&& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails[key] = value; return *this; }

    /**
     * <p>Additional details about the results of the evaluation decision. When there
     * are both IAM policies and resource policies, this parameter explains how each
     * set of policies contributes to the final evaluation decision. When simulating
     * cross-account access to a resource, both the resource-based policy and the
     * caller's IAM policy must grant access.</p>
     */
    inline ResourceSpecificResult& AddEvalDecisionDetails(const char* key, const PolicyEvaluationDecisionType& value) { m_evalDecisionDetailsHasBeenSet = true; m_evalDecisionDetails[key] = value; return *this; }

  private:
    Aws::String m_evalResourceName;
    bool m_evalResourceNameHasBeenSet;
    PolicyEvaluationDecisionType m_evalResourceDecision;
    bool m_evalResourceDecisionHasBeenSet;
    Aws::Vector<Statement> m_matchedStatements;
    bool m_matchedStatementsHasBeenSet;
    Aws::Vector<Aws::String> m_missingContextValues;
    bool m_missingContextValuesHasBeenSet;
    Aws::Map<Aws::String, PolicyEvaluationDecisionType> m_evalDecisionDetails;
    bool m_evalDecisionDetailsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
