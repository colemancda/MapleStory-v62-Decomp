/* FUN_50804f37 - 0x50804f37 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_50804f37(void *this,undefined4 param_1,ushort *param_2)

{
  int iVar1;
  
  if (param_2 == (ushort *)0x0) {
    param_2 = this;
  }
  if ((this != param_2) || ((short)param_1 != *(short *)this)) {
    iVar1 = FUN_50803865(this,param_2,0,param_1);
    if (iVar1 < 0) {
      FUN_5080dfed(iVar1);
    }
  }
  return;
}


