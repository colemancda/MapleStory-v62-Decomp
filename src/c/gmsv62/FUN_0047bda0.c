/* FUN_0047bda0 - 0x0047bda0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047bda0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar4 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(extraout_ECX + 0x88);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + -4);
  }
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x98c);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0047c874(2,uVar2,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  for (uVar5 = 0;
      (*(int *)(extraout_ECX + 0x88) != 0 && (uVar5 < *(uint *)(*(int *)(extraout_ECX + 0x88) + -4))
      ); uVar5 = uVar5 + 1) {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x98d);
    uVar4 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x10,uVar4,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    FUN_0047c874(2,*(undefined4 *)(unaff_EBP + -0x10),
                 *(undefined4 *)(*(int *)(extraout_ECX + 0x88) + uVar5 * 4));
  }
  if (*(int *)(extraout_ECX + 0x8c) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(extraout_ECX + 0x8c) + -4);
  }
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x98e);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0047c874(2,uVar2,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  for (uVar5 = 0;
      (*(int *)(extraout_ECX + 0x8c) != 0 && (uVar5 < *(uint *)(*(int *)(extraout_ECX + 0x8c) + -4))
      ); uVar5 = uVar5 + 1) {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x98f);
    uVar4 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00434e21(unaff_EBP + -0x10,uVar4,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    FUN_0047c874(2,*(undefined4 *)(unaff_EBP + -0x10),
                 *(undefined4 *)(*(int *)(extraout_ECX + 0x8c) + uVar5 * 4));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


