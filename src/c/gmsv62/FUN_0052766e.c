/* FUN_0052766e - 0x0052766e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0052766e(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (*(int *)(param_1 + 0x928) != 0)) {
    iVar2 = (*DAT_0097b704)();
    iVar1 = *(int *)(param_1 + 0x928);
    if (iVar1 < 0) {
      iVar4 = *(int *)(param_1 + 0x930);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x934);
    }
    if (iVar4 <= iVar2 - *(int *)(param_1 + 0x924)) {
      if (iVar1 < 0) {
        *(int *)(param_1 + 0x928) = -iVar1;
      }
      *(int *)(param_1 + 0x924) = iVar2;
      *param_2 = 0x100;
      param_2[1] = *(undefined4 *)(param_1 + 0x928);
      uVar5 = (uint)*(byte *)(param_1 + 0x824 + *(int *)(param_1 + 0x928));
      uVar3 = FUN_00527587();
      param_2[2] = uVar3 | ((uVar5 & 0x80) << 1 | uVar5 & 0xffffff7f) << 0x10;
      return 1;
    }
  }
  return 0;
}


