/* FUN_00781e1f - 0x00781e1f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00781e1f(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((DAT_0097bec4 & 1) == 0) {
    DAT_0097bec4 = DAT_0097bec4 | 1;
    DAT_0097bec0 = 0;
    FUN_00414edd();
    FUN_008796d0();
  }
  if ((DAT_0097bec4 & 2) == 0) {
    DAT_0097bec4 = DAT_0097bec4 | 2;
    DAT_0097bebc = 0;
    FUN_00414edd();
    FUN_008796d0();
  }
  if ((DAT_0097bec4 & 4) == 0) {
    DAT_0097bec4 = DAT_0097bec4 | 4;
    DAT_0097beb8 = (undefined *)0x0;
    FUN_00414edd();
    FUN_008796d0();
  }
  iVar6 = DAT_00978368;
  if (DAT_00978368 == 0) goto LAB_00782221;
  *(undefined4 *)(extraout_ECX + 0x62c) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x624) = 0;
  *(undefined4 *)(extraout_ECX + 0x628) = 0;
  *(undefined4 *)(extraout_ECX + 0x630) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00414edd();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_004538dc();
  if (-1 < iVar2) {
    FUN_0045e053();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar2 = FUN_004538dc();
    if (-1 < iVar2) {
      uVar3 = FUN_0087b6ab();
      *(undefined4 *)(extraout_ECX + 0x624) = uVar3;
    }
    iVar2 = FUN_004538dc();
    if (-1 < iVar2) {
      uVar3 = FUN_0087b6ab();
      *(undefined4 *)(extraout_ECX + 0x628) = uVar3;
    }
    iVar2 = FUN_004538dc();
    if (-1 < iVar2) {
      uVar3 = FUN_0087b6ab();
      *(undefined4 *)(extraout_ECX + 0x62c) = uVar3;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38();
    }
  }
  if (0 < *(int *)(extraout_ECX + 0x62c)) {
    FUN_004dee9b();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    *(undefined1 **)(unaff_EBP + 8) = &stack0xffffffc4;
    puVar4 = (undefined4 *)FUN_004dee9b(unaff_EBP + -0x1c);
    uVar3 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    (*DAT_0097b4c8)(0,0,uVar3,0xffffffff,*(undefined4 *)(unaff_EBP + 8),0x3fffffff);
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar6 + 0x2cac);
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar6 + 0x2048);
    piVar7 = (int *)(unaff_EBP + -0x24);
    bVar1 = (bool)FUN_00781e1c();
    lVar5 = WzSoap_GetArticleOwner
                      ((uchar)*(undefined4 *)(unaff_EBP + -0x18),*(int *)(unaff_EBP + -0x14),
                       *(ushort **)(unaff_EBP + 8),*(uchar *)(extraout_ECX + 0x628),
                       *(int *)(extraout_ECX + 0x62c),bVar1,piVar7);
    *(long *)(unaff_EBP + 8) = lVar5;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    if (-1 < *(int *)(unaff_EBP + 8)) {
      *(undefined4 *)(extraout_ECX + 0x630) = *(undefined4 *)(unaff_EBP + -0x24);
    }
  }
  if ((*(int *)(iVar6 + 0x2cac) == 0) || (**(int **)(iVar6 + 0x2cb8) != *(int *)(iVar6 + 0x2088))) {
    iVar6 = FUN_004ea83d();
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (iVar6 == 2) goto LAB_007820d6;
  }
  else {
LAB_007820d6:
    *(undefined4 *)(unaff_EBP + 8) = 1;
  }
  if (*(int *)(extraout_ECX + 0x624) == 1) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x604) + 4) + 0x1c))();
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x60c) + 4) + 0x1c))();
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x614) + 4) + 0x1c))();
LAB_007821ac:
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x61c) + 4) + 0x1c))();
  }
  else if (*(int *)(extraout_ECX + 0x624) == 2) {
    iVar6 = *(int *)(*(int *)(extraout_ECX + 0x604) + 4);
    *(int *)(unaff_EBP + -0x24) = *(int *)(extraout_ECX + 0x604) + 4;
    (**(code **)(iVar6 + 0x1c))();
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x60c) + 4) + 0x1c))();
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x614) + 4) + 0x1c))();
    goto LAB_007821ac;
  }
  if (*(int *)(extraout_ECX + 0x634) == 0) {
    FUN_00878dfb();
  }
  piVar7 = (int *)FUN_004113e5();
  iVar6 = *piVar7;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar6 == 0) {
    FUN_00878dfb();
  }
  iVar6 = (**(code **)(*(int *)*piVar7 + 0x40))();
  if (iVar6 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
LAB_00782221:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


