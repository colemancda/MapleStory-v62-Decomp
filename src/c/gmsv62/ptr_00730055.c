/* ptr_00730055 - 0x00730055 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00730055(void)

{
  undefined1 uVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  int *unaff_EDI;
  char *pcVar7;
  
  iVar5 = *(int *)(in_EAX + 4);
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  uVar1 = FUN_0045f03e(iVar5 + 0x33,*(undefined4 *)(iVar5 + 0x35));
  uVar2 = FUN_0066ba5e(uVar1);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((((0x3d < *(int *)(unaff_EBP + 8)) && (*(int *)(unaff_EBP + 8) < 0xac)) &&
      (0x97 < *(int *)(unaff_EBP + 0xc))) && (*(int *)(unaff_EBP + 0xc) < 0xa6)) {
    uVar3 = FUN_00413367(iVar5 + 0x91,*(undefined4 *)(iVar5 + 0x99));
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x78b);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00434e21(unaff_EBP + -0x10,uVar2,uVar3,*(undefined4 *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    pcVar7 = *(char **)(unaff_EBP + -0x10);
    if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
      iVar5 = (**(code **)(*unaff_EDI + 0x30))(pcVar7);
      iVar5 = iVar5 + 0x14 + *(int *)(unaff_EBP + 0xc);
      iVar6 = (**(code **)(*unaff_EDI + 0x2c))(iVar5);
      FUN_0074d755(iVar6 + 0x14 + *(int *)(unaff_EBP + 8),iVar5,pcVar7);
      goto LAB_0073014e;
    }
  }
  FUN_0075a834(unaff_EDI + 0x1a,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),0);
LAB_0073014e:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


