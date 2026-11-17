/* FUN_007c9119 - 0x007c9119 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007c9119(int param_1)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x1ea4);
  iVar1 = 5;
  do {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
    this = this + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


