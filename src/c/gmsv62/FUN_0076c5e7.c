/* FUN_0076c5e7 - 0x0076c5e7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0076c5e7(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar6;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  iVar3 = *(int *)(extraout_ECX + 0x3c);
  iVar1 = *(int *)(unaff_EBP + 0x10);
  iVar2 = *(int *)(*(int *)(iVar3 + 0x584) + 0x38) * 0x21 + -0x35 + iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(int *)(unaff_EBP + -0x14) = iVar2;
  iVar2 = (*DAT_0097b57c)(iVar3 + 0x788,*(int *)(unaff_EBP + 0xc) + -6,iVar2);
  if (iVar2 == 0) {
    iVar2 = (*DAT_0097b57c)(*(int *)(extraout_ECX + 0x3c) + 0x798,*(int *)(unaff_EBP + 0xc) + -6,
                            *(undefined4 *)(unaff_EBP + -0x14));
    if (iVar2 != 0) {
      uVar6 = 0x2b2;
LAB_0076c6b3:
      FUN_00679d22(*(undefined4 *)(unaff_EBP + 8),uVar6);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      goto LAB_0076c64e;
    }
    iVar2 = (*DAT_0097b57c)(*(int *)(extraout_ECX + 0x3c) + 0x7a8,*(int *)(unaff_EBP + 0xc) + -6,
                            iVar1 + -0x35);
    if (iVar2 != 0) {
      uVar6 = 0x2b3;
      goto LAB_0076c6b3;
    }
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    uVar6 = *(undefined4 *)(*(int *)(*(int *)(extraout_ECX + 0x3c) + 0x584) + 0x38);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uVar6 = FUN_0076bfb9(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0xc),iVar1,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414f8b(uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    if ((*(char **)(unaff_EBP + 0x10) != (char *)0x0) && (**(char **)(unaff_EBP + 0x10) != '\0')) {
      puVar5 = *(undefined4 **)(unaff_EBP + 8);
      *puVar5 = 0;
      FUN_00414f8b(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x70) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x70) + -0xc);
      }
      goto LAB_0076c845;
    }
    iVar2 = FUN_0076bf4c(*(undefined4 *)(unaff_EBP + 0xc),iVar1,
                         *(undefined4 *)(*(int *)(*(int *)(extraout_ECX + 0x3c) + 0x584) + 0x38),0,0
                        );
    iVar3 = FUN_0076c53a(iVar2,unaff_EBP + -0x74);
    if (((iVar2 == 0) || (*(int *)(unaff_EBP + -0x74) == 0)) || (iVar3 == 2)) {
      puVar5 = *(undefined4 **)(unaff_EBP + 8);
      *puVar5 = 0;
      FUN_00414edd(&DAT_00978474,0xffffffff);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x70) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x70) + -0xc);
      }
      goto LAB_0076c845;
    }
    if (iVar3 == 1) {
      puVar4 = (undefined1 *)FUN_004ec897(*(undefined4 *)(unaff_EBP + -0x6c));
      puVar5 = *(undefined4 **)(unaff_EBP + 8);
      *puVar5 = 0;
LAB_0076c7ea:
      FUN_00414edd(puVar4,0xffffffff);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      goto LAB_0076c845;
    }
    if (*(int *)(unaff_EBP + -0x68) == 0) {
      puVar5 = *(undefined4 **)(unaff_EBP + 8);
      *puVar5 = 0;
      puVar4 = &DAT_00978474;
      goto LAB_0076c7ea;
    }
    FUN_00679d22(*(undefined4 *)(unaff_EBP + 8),0x2d6);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  else {
    FUN_00679d22(*(undefined4 *)(unaff_EBP + 8),0x2b1);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
LAB_0076c64e:
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x70) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x70) + -0xc);
    }
  }
  puVar5 = *(undefined4 **)(unaff_EBP + 8);
LAB_0076c845:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar5;
}


