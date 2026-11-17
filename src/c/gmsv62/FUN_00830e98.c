/* FUN_00830e98 - 0x00830e98 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00830e98(int param_1)

{
  int iVar1;
  
  FUN_008326d7();
  FUN_00684af9();
  *(undefined4 *)(param_1 + 0x3334) = 0;
  if (DAT_00978360 != 0) {
    FUN_0073e6de(0,0,5000);
  }
  FUN_0070e486();
  if ((*(int *)(param_1 + 0x2b40) != 0) && (DAT_0097beec == 0)) {
    iVar1 = FUN_0047ca6b();
    if (iVar1 != 0) {
      FUN_007823df();
    }
  }
  if (*(int *)(param_1 + 0x2c98) == 1) {
    *(undefined4 *)(param_1 + 0x2c98) = 0;
    iVar1 = *(int *)(param_1 + 0x2c94);
    if (0 < iVar1) {
      if (iVar1 < 3) {
        FUN_0083c608();
        FUN_0085aff6(*(undefined4 *)(param_1 + 0x2c84),*(undefined4 *)(param_1 + 0x2c88),
                     *(undefined4 *)(param_1 + 0x2c8c),*(undefined4 *)(param_1 + 0x2c90));
      }
      else if (iVar1 == 3) {
        FUN_0083c66d();
      }
    }
  }
  else {
    FUN_0083c94d();
  }
  return;
}


