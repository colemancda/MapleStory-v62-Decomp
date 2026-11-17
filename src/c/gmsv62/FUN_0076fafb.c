/* FUN_0076fafb - 0x0076fafb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0076fafb(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x24);
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 0xc) + -6;
  iVar1 = *(int *)(*(int *)(iVar2 + 0x584) + 0x38) * 0x21 + -0x35 + *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(int *)(unaff_EBP + -0x14) = iVar1;
  iVar1 = (*DAT_0097b57c)(iVar2 + 0x788,*(undefined4 *)(unaff_EBP + -0x18),iVar1);
  if (iVar1 == 0) {
    iVar1 = (*DAT_0097b57c)(*(int *)(extraout_ECX + 0x24) + 0x798,*(undefined4 *)(unaff_EBP + -0x18)
                            ,*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar1 != 0) {
      FUN_00679d22(*(undefined4 *)(unaff_EBP + 8),0x2ba);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      goto LAB_0076fb6a;
    }
    iVar1 = FUN_0076f974(*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
                         *(undefined4 *)(*(int *)(*(int *)(extraout_ECX + 0x24) + 0x584) + 0x38));
    if (iVar1 == 0) {
      puVar4 = *(undefined4 **)(unaff_EBP + 8);
      *puVar4 = 0;
      FUN_00414edd(&DAT_00978474,0xffffffff);
LAB_0076fbda:
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
LAB_0076fca3:
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0076d16f();
      goto LAB_0076fd16;
    }
    iVar1 = FUN_0076fa45(iVar1,unaff_EBP + -0x68);
    if ((*(int *)(unaff_EBP + -0x1c) != 0) &&
       (iVar2 = (*DAT_0097b57c)(unaff_EBP + -0x2c,*(undefined4 *)(unaff_EBP + -0x18),
                                *(undefined4 *)(unaff_EBP + -0x14)), iVar2 != 0)) {
      puVar4 = *(undefined4 **)(unaff_EBP + 8);
      *puVar4 = 0;
      FUN_00414f8b(unaff_EBP + -0x5c);
      goto LAB_0076fbda;
    }
    if ((iVar1 != 2) ||
       (iVar1 = (*DAT_0097b57c)(unaff_EBP + -0x3c,*(undefined4 *)(unaff_EBP + -0x18),
                                *(undefined4 *)(unaff_EBP + -0x14)), iVar1 == 0)) {
      puVar4 = *(undefined4 **)(unaff_EBP + 8);
      *puVar4 = 0;
      FUN_00414edd(&DAT_00978474,0xffffffff);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      goto LAB_0076fd16;
    }
    if (*(int *)(unaff_EBP + -0x54) != *(int *)(DAT_00978368 + 0x204c)) {
      if (*(int *)(unaff_EBP + -0x54) < 0) {
        puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + 0x10,0x2d6);
        *(undefined4 *)(unaff_EBP + -0x10) = 2;
        uVar3 = *puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 2;
      }
      else {
        uVar3 = FUN_004ec897(*(undefined4 *)(unaff_EBP + -0x54));
      }
      puVar4 = *(undefined4 **)(unaff_EBP + 8);
      *puVar4 = 0;
      FUN_00414edd(uVar3,0xffffffff);
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
        FUN_00414ebb();
      }
      goto LAB_0076fca3;
    }
    FUN_00679d22(*(undefined4 *)(unaff_EBP + 8),0x2bd);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  else {
    FUN_00679d22(*(undefined4 *)(unaff_EBP + 8),0x2ba);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
LAB_0076fb6a:
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0076d16f();
  }
  puVar4 = *(undefined4 **)(unaff_EBP + 8);
LAB_0076fd16:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar4;
}


