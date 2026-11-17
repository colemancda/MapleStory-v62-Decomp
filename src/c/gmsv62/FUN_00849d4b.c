/* FUN_00849d4b - 0x00849d4b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00849d4b(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar2;
  
  FUN_00879bb8();
  uVar2 = *(uint *)(extraout_ECX + 0x324c);
  while (uVar2 != 0) {
    iVar1 = *(int *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(uVar2 + 4);
    FUN_0070b234();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00815de9();
      FUN_00705df5();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00705df5();
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  }
  FUN_0083f0e0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


