/* ptr_50006c12 - 0x50006c12 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 ptr_50006c12(int param_1,undefined4 *param_2,ushort *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == (ushort *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
    *(int *)(param_3 + 4) = iVar1;
    *param_3 = -(ushort)(iVar1 != 0) & 0x4013;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x20);
    }
    uVar2 = 0;
  }
  return uVar2;
}


