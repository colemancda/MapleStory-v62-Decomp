/* FUN_004fa85a - 0x004fa85a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004fa85a(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (DAT_00978358 == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    uVar1 = *(undefined4 *)(extraout_ECX + 0x73c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004fae8e(uVar1,unaff_EBP + -0xd);
    iVar4 = *(int *)(extraout_ECX + 0x73c);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (0 < iVar4) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      do {
        puVar2 = (undefined4 *)FUN_004fae10(unaff_EBP + -0x20,*(undefined4 *)(unaff_EBP + -0x18));
        uVar1 = *puVar2;
        puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x14));
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puVar3 = (undefined4 *)FUN_005a83bd(unaff_EBP + -0x44,uVar1);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar2[2] = puVar3[2];
        puVar2[3] = puVar3[3];
        FUN_00414ebb();
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x10;
      } while (*(int *)(unaff_EBP + -0x18) < *(int *)(extraout_ECX + 0x73c));
    }
    iVar4 = FUN_007ac60d(unaff_EBP + -0x14,unaff_EBP + -0x24,0);
    if (-1 < iVar4) {
      FUN_0060142b(0xb4,0,0);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_0045d247(iVar4);
      FUN_0045d247(*(undefined4 *)(unaff_EBP + -0x24));
      FUN_004751b2(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0045ebca();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004f1a88();
    uVar1 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


