/* FUN_006d2b7b - 0x006d2b7b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d2b7b(void)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar6;
  int iStack_40;
  
  FUN_00879bb8();
  piVar6 = (int *)(extraout_ECX + 0xbc);
  *(undefined4 *)(unaff_EBP + -0x14) = 3;
  do {
    if (*piVar6 != 0) {
      iStack_40 = 0x6d2ba7;
      FUN_0043fd71();
    }
    piVar6 = piVar6 + 8;
    piVar1 = (int *)(unaff_EBP + -0x14);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  if (0 < *(int *)(extraout_ECX + 0x70)) {
    *(int *)(extraout_ECX + 0x70) = *(int *)(extraout_ECX + 0x70) + -0x1e;
    goto LAB_006d2da1;
  }
  if (*(int *)(extraout_ECX + 0xac) != 0) {
    if (*(int *)(extraout_ECX + 0x6c) == 0) {
LAB_006d2c9b:
      iStack_40 = unaff_EBP + -0x14;
      puVar3 = (undefined4 *)FUN_0045b90e();
      if (((char *)*puVar3 == (char *)0x0) || (*(char *)*puVar3 == '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      *(bool *)(unaff_EBP + -0xd) = !bVar2;
      iStack_40 = 0x6d2cc9;
      FUN_00414ebb();
      if (*(char *)(unaff_EBP + -0xd) == '\0') goto LAB_006d2d6a;
      iStack_40 = 0;
      FUN_0060142b(0x6e,0);
      iStack_40 = 6;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_00457cda();
      iStack_40 = -1;
      uVar4 = FUN_0045f0f3(&DAT_00965728);
      *(int **)(unaff_EBP + -0x1c) = &iStack_40;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_004e21db(uVar4);
      uVar4 = FUN_00485c13();
      FUN_004f1f89(&iStack_40,uVar4);
      FUN_00459cb5();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_40 = 0x6d2d33;
      FUN_00414ebb();
      iStack_40 = unaff_EBP + -0x3c;
      FUN_004751b2();
      *(undefined4 *)(extraout_ECX + 0x6c) = 1;
      iStack_40 = 1;
      (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xa4) + 4) + 0x1c))();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(extraout_ECX + 0x70) = 3000;
    }
    else {
      iStack_40 = unaff_EBP + -0x14;
      puVar3 = (undefined4 *)FUN_0045b90e();
      if (((char *)*puVar3 == (char *)0x0) || (*(char *)*puVar3 == '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      iStack_40 = 0x6d2bfa;
      FUN_00414ebb();
      if (!bVar2) {
        if (*(int *)(extraout_ECX + 0x6c) != 0) goto LAB_006d2d6a;
        goto LAB_006d2c9b;
      }
      iStack_40 = 0;
      FUN_0060142b(0x6e,0);
      iStack_40 = 6;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00457cda();
      iStack_40 = -1;
      uVar4 = FUN_0045f0f3(&DAT_00968204);
      *(int **)(unaff_EBP + -0x1c) = &iStack_40;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004e21db(uVar4);
      uVar4 = FUN_00485c13();
      FUN_004f1f89(&iStack_40,uVar4);
      FUN_00459cb5();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_40 = 0x6d2c5e;
      FUN_00414ebb();
      iStack_40 = unaff_EBP + -0x2c;
      FUN_004751b2();
      *(undefined4 *)(extraout_ECX + 0x6c) = 0;
      iStack_40 = 0;
      (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xa4) + 4) + 0x1c))();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(extraout_ECX + 0x70) = 3000;
    }
    iStack_40 = 0x6d2d6a;
    FUN_0045ebca();
  }
LAB_006d2d6a:
  if ((*(int *)(extraout_ECX + 100) == 2) && (0 < *(int *)(extraout_ECX + 0x74))) {
    iVar5 = *(int *)(extraout_ECX + 0x74) + -1;
    *(int *)(extraout_ECX + 0x74) = iVar5;
    if (0 < iVar5) {
      if (iVar5 != 0xf) goto LAB_006d2da1;
      goto LAB_006d2d99;
    }
    *(undefined4 *)(extraout_ECX + 0x74) = 0x1e;
    iStack_40 = 1;
  }
  else {
    iStack_40 = 0;
    FUN_006d2e81();
LAB_006d2d99:
    iStack_40 = 0;
  }
  FUN_006d2ddf();
LAB_006d2da1:
  iStack_40 = 0x6d2da8;
  FUN_008162ff();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


