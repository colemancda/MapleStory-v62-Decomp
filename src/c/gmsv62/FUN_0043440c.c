/* FUN_0043440c - 0x0043440c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0043440c(undefined4 *param_1,undefined4 param_2)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_004355c6(param_2);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*param_1);
  return;
}


