/* FUN_008331e1 - 0x008331e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_008331e1(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x3328);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -4) != 0)) {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + -4);
    }
    return *(undefined4 *)(*(int *)(param_1 + 0x3328) + -4 + iVar2 * 4);
  }
  return 0;
}


