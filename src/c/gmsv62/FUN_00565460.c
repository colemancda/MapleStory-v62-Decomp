/* FUN_00565460 - 0x00565460 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00565460(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(*(int *)(extraout_ECX + 0x15c) + *(int *)(DAT_00978368 + 0x2048) * 0x20 + 0x18) == 0)
  {
    if (*(int *)(*(int *)(extraout_ECX + 0x14c) * 0x280 + -0x280 + *(int *)(extraout_ECX + 0x164))
        == 0) {
      iVar1 = FUN_004029b9(0x5bc);
      *(int *)(unaff_EBP + -0x10) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar1 != 0) {
        FUN_00580cff(extraout_ECX);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00564909(0xffffffff);
    }
    else {
      FUN_0057a546(9,extraout_ECX + 0x1ac);
    }
  }
  else {
    FUN_0057a453(0x24,0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


