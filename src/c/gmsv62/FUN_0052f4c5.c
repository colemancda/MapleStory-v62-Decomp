/* FUN_0052f4c5 - 0x0052f4c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052f4c5(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  FUN_00879bb8();
  uStack_24 = 0x52f4df;
  iVar4 = FUN_0042459a();
  uStack_24 = 0x52f4e9;
  FUN_0052b7ca();
  if (0 < iVar4) {
    *(int *)(unaff_EBP + -0x14) = iVar4;
    do {
      uStack_24 = *(undefined4 *)(unaff_EBP + 8);
      iStack_28 = unaff_EBP + -0x20;
      iStack_2c = 0x52f4fe;
      FUN_0052db8e();
      uStack_24 = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_28 = 0x52f50d;
      uVar5 = FUN_0052fee3();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
      uStack_24 = 0x52f518;
      FUN_0052e131();
      uStack_24 = 0x52f520;
      FUN_0052e143();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4) = *(undefined4 *)(unaff_EBP + -0x1c);
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        uStack_24 = 0;
        iStack_28 = 0x52f53b;
        FUN_0048ba7b();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      piVar1 = (int *)(unaff_EBP + -0x14);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  uStack_24 = 0;
  iStack_28 = 0x52f553;
  (**(code **)(*(int *)(extraout_ECX + 0x99c) + 0x2c))();
  iStack_28 = 0x52f55b;
  iVar6 = FUN_0042459a();
  iVar2 = *(int *)(extraout_ECX + 0x1d74);
  *(int *)(unaff_EBP + -0x14) = iVar6;
  if ((iVar2 != 0) && (0 < iVar6)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_28 = 0x11b6;
    iStack_2c = unaff_EBP + -0x18;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uStack_30 = 0x52f587;
    puVar7 = (undefined4 *)FUN_00679d22();
    uStack_30 = *puVar7;
    iStack_2c = *(int *)(unaff_EBP + -0x14) + iVar4;
    iStack_34 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_38 = 0x52f59e;
    iStack_28 = iVar4;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_28 = 0x52f5ad;
    FUN_00414ebb();
    iStack_28 = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_34 = 0;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_38;
    FUN_00450368(unaff_EBP + -0x10);
    FUN_007db3ad();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x1d74) = 0;
    iStack_28 = 0x52f5da;
    FUN_00414ebb();
  }
  iStack_28 = 0x52f5e2;
  cVar3 = FUN_0042452b();
  if (cVar3 != '\0') {
    *(undefined4 *)(extraout_ECX + 0x18) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


