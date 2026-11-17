/* FUN_007c0ccd - 0x007c0ccd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007c0ccd(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  uint uVar5;
  
  FUN_00879bb8();
  uVar5 = *(uint *)(extraout_ECX + 0x30);
  do {
    if (uVar5 == 0) {
      uVar3 = 0;
LAB_007c0d65:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar3;
    }
    iVar2 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
    uVar4 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    iVar2 = *(int *)(uVar5 + 4);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    iVar1 = 0;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
      iVar1 = *(int *)(unaff_EBP + -0x10);
    }
    uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xd7c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = (*DAT_0097b4bc)(*(undefined4 *)(unaff_EBP + 8),uVar3);
    if (iVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x10);
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_004f6e32(0);
      }
      goto LAB_007c0d65;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar5 = uVar4;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004f6e32(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
  } while( true );
}


