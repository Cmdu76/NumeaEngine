#ifndef NU_VERTEXARRAY_HPP
#define NU_VERTEXARRAY_HPP

#include "../Application/GLEWWrapper.hpp"

#include "VertexDeclaration.hpp"

namespace nu
{

class VertexArray
{
	public:
		VertexArray();
		VertexArray(VertexStruct vertexStruct);
		~VertexArray();

		void setStruct(VertexStruct vertexStruct);

		void bind();

		bool isValid() const;
		U32 getId() const;

		VertexStruct getStruct() const;

	private:
		VertexStruct mVertexStruct;
		U32 mIndex;
};

} // namespace nu

#endif // NU_VERTEXARRAY_HPP