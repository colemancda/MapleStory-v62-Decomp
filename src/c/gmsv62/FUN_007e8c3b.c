/* FUN_007e8c3b - 0x007e8c3b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_007e8c3b(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_007e7ed0();
  switch(*(undefined4 *)(extraout_ECX + 0x74)) {
  case 0:
    FUN_007ea296();
    break;
  case 1:
    FUN_007ea634();
    break;
  case 2:
  case 3:
    if (*(int *)(extraout_ECX + 0x9c) == 0) {
      FUN_007ea9a9();
    }
    else {
      FUN_007eaca3();
    }
    break;
  case 4:
    FUN_007eb54a();
    break;
  case 5:
    FUN_007eb736();
    break;
  case 6:
    FUN_007ebf6d();
    break;
  case 7:
    FUN_007eb36b();
    break;
  case 8:
    FUN_007eae99();
  }
  if (*(int *)(extraout_ECX + 0x8c) != 0) {
    *(int *)(unaff_EBP + -0x10) =
         (*(int *)(extraout_ECX + 0x80) - *(int *)(extraout_ECX + 0x84)) / 8;
    iVar2 = FUN_004029b9(0x74);
    *(int *)(unaff_EBP + -0x14) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004abf25();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0048b9e9(uVar3);
    iVar2 = *(int *)(extraout_ECX + 0x84);
    iVar1 = *(int *)(extraout_ECX + 0x7c);
    *(undefined4 *)(unaff_EBP + -0x14) = **(undefined4 **)(extraout_ECX + 0x634);
    iVar2 = FUN_007e6d32(iVar1 + 2,iVar2 + 3,0);
    (**(code **)(*(int *)(unaff_EBP + -0x14) + 0x20))
              (extraout_ECX,0x3e9,1,3,iVar2 + -3 + *(int *)(extraout_ECX + 0x78));
    FUN_004ad003((*(int *)(unaff_EBP + -0x10) < 1) + 1 + *(int *)(unaff_EBP + -0x10));
    iVar2 = *(int *)(extraout_ECX + 0x634);
    uVar3 = FUN_007e6d32();
    *(undefined4 *)(iVar2 + 0x34) = uVar3;
  }
  if (*(int *)(extraout_ECX + 0x9c) == 0) {
    FUN_007e8db4();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


