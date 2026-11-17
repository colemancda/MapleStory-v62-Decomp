/* ptr_007e8c89 - 0x007e8c89 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007e8c89(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int unaff_ESI;
  
  FUN_007eae99();
  if (*(int *)(unaff_ESI + 0x8c) != 0) {
    *(int *)(unaff_EBP + -0x10) = (*(int *)(unaff_ESI + 0x80) - *(int *)(unaff_ESI + 0x84)) / 8;
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
    iVar2 = *(int *)(unaff_ESI + 0x84);
    iVar1 = *(int *)(unaff_ESI + 0x7c);
    *(undefined4 *)(unaff_EBP + -0x14) = **(undefined4 **)(unaff_ESI + 0x634);
    FUN_007e6d32(iVar1 + 2,iVar2 + 3,0);
    (**(code **)(*(int *)(unaff_EBP + -0x14) + 0x20))();
    FUN_004ad003((*(int *)(unaff_EBP + -0x10) < 1) + 1 + *(int *)(unaff_EBP + -0x10));
    iVar2 = *(int *)(unaff_ESI + 0x634);
    uVar3 = FUN_007e6d32();
    *(undefined4 *)(iVar2 + 0x34) = uVar3;
  }
  if (*(int *)(unaff_ESI + 0x9c) == 0) {
    FUN_007e8db4();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


