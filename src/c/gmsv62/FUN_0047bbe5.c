/* FUN_0047bbe5 - 0x0047bbe5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047bbe5(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x98c);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar2 = FUN_0047c824(2,uVar2,0,0x80000000,0x7fffffff);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  FUN_00414ebb();
  FUN_0047d03c(*(undefined4 *)(unaff_EBP + -0x1c),1,unaff_EBP + -0xd);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (0 < *(int *)(unaff_EBP + -0x1c)) {
    do {
      puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x24,0x98d);
      uVar2 = *puVar1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00434e21(unaff_EBP + -0x20,uVar2,*(undefined4 *)(unaff_EBP + -0x14));
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x28) =
           *(int *)(*(int *)(unaff_EBP + -0x18) + 0x88) + *(int *)(unaff_EBP + -0x14) * 4;
      uVar2 = FUN_0047c824(2,*(undefined4 *)(unaff_EBP + -0x20),0,0x80000000,0x7fffffff);
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      **(undefined4 **)(unaff_EBP + -0x28) = uVar2;
    } while (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x1c));
  }
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0x98e);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar2 = FUN_0047c824(2,uVar2,0,0x80000000,0x7fffffff);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  FUN_00414ebb();
  FUN_0047d03c(*(undefined4 *)(unaff_EBP + -0x1c),1,unaff_EBP + -0xd);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (0 < *(int *)(unaff_EBP + -0x1c)) {
    do {
      puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0x98f);
      uVar2 = *puVar1;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00434e21(unaff_EBP + -0x20,uVar2,*(undefined4 *)(unaff_EBP + -0x14));
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x24) =
           *(int *)(*(int *)(unaff_EBP + -0x18) + 0x8c) + *(int *)(unaff_EBP + -0x14) * 4;
      uVar2 = FUN_0047c824(2,*(undefined4 *)(unaff_EBP + -0x20),0,0x80000000,0x7fffffff);
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      **(undefined4 **)(unaff_EBP + -0x24) = uVar2;
    } while (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


