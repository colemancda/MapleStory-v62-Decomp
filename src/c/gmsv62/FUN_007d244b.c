/* FUN_007d244b - 0x007d244b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007d244b(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  HRESULT HVar6;
  int *piVar7;
  undefined4 *puVar8;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  uVar3 = FUN_007d264c();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  FUN_00414edd(uVar3,0xffffffff);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = FUN_007d2606();
  if (iVar4 == 0) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_007d8254();
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    HVar6 = GetErrorInfo(0,(IErrorInfo **)(unaff_EBP + 0xc));
    if (HVar6 < 0) {
LAB_007d2514:
      piVar7 = *(int **)(unaff_EBP + 0xc);
    }
    else {
      piVar5 = *(int **)(unaff_EBP + 0xc);
      piVar7 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar5 + 0x14))(piVar5,unaff_EBP + -0x1c);
        if (-1 < iVar4) {
          FUN_00454081(*(undefined4 *)(unaff_EBP + -0x1c),0xffffffff);
          if (*(int *)(unaff_EBP + -0x1c) != 0) {
            (*DAT_0097b650)(*(int *)(unaff_EBP + -0x1c) + -4);
          }
        }
        goto LAB_007d2514;
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7);
    }
  }
  else {
    piVar5 = (int *)FUN_007d261b(unaff_EBP + 0xc);
    puVar8 = (undefined4 *)*piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (puVar8 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar8;
    }
    FUN_00454081(uVar3,0xffffffff);
    FUN_00402fa6();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if ((*(char **)(unaff_EBP + -0x10) == (char *)0x0) || (**(char **)(unaff_EBP + -0x10) == '\0')) {
    uVar3 = *(undefined4 *)(iVar1 + 4);
    puVar8 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0x869);
    uVar2 = *puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00434e21(unaff_EBP + -0x14,uVar2,uVar3,*(undefined4 *)(unaff_EBP + -0x18));
    *(undefined1 *)(unaff_EBP + -4) = 5;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 == -0x7fffbffb) {
      FUN_00414f8b(unaff_EBP + -0x10);
      goto LAB_007d25bf;
    }
    puVar8 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0x86a);
    uVar3 = *puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00434e21(unaff_EBP + -0x14,uVar3,iVar1,*(undefined4 *)(unaff_EBP + -0x18),
                 *(undefined4 *)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 5;
  }
  FUN_00414ebb();
LAB_007d25bf:
  puVar8 = *(undefined4 **)(unaff_EBP + 8);
  *puVar8 = 0;
  FUN_00414f8b(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar8;
}


