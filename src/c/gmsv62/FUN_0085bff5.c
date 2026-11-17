/* FUN_0085bff5 - 0x0085bff5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0085bff5(void)

{
  int *piVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int extraout_ECX;
  int iVar8;
  int unaff_EBP;
  undefined4 uVar9;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  
  FUN_00879bb8();
  iVar5 = *(int *)(unaff_EBP + 8);
  local_20 = 0x85c011;
  uVar2 = FUN_0042452b();
  switch(uVar2) {
  case 7:
  case 10:
  case 0x12:
    iStack_24 = 0x85c033;
    local_20 = iVar5;
    FUN_0085ca71();
    goto LAB_0085c2cb;
  case 8:
    local_20 = 1;
    iStack_28 = 0x85c2ac;
    iStack_24 = iVar5;
    FUN_0085cb93();
    goto LAB_0085c2cb;
  case 9:
    local_20 = 0x85c1f7;
    iVar6 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    local_20 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_24 = 0x85c217;
    local_20 = FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_24 = 0x85c224;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    local_20 = 0x85c230;
    FUN_00414ebb();
    iStack_24 = 0x85c23c;
    local_20 = iVar5;
    FUN_0085cb0e();
    local_20 = 0x110;
    iStack_24 = 0x85c24b;
    iVar5 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x1c) = iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      local_20 = 0x85c25d;
      iVar5 = FUN_004defeb();
    }
    iStack_28 = unaff_EBP + 8;
    *(int **)(unaff_EBP + -0x1c) = &iStack_24;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_2c = 0x85c277;
    local_20 = iVar6;
    FUN_00450368();
    iStack_28 = 0x85c27e;
    FUN_004e0fa1();
    iStack_24 = 0x85c286;
    local_20 = iVar5;
    FUN_008497ad();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    local_20 = 0x85c292;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_0085c326;
  case 0xb:
    *(undefined4 **)(unaff_EBP + 8) = &uStack_30;
    uVar9 = 0x2d8;
    break;
  case 0xc:
    *(undefined4 **)(unaff_EBP + 8) = &uStack_30;
    uVar9 = 0x2d9;
    break;
  case 0xd:
    *(undefined4 **)(unaff_EBP + 8) = &uStack_30;
    uVar9 = 0x2da;
    break;
  case 0xe:
    *(undefined4 **)(unaff_EBP + 8) = &uStack_30;
    uVar9 = 0x2dc;
    break;
  case 0xf:
    *(undefined4 **)(unaff_EBP + 8) = &uStack_30;
    uVar9 = 0x2db;
    break;
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x16:
    local_20 = 0x85c2e8;
    cVar4 = FUN_0042452b();
    if (cVar4 == '\0') {
      *(undefined4 **)(unaff_EBP + 8) = &uStack_30;
      uVar9 = 0x2d7;
      break;
    }
    local_20 = unaff_EBP + -0x10;
    iStack_24 = 0x85c2fc;
    FUN_0045cdbc();
    local_20 = 0;
    iStack_24 = 1;
    iStack_28 = 0;
    iStack_2c = 0;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_30;
    *(undefined4 *)(unaff_EBP + -4) = 7;
    FUN_00450368(unaff_EBP + -0x10);
    FUN_007db3ad();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0085c326:
    local_20 = 0x85c32b;
    FUN_00414ebb();
    goto switchD_0085c020_default;
  case 0x14:
    local_20 = 0x85c03f;
    local_20 = FUN_0042459a();
    iStack_24 = 0x85c04b;
    iVar5 = FUN_0085cc85();
    *(int *)(unaff_EBP + 8) = iVar5;
    if (iVar5 < 0) goto switchD_0085c020_default;
    local_20 = 0x85c05d;
    bVar3 = FUN_0042452b();
    local_20 = 0x85c068;
    iVar6 = FUN_0042459a();
    piVar1 = *(int **)(extraout_ECX + 0x2c74);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(piVar1[1] + *(int *)(unaff_EBP + 8) * 4);
    iVar8 = *(int *)(unaff_EBP + 8) * 0x16;
    iVar5 = *(int *)(iVar8 + 0x12 + *piVar1);
    *(int *)(unaff_EBP + -0x14) = iVar5;
    if ((iVar5 == iVar6) && (*(uint *)(unaff_EBP + -0x10) == (uint)bVar3))
    goto switchD_0085c020_default;
    iVar5 = *(int *)(unaff_EBP + 8);
    *(int *)(*piVar1 + 0x12 + iVar8) = iVar6;
    *(uint *)(*(int *)(*(int *)(extraout_ECX + 0x2c74) + 4) + iVar5 * 4) = (uint)bVar3;
    if ((*(int *)(unaff_EBP + -0x14) < 0) && (-1 < iVar6)) {
      iStack_24 = **(int **)(extraout_ECX + 0x2c74) + 4 + iVar8;
      local_20 = -1;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iStack_28 = 0x85c0d7;
      FUN_00414edd();
      iStack_24 = unaff_EBP + -0x14;
      *(int **)(unaff_EBP + -0x10) = &local_20;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      local_20 = 0;
      iStack_28 = 0x85c0eb;
      FUN_00414f8b();
      iStack_24 = 0x85c0f2;
      iVar5 = FUN_0085692b();
      if (iVar5 == 0) {
        local_20 = 0x110;
        iStack_24 = 0x85c105;
        iVar5 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x10) = iVar5;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (iVar5 == 0) {
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
        }
        else {
          local_20 = 0x85c117;
          uVar9 = FUN_004defeb();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar9;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        local_20 = 0;
        *(int **)(unaff_EBP + -0x1c) = &iStack_24;
        iStack_28 = 0xffffffff;
        iStack_2c = *(undefined4 *)(unaff_EBP + 8);
        uStack_30 = 0x85c13a;
        FUN_0085cdcf();
        uStack_30 = 0x85c141;
        iStack_2c = FUN_0085cf52();
        iStack_2c = iStack_2c + 4;
        uStack_30 = 0x85c14c;
        FUN_0045f0f3();
        iStack_28 = 0x85c154;
        FUN_004e1c6a();
        local_20 = *(int *)(unaff_EBP + -0x10);
        iStack_24 = 0x85c15e;
        FUN_008497ad();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_20 = 0x85c16a;
      FUN_00414ebb();
    }
    else if ((*(int *)(unaff_EBP + -0x14) != iVar6) && (iVar6 == *(int *)(extraout_ECX + 0x204c))) {
      local_20 = 0x110;
      iStack_24 = 0x85c188;
      iVar5 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x1c) = iVar5;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (iVar5 == 0) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      else {
        local_20 = 0x85c19d;
        uVar9 = FUN_004defeb();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar9;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_20 = 1;
      *(int **)(unaff_EBP + -0x1c) = &iStack_24;
      iStack_28 = 0xffffffff;
      iStack_2c = *(undefined4 *)(unaff_EBP + 8);
      uStack_30 = 0x85c1c1;
      FUN_0085cdcf();
      uStack_30 = 0x85c1c8;
      iStack_2c = FUN_0085cf52();
      iStack_2c = iStack_2c + 4;
      uStack_30 = 0x85c1d3;
      FUN_0045f0f3();
      iStack_28 = 0x85c1db;
      FUN_004e1c6a();
      local_20 = *(int *)(unaff_EBP + -0x14);
      iStack_24 = 0x85c1e5;
      FUN_008497ad();
    }
    goto LAB_0085c2cb;
  case 0x15:
    iVar5 = *(int *)(extraout_ECX + 0x2098);
    local_20 = 0x85c2bb;
    uVar7 = FUN_0042452b();
    *(uint *)(iVar5 + 0x473) = uVar7 & 0xff;
LAB_0085c2cb:
    if (DAT_0097bef4 != 0) {
      local_20 = 0x85c2dc;
      FUN_0077e45e();
    }
  default:
    goto switchD_0085c020_default;
  }
  local_20 = 0;
  iStack_24 = 1;
  iStack_28 = 0;
  iStack_2c = 0;
  FUN_00679d22(&uStack_30,uVar9);
  FUN_007db3ad();
switchD_0085c020_default:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


