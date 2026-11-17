/* FUN_0049e3fa - 0x0049e3fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0049e3fa(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x3c) != 0) && (*(int *)(extraout_ECX + 0x4c) == 0)) {
    if (*(int *)(extraout_ECX + 0x18) == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar3 = FUN_00424ee1();
    iVar1 = *(int *)(extraout_ECX + 0x18);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar4 = FUN_00424f08();
    iVar1 = *(int *)(extraout_ECX + 0x88);
    iVar2 = *(int *)(unaff_EBP + -0x10);
    *(int *)(unaff_EBP + -0x18) =
         *(int *)(extraout_ECX + 0x8c) + *(int *)(extraout_ECX + 0x20) + -1 + iVar4;
    iVar4 = *(int *)(extraout_ECX + 0x90);
    if (iVar4 < 0) {
      iVar4 = *(int *)(extraout_ECX + 0x1c);
    }
    *(int *)(unaff_EBP + -0x10) = iVar4;
    *(int *)(unaff_EBP + -0x14) = *(int *)(extraout_ECX + 0x3c) * 0x10 + 1;
    iVar4 = FUN_004029b9(0x54);
    *(int *)(unaff_EBP + -0x1c) = iVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0049b04d(extraout_ECX,*(undefined4 *)(extraout_ECX + 0x60),
                           *(undefined4 *)(extraout_ECX + 0x3c),*(undefined4 *)(extraout_ECX + 0x80)
                           ,*(undefined4 *)(extraout_ECX + 0x84),
                           *(undefined4 *)(extraout_ECX + 0x98),*(undefined4 *)(extraout_ECX + 0xa8)
                          );
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0049e6e8(uVar3);
    (**(code **)(**(int **)(extraout_ECX + 0x4c) + 8))
              (*(undefined4 *)(extraout_ECX + 0x24),*(uint *)(extraout_ECX + 0x14) | 0xa0000000,
               iVar1 + iVar2,*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x10),
               *(undefined4 *)(unaff_EBP + -0x14),0);
    FUN_004b3b8f(0);
    FUN_004b3daf();
    FUN_00817f6e(-(uint)(*(int *)(extraout_ECX + 0x4c) != 0) & *(int *)(extraout_ECX + 0x4c) + 4U);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


