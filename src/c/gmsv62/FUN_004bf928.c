/* FUN_004bf928 - 0x004bf928 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_004bf928(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_14 [4];
  int local_10;
  undefined1 local_c [4];
  int local_8;
  
  if (((DAT_00979178 == 0) && (iVar1 = FUN_004c2076(1), iVar1 != 0)) &&
     (*(int *)(param_1 + 0x10) == 1)) {
    iVar1 = FUN_00455c59(local_c);
    iVar1 = *(int *)(iVar1 + 4);
    if (local_8 != 0) {
      FUN_0045e7c2(0);
      local_8 = 0;
    }
    iVar2 = FUN_00458c4f(local_14,1,*(undefined4 *)(param_1 + 0x14));
    iVar2 = *(int *)(iVar2 + 4);
    if (local_10 != 0) {
      FUN_00449913(0);
    }
    if ((iVar2 != 0) && (iVar2 = FUN_006b1535(param_4,param_5), iVar2 != 0)) {
      uVar3 = FUN_0045e2eb();
      iVar1 = FUN_0044d79d(uVar3,iVar2,*(undefined1 *)(iVar1 + 0x11));
      if (iVar1 != 0) {
        uVar3 = FUN_004bfab4(*(undefined4 *)(param_1 + 0x14),iVar2);
        return uVar3;
      }
    }
  }
  return 0;
}


