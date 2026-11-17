/* FUN_0081af69 - 0x0081af69 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0081af69(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    local_c = param_1;
    if (*(int *)(param_1 + 0xb4) == 0) {
      local_8._1_3_ = (undefined3)(param_1 >> 8);
      local_8 = CONCAT31(local_8._1_3_,0x49);
    }
    else {
      local_8 = param_1;
      uVar1 = (*DAT_0097b6ec)(*(undefined4 *)(param_1 + 0xa4));
      iVar2 = (*DAT_0097b700)(uVar1);
      local_8 = 0;
      local_c = 0;
      if (iVar2 != 0) {
        (*DAT_0097b6fc)(uVar1,&local_8,&local_c);
      }
      (*DAT_0097b6e4)(*(undefined4 *)(param_1 + 0xa4),uVar1);
      if ((iVar2 == 0) || ((local_8 & 1) == 0)) {
        local_8 = CONCAT31(local_8._1_3_,0x41);
      }
      else {
        local_8 = CONCAT31(local_8._1_3_,(-((local_8 & 2) != 0) & 3U) + 0x48);
      }
    }
    (**(code **)(**(int **)(param_1 + 0x80) + 0x38))(local_8);
  }
  return;
}


