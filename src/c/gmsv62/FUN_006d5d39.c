/* FUN_006d5d39 - 0x006d5d39 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d5d39(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined *puStack_30;
  
  FUN_00879bb8();
  puStack_30 = (undefined *)0x6d5d5a;
  FUN_0045b90e();
  pcVar1 = *(char **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) || (*(int *)(extraout_ECX + 0x118) < 0)) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (pcVar1 != (char *)0x0) {
      puStack_30 = (undefined *)0x6d5ef8;
      FUN_00434e38();
    }
    goto LAB_006d5ef9;
  }
  puStack_30 = (undefined *)0x6d5d8a;
  FUN_004a2fef();
  if (**(char **)(unaff_EBP + -0x10) == '/') {
    puStack_30 = (undefined *)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd4;
    FUN_00414f8b();
    puStack_30 = (undefined *)0x6d5daa;
    iVar2 = FUN_006d5ae3();
    if (iVar2 == 0) goto LAB_006d5ea4;
  }
  else {
    *(undefined4 *)(extraout_ECX + 0x6c) = 0;
    puStack_30 = (undefined *)0x6d5dc9;
    iVar2 = FUN_00470f0f();
    if (iVar2 != 0) {
      if (*(int *)(DAT_00978368 + 0x2098) == 0) {
        puStack_30 = (undefined *)0x0;
      }
      else {
        puStack_30 = (undefined *)(*(int *)(DAT_00978368 + 0x2098) + 4);
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      FUN_00414edd();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puStack_30 = (undefined *)0x6d5e04;
      _strlen(&DAT_00964da4);
      puStack_30 = &DAT_00964da4;
      FUN_0045efbb();
      puStack_30 = *(undefined **)(unaff_EBP + -0x10);
      FUN_0045efbb();
      *(undefined ***)(unaff_EBP + -0x18) = &puStack_30;
      uVar4 = 0xffffffff;
      uVar3 = FUN_00449713(0xffffffff);
      FUN_004dbb20(uVar3,uVar4);
      FUN_006d2ea2();
      puStack_30 = (undefined *)0x0;
      FUN_0060142b(0x6e);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_30 = (undefined *)0x6d5e65;
      FUN_00457cda();
      puStack_30 = (undefined *)(unaff_EBP + -0x14);
      *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffffd4;
      FUN_00414f8b();
      puStack_30 = (undefined *)0x6d5e7e;
      FUN_00459cb5();
      puStack_30 = (undefined *)0x6d5e8d;
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0045ebca();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
LAB_006d5ea4:
    if (*(int *)(extraout_ECX + 0xac) != 0) {
      puStack_30 = (undefined *)0x6d5ec5;
      FUN_00817f6e();
    }
    if (*(int *)(extraout_ECX + 0xa4) != 0) {
      puStack_30 = (undefined *)0x6d5ed9;
      (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xa4) + 4) + 0x1c))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
LAB_006d5ef9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


