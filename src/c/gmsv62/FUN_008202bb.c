/* FUN_008202bb - 0x008202bb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_008202bb(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *piVar4;
  int unaff_EBP;
  int iVar5;
  int iStack_40;
  int iStack_3c;
  undefined *local_38;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  while ((iVar2 = *(int *)(extraout_ECX + 0x584), iVar2 != 0 &&
         (*(uint *)(unaff_EBP + -0x14) < *(uint *)(iVar2 + -4)))) {
    iVar5 = *(int *)(unaff_EBP + -0x1c) + iVar2;
    local_38 = (undefined *)
               (*(int *)(*(int *)(unaff_EBP + -0x1c) + iVar2) - (*(int *)(unaff_EBP + 8) + -0xd));
    iStack_3c = 0x82031f;
    uVar1 = FUN_0087a90a();
    iStack_3c = *(int *)(iVar5 + 4);
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar1;
    iStack_3c = iStack_3c - (*(int *)(unaff_EBP + 0xc) + -0x23);
    iStack_40 = 0x820333;
    uVar1 = FUN_0087a90a();
    iVar2 = *(int *)(extraout_ECX + 0x580);
    *(undefined4 *)(unaff_EBP + -0x30) = uVar1;
    if (*(int *)(iVar2 + *(int *)(iVar5 + 8) * 4) == 0) {
      local_38 = (undefined *)0x80004003;
      iStack_3c = 0x820354;
      FUN_00878dfb();
    }
    local_38 = (undefined *)0x82035b;
    iVar2 = FUN_0040e48b();
    if ((*(int *)(unaff_EBP + -0x2c) <= iVar2 / 3) && (*(int *)(unaff_EBP + -0x30) <= iVar2 / 3)) {
      if ((*(char **)(iVar5 + 0x10) == (char *)0x0) || (**(char **)(iVar5 + 0x10) == '\0')) {
        local_38 = (undefined *)(iVar5 + 0xc);
        iStack_3c = 0x8203cb;
        FUN_00414f8b();
      }
      else {
        local_38 = (undefined *)0x707;
        iStack_3c = unaff_EBP + -0x30;
        iStack_40 = 0x820398;
        piVar3 = (int *)FUN_00679d22();
        local_38 = *(undefined **)(iVar5 + 0x10);
        iStack_40 = *piVar3;
        iStack_3c = *(int *)(iVar5 + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00434e21(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        local_38 = (undefined *)0x8203bd;
        FUN_00414ebb();
      }
      local_38 = (undefined *)(iVar5 + 0x14);
      iStack_3c = 0x8203d7;
      FUN_00414f8b();
      piVar3 = *(int **)(iVar5 + 0x3c);
      goto LAB_008203da;
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x44;
  }
  goto LAB_0082047e;
LAB_008203da:
  if (piVar3 != (int *)0x0) {
    iVar2 = *(int *)((-(uint)(piVar3 != (int *)0x0) & (uint)(piVar3 + -4)) + 4);
    piVar4 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
    iVar2 = *piVar3;
    piVar3 = piVar4;
    if (*(int *)(*(int *)(extraout_ECX + 0x56c) + 8 + iVar2 * 0xc) == 0) {
      local_38 = (undefined *)(*(int *)(extraout_ECX + 0x56c) + iVar2 * 0xc + 4);
      iStack_3c = unaff_EBP + -0x30;
      iStack_40 = 0x820424;
      local_38 = (undefined *)FUN_0045e02d();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_3c = 0x820431;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      local_38 = (undefined *)0x82043d;
      FUN_00414ebb();
      if (piVar4 == (int *)0x0) goto LAB_00820470;
      local_38 = &DAT_0096c4a4;
      iStack_3c = unaff_EBP + -0x2c;
      iStack_40 = 0x820452;
      local_38 = (undefined *)FUN_004653c5();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_3c = 0x82045f;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      local_38 = (undefined *)0x82046b;
      FUN_00414ebb();
    }
    goto LAB_008203da;
  }
LAB_00820470:
  if (*(int *)(iVar5 + 0x28) != 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x14);
  }
LAB_0082047e:
  if (*(int *)(extraout_ECX + 0x574) != *(int *)(unaff_EBP + -0x14)) {
    *(undefined4 *)(extraout_ECX + 0x574) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -0x28) = 1;
  }
  if ((*(char **)(unaff_EBP + -0x18) == (char *)0x0) || (**(char **)(unaff_EBP + -0x18) == '\0')) {
    local_38 = (undefined *)0x82051c;
    FUN_0074d6fb();
  }
  else {
    iStack_3c = unaff_EBP + -0x10;
    *(undefined ***)(unaff_EBP + -0x30) = &local_38;
    local_38 = (undefined *)0x0;
    iStack_40 = 0x8204b8;
    FUN_00414f8b();
    iStack_40 = unaff_EBP + -0x20;
    *(int **)(unaff_EBP + -0x24) = &iStack_3c;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_3c = extraout_ECX_00;
    FUN_00450368();
    *(int **)(unaff_EBP + -0x1c) = &iStack_40;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_40 = extraout_ECX_01;
    FUN_00450368(unaff_EBP + -0x18);
    iVar2 = *(int *)(extraout_ECX + 4);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar2 = (**(code **)(iVar2 + 0x30))();
    iVar2 = iVar2 + 0x14 + *(int *)(unaff_EBP + 0xc);
    iVar5 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar2);
    FUN_0074dcf3(iVar5 + 0x14 + *(int *)(unaff_EBP + 8),iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  local_38 = (undefined *)0x820528;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  local_38 = (undefined *)0x820534;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_38 = (undefined *)0x820540;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_38 = (undefined *)0x82054c;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x28);
}


