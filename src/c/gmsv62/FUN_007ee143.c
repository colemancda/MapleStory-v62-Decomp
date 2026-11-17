/* FUN_007ee143 - 0x007ee143 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ee143(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045e485();
  FUN_0045e4a2();
  *(undefined4 *)(extraout_ECX + 0x11c) = *(undefined4 *)(unaff_EBP + 0x10);
  if (DAT_00978368 == 0) {
    puVar3 = (undefined4 *)FUN_004029b9();
    *(undefined4 **)(unaff_EBP + -0x1c) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x11c);
      *puVar3 = &PTR_LAB_008e84a0;
      _memset(puVar3,0,0xc);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      *puVar3 = &PTR_FUN_008e8cd8;
      FUN_007ee324();
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_004029b9();
    *(undefined4 **)(unaff_EBP + -0x20) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(extraout_ECX + 0x11c);
      iVar4 = DAT_00978368 + 0x2d14;
      *(int *)(unaff_EBP + -0x14) = DAT_00978368 + 0x2e9c;
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *puVar3 = &PTR_LAB_008e84a0;
      _memset(puVar3,0,0xc);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uVar2 = *(undefined4 *)(unaff_EBP + -0x1c);
      *puVar3 = &PTR_FUN_008e8cd8;
      FUN_004b857d(uVar2);
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_007eea09();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x10c) + 0x15) = 0;
  *(undefined4 *)(*(int *)(extraout_ECX + 0x10c) + 0x45) = 0;
  *(undefined4 *)(*(int *)(extraout_ECX + 0x10c) + 0x109) = 0;
  *(undefined4 *)(extraout_ECX + 0xf0) = 1;
  FUN_0056a92f();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while( true ) {
    iVar4 = **(int **)(unaff_EBP + 8);
    if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= *(uint *)(unaff_EBP + -0x14))) break;
    iVar1 = *(int *)(extraout_ECX + 0xe4);
    iVar5 = *(uint *)(unaff_EBP + -0x14) * 4;
    uVar2 = *(undefined4 *)(iVar5 + iVar4);
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    *(undefined4 *)(iVar1 + iVar5) = uVar2;
  }
  iVar4 = *(int *)**(int **)(unaff_EBP + 8) / 10000;
  if (iVar4 == 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = (iVar4 != 3) + 1;
  }
  *(int *)(extraout_ECX + 0xe8) = iVar4;
  *(undefined4 *)(extraout_ECX + 0xec) = 0;
  iVar4 = *(int *)(extraout_ECX + 0x10c);
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffffd8;
  if (iVar4 != 0) {
    InterlockedIncrement((LONG *)(iVar4 + 4));
  }
  FUN_007ec3b7();
  FUN_007ee44b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_0045e7c2();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


