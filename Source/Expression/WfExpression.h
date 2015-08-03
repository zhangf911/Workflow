/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
Parser::WfExpression

Interfaces:
***********************************************************************/

#ifndef VCZH_WORKFLOW_EXPRESSION_WFEXPRESSION
#define VCZH_WORKFLOW_EXPRESSION_WFEXPRESSION

#include "WfExpressionParser.h"

namespace vl
{
	namespace workflow
	{
		/// <summary>Print a Workflow type.</summary>
		/// <param name="node">The Workflow type.</param>
		/// <param name="indent">The indentation.</param>
		/// <param name="writer">The target writer.</param>
		extern void			WfPrint(Ptr<WfType> node, const WString& indent, parsing::ParsingWriter& writer);
		/// <summary>Print a Workflow expression.</summary>
		/// <param name="node">The Workflow expression.</param>
		/// <param name="indent">The indentation.</param>
		/// <param name="writer">The target writer.</param>
		extern void			WfPrint(Ptr<WfExpression> node, const WString& indent, parsing::ParsingWriter& writer);
		/// <summary>Print a Workflow statement.</summary>
		/// <param name="node">The Workflow statement.</param>
		/// <param name="indent">The indentation.</param>
		/// <param name="writer">The target writer.</param>
		extern void			WfPrint(Ptr<WfStatement> node, const WString& indent, parsing::ParsingWriter& writer);
		/// <summary>Print a Workflow declaration.</summary>
		/// <param name="node">The Workflow declaration.</param>
		/// <param name="indent">The indentation.</param>
		/// <param name="writer">The target writer.</param>
		extern void			WfPrint(Ptr<WfDeclaration> node, const WString& indent, parsing::ParsingWriter& writer);
		/// <summary>Print a Workflow module.</summary>
		/// <param name="node">The Workflow module.</param>
		/// <param name="indent">The indentation.</param>
		/// <param name="writer">The target writer.</param>
		extern void			WfPrint(Ptr<WfModule> node, const WString& indent, parsing::ParsingWriter& writer);
		
		/// <summary>Print a Workflow type.</summary>
		/// <param name="node">The Workflow type.</param>
		/// <param name="indent">The indentation.</param>
		/// <param name="writer">The target writer.</param>
		extern void			WfPrint(Ptr<WfType> node, const WString& indent, stream::TextWriter& writer);
		/// <summary>Print a Workflow expression.</summary>
		/// <param name="node">The Workflow expression.</param>
		/// <param name="indent">The indentation.</param>
		/// <param name="writer">The target writer.</param>
		extern void			WfPrint(Ptr<WfExpression> node, const WString& indent, stream::TextWriter& writer);
		/// <summary>Print a Workflow statement.</summary>
		/// <param name="node">The Workflow statement.</param>
		/// <param name="indent">The indentation.</param>
		/// <param name="writer">The target writer.</param>
		extern void			WfPrint(Ptr<WfStatement> node, const WString& indent, stream::TextWriter& writer);
		/// <summary>Print a Workflow declaration.</summary>
		/// <param name="node">The Workflow declaration.</param>
		/// <param name="indent">The indentation.</param>
		/// <param name="writer">The target writer.</param>
		extern void			WfPrint(Ptr<WfDeclaration> node, const WString& indent, stream::TextWriter& writer);
		/// <summary>Print a Workflow module.</summary>
		/// <param name="node">The Workflow module.</param>
		/// <param name="indent">The indentation.</param>
		/// <param name="writer">The target writer.</param>
		extern void			WfPrint(Ptr<WfModule> node, const WString& indent, stream::TextWriter& writer);
	}
}
#endif