/* FUN_00730034 - 0x00730034 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00730034(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *extraout_ECX;
  int unaff_EBP;
  char *pcVar7;
  
  FUN_00879bb8();
  iVar2 = FUN_00455c59(unaff_EBP + -0x20);
  iVar2 = *(int *)(iVar2 + 4);
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  uVar1 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
  uVar3 = FUN_0066ba5e(uVar1);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((((0x3d < *(int *)(unaff_EBP + 8)) && (*(int *)(unaff_EBP + 8) < 0xac)) &&
      (0x97 < *(int *)(unaff_EBP + 0xc))) && (*(int *)(unaff_EBP + 0xc) < 0xa6)) {
    uVar4 = FUN_00413367(iVar2 + 0x91,*(undefined4 *)(iVar2 + 0x99));
    puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x78b);
    uVar3 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00434e21(unaff_EBP + -0x10,uVar3,uVar4,*(undefined4 *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    pcVar7 = *(char **)(unaff_EBP + -0x10);
    if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
      iVar2 = (**(code **)(*extraout_ECX + 0x30))(pcVar7);
      iVar2 = iVar2 + 0x14 + *(int *)(unaff_EBP + 0xc);
      iVar6 = (**(code **)(*extraout_ECX + 0x2c))(iVar2);
      FUN_0074d755(iVar6 + 0x14 + *(int *)(unaff_EBP + 8),iVar2,pcVar7);
      goto LAB_0073014e;
    }
  }
  FUN_0075a834(extraout_ECX + 0x1a,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),0
              );
LAB_0073014e:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


