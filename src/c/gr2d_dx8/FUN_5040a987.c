/* FUN_5040a987 - 0x5040a987 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


uint __thiscall FUN_5040a987(void *this,int param_1,void *param_2)

{
  int iVar1;
  void *local_8;
  
  local_8 = this;
  local_8 = (void *)FUN_5040a9f1();
  if (param_1 == 0) {
    return 2;
  }
  if (param_1 == 1) {
    iVar1 = FUN_5040c3cd((void *)((int)this + 0xa0),(ulong *)&local_8,(void *)0x0);
    if (iVar1 != 0) {
LAB_5040a9e0:
      FUN_50404f7d(param_2,iVar1);
      return 1;
    }
  }
  else {
    if ((int)local_8 < 0) {
      return (uint)local_8;
    }
    if (local_8 < *(void **)((int)this + 0xc0)) {
      iVar1 = FUN_5040c5b7((void *)((int)this + 0xb8),(uint)local_8);
      goto LAB_5040a9e0;
    }
  }
  return 0;
}


