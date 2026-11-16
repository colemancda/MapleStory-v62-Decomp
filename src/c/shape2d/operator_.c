/* operator= - 0x51402bb9 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* Library Function - Single Match
    public: class _CIP<struct IBinding,&struct _GUID const IID_IBinding> & __thiscall _CIP<struct
   IBinding,&struct _GUID const IID_IBinding>::operator=(struct IBinding *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

_CIP<struct_IBinding,&struct__GUID_const_IID_IBinding> * __thiscall
_CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
          (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *this,IBinding *param_1)

{
  IBinding *pIVar1;
  
  pIVar1 = *(IBinding **)this;
  if (pIVar1 != param_1) {
    *(IBinding **)this = param_1;
    if (param_1 != (IBinding *)0x0) {
      (**(code **)(*(int *)param_1 + 4))(param_1);
    }
    if (pIVar1 != (IBinding *)0x0) {
      (**(code **)(*(int *)pIVar1 + 8))(pIVar1);
    }
  }
  return (_CIP<struct_IBinding,&struct__GUID_const_IID_IBinding> *)this;
}


