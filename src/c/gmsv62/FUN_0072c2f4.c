/* FUN_0072c2f4 - 0x0072c2f4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0072c2f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0072c46f(param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar2 != iVar1) {
    if (iVar2 < 0) {
      if ((-1 < iVar1) && (*(char *)(*(int *)(param_1 + 0xa0) + 1 + iVar1 * 2) != '\x02')) {
        *(undefined1 *)(*(int *)(param_1 + 0xa0) + 1 + iVar1 * 2) = 0;
      }
      *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
      FUN_008161f1(0);
    }
    else {
      if ((-1 < iVar1) && (*(char *)(*(int *)(param_1 + 0xa0) + 1 + iVar1 * 2) != '\x02')) {
        *(undefined1 *)(*(int *)(param_1 + 0xa0) + 1 + iVar1 * 2) = 0;
      }
      if (*(char *)(*(int *)(param_1 + 0xa0) + 1 + iVar2 * 2) != '\x02') {
        *(undefined1 *)(*(int *)(param_1 + 0xa0) + 1 + iVar2 * 2) = 3;
      }
      FUN_008161f1(0);
      *(int *)(param_1 + 0x90) = iVar2;
    }
  }
  return 1;
}


