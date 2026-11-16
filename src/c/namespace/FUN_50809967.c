/* FUN_50809967 - 0x50809967 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


short * __thiscall FUN_50809967(void *this,undefined2 *param_1,char param_2)

{
  int iVar1;
  short *unaff_retaddr;
  
  if (param_2 == '\0') {
    memcpy(this,param_1,0x10);
    *param_1 = 0;
  }
  else {
    Ordinal_8(this);
    iVar1 = FUN_50803aab(this,unaff_retaddr);
    if (iVar1 < 0) {
      FUN_5080dfed(iVar1);
    }
  }
  return this;
}


