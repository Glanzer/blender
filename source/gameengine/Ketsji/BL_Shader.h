
/** \file BL_Shader.h
 *  \ingroup ketsji
 */

#ifndef __BL_SHADER_H__
#define __BL_SHADER_H__

#include "RAS_Shader.h"

#include "EXP_Value.h"

class BL_Shader : public EXP_Value, public virtual RAS_Shader
{
	Py_Header

public:
	BL_Shader();
	virtual ~BL_Shader();

	virtual std::string GetName();
	virtual std::string GetText();

	// Python interface
#ifdef WITH_PYTHON

	static PyObject *pyattr_get_enabled(EXP_PyObjectPlus *self_v, const EXP_PYATTRIBUTE_DEF *attrdef);
	static int pyattr_set_enabled(EXP_PyObjectPlus *self_v, const EXP_PYATTRIBUTE_DEF *attrdef, PyObject *value);

	// -----------------------------------
	EXP_PYMETHOD_DOC(BL_Shader, setSource);
	EXP_PYMETHOD_DOC(BL_Shader, setSourceList);
	EXP_PYMETHOD_DOC(BL_Shader, delSource);
	EXP_PYMETHOD_DOC(BL_Shader, getVertexProg);
	EXP_PYMETHOD_DOC(BL_Shader, getFragmentProg);
	EXP_PYMETHOD_DOC(BL_Shader, setNumberOfPasses);
	EXP_PYMETHOD_DOC(BL_Shader, isValid);
	EXP_PYMETHOD_DOC(BL_Shader, validate);

	// -----------------------------------
	EXP_PYMETHOD_DOC(BL_Shader, setUniform4f);
	EXP_PYMETHOD_DOC(BL_Shader, setUniform3f);
	EXP_PYMETHOD_DOC(BL_Shader, setUniform2f);
	EXP_PYMETHOD_DOC(BL_Shader, setUniform1f);
	EXP_PYMETHOD_DOC(BL_Shader, setUniform4i);
	EXP_PYMETHOD_DOC(BL_Shader, setUniform3i);
	EXP_PYMETHOD_DOC(BL_Shader, setUniform2i);
	EXP_PYMETHOD_DOC(BL_Shader, setUniform1i);
	EXP_PYMETHOD_DOC(BL_Shader, setUniformEyef);
	EXP_PYMETHOD_DOC(BL_Shader, setUniformfv);
	EXP_PYMETHOD_DOC(BL_Shader, setUniformiv);
	EXP_PYMETHOD_DOC(BL_Shader, setUniformMatrix4);
	EXP_PYMETHOD_DOC(BL_Shader, setUniformMatrix3);
	EXP_PYMETHOD_DOC(BL_Shader, setUniformDef);
	EXP_PYMETHOD_DOC(BL_Shader, setSampler);
#endif
};

#endif /* __BL_SHADER_H__ */
