/* FUN_005a9ee3 - 0x005a9ee3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


_CIP<IBinding,&struct__GUID_const_IID_IBinding> * FUN_005a9ee3(undefined4 *param_1)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*param_1);
  return this;
}


