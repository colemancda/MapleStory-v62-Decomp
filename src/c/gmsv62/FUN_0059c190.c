/* FUN_0059c190 - 0x0059c190 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_0059c190(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = (*DAT_0097b3ac)();
    if (*(int *)(param_1 + 4) == iVar1) {
      bVar2 = false;
    }
    else {
      iVar1 = (*DAT_0097b3e4)(*(undefined4 *)(param_1 + 8),param_2);
      if (iVar1 != 0) {
        (*DAT_0097b5d4)(0x20);
      }
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}


