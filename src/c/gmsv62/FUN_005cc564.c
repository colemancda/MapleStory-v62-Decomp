/* FUN_005cc564 - 0x005cc564 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_005cc564(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  uVar1 = FUN_007d1e08();
  iVar2 = *(int *)(extraout_ECX + 0xec);
  iVar8 = *(int *)(extraout_ECX + 0xf0);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  uVar9 = -(uint)(iVar2 != 0) & iVar2 - 0xcU;
  uVar7 = -(uint)(iVar8 != 0) & iVar8 - 0xcU;
  *(uint *)(unaff_EBP + -0x24) = uVar9;
  *(uint *)(unaff_EBP + -0x14) = uVar7;
  if (*(int *)(unaff_EBP + 8) < 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    uVar1 = FUN_005c6409(*(undefined4 *)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  }
  if (*(int *)(unaff_EBP + 8) < 0) goto LAB_005cc981;
  iVar2 = FUN_00413367(extraout_ECX + 0x340,*(undefined4 *)(extraout_ECX + 0x348));
  if ((((iVar2 < 0xc) || (0x14 < iVar2)) &&
      ((iVar2 = FUN_00413367(extraout_ECX + 0x340,*(undefined4 *)(extraout_ECX + 0x348)),
       iVar2 < 0x15 || (0x19 < iVar2)))) ||
     ((*(int *)(unaff_EBP + 8) < 6 || (8 < *(int *)(unaff_EBP + 8))))) {
    uVar1 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x348) = uVar1;
    FUN_00413367(extraout_ECX + 0x334,*(undefined4 *)(extraout_ECX + 0x33c));
    uVar1 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x33c) = uVar1;
    FUN_005c5f49();
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  if ((iVar2 < 0xc) || (0x14 < iVar2)) {
    if ((iVar2 < 6) || (8 < iVar2)) {
      if ((0x14 < iVar2) && (iVar2 < 0x1a)) {
        uVar1 = FUN_004b8c9b(*(int *)(extraout_ECX + 0x15c) + 0xc,
                             *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x14));
        *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
        iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
        puVar3 = (undefined4 *)
                 (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))(*(undefined4 *)(iVar2 + 4));
        uVar1 = FUN_007d3c48(*puVar3);
        FUN_007d4267(*(undefined4 *)(unaff_EBP + -0x20),*(int *)(unaff_EBP + 8) + -1,uVar1);
        uVar9 = *(uint *)(unaff_EBP + -0x24);
        *(undefined2 *)(unaff_EBP + 0x12) = *(undefined2 *)(unaff_EBP + -0x10);
      }
    }
    else {
      uVar1 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0x354) = uVar1;
    }
  }
  else {
    uVar1 = FUN_00413367(extraout_ECX + 0x340,*(undefined4 *)(extraout_ECX + 0x348));
    FUN_005cdf7c(uVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
  }
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(uVar7 + 0x240);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(uVar7 + 0x244);
  iVar2 = FUN_005ca1ff();
  if (iVar2 == 0) {
    if ((*(int *)(extraout_ECX + 0x274) == 0) ||
       (iVar2 = *(int *)(extraout_ECX + 0x160), iVar2 == 0)) {
      iVar2 = *(int *)(extraout_ECX + 0x15c);
    }
    uVar1 = FUN_00413367(iVar2 + 0x40,*(undefined4 *)(iVar2 + 0x48));
    FUN_005e4d3f(uVar1,uVar9);
    iVar2 = FUN_005ccbeb();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) - iVar2;
    piVar5 = *(int **)(unaff_EBP + -0x14);
    puVar3 = (undefined4 *)(uVar9 + 0x1e0);
    puVar10 = (undefined4 *)(unaff_EBP + -0x50);
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar2 = *piVar5;
    iVar8 = (int)*(short *)(unaff_EBP + -0x4e);
    uVar1 = FUN_004d19c1((int)*(short *)(unaff_EBP + -0x44));
    (**(code **)(iVar2 + 4))
              (1,iVar8,(int)*(short *)(unaff_EBP + -0x4c),(int)*(short *)(unaff_EBP + -0x4a),
               (int)*(short *)(unaff_EBP + -0x48),*(undefined1 *)(unaff_EBP + -0x46),uVar1);
    if ((5 < *(int *)(unaff_EBP + 8)) && (*(int *)(unaff_EBP + 8) < 9)) {
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + -0x1c);
      uVar1 = FUN_004133b5();
      iVar2 = *(int *)(unaff_EBP + -0x20);
      *(undefined4 *)(extraout_ECX + 0x354) = uVar1;
      if (iVar2 == 0) {
        FUN_00413367(extraout_ECX + 0x34c,uVar1);
        uVar1 = FUN_004133b5();
        *(undefined4 *)(extraout_ECX + 0x354) = uVar1;
      }
    }
    if (0x59 < *(int *)(unaff_EBP + -0x10)) {
      if ((*(int *)(unaff_EBP + 8) < 6) || (8 < *(int *)(unaff_EBP + 8))) {
        uVar1 = 0;
        uVar13 = 0;
        iVar2 = 0;
        uVar12 = 0;
        uVar11 = 0;
        iVar8 = 0;
      }
      else {
        iVar2 = *(int *)(unaff_EBP + 0x1c);
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        *(uint *)(unaff_EBP + -0x20) = (uint)(*(int *)(unaff_EBP + 0xc) == 0);
        switch(*(undefined4 *)(unaff_EBP + 0x18)) {
        case 2:
          iVar8 = 300;
          *(undefined4 *)(unaff_EBP + -0x1c) = 20000;
          break;
        case 3:
          iVar4 = FUN_005c5e27();
          *(int *)(unaff_EBP + -0x18) = iVar4 + 0x2d;
          iVar8 = FUN_0087a90a(iVar8 - iVar2);
          iVar8 = ((*(int *)(unaff_EBP + -0x18) <= iVar8) - 1 & 1000) - 1000;
          break;
        case 4:
          iVar8 = FUN_0087a90a(iVar8 - iVar2);
          iVar8 = ((99 < iVar8) - 1 & 0xfffffd44) + 1000;
          break;
        case 5:
          iVar8 = FUN_0087a90a(iVar8 - iVar2);
          iVar8 = ((99 < iVar8) - 1 & 0xfffffe70) + 700;
          break;
        case 6:
          *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + 0x24);
          iVar8 = 300;
          if (*(int *)(unaff_EBP + 0x24) != 0) {
            piVar5 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
            if (*piVar5 < iVar2) goto switchD_005cc84d_caseD_9;
            goto LAB_005cc93e;
          }
          piVar5 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
          if (iVar2 < *piVar5) goto switchD_005cc84d_caseD_9;
          goto LAB_005cc940;
        case 7:
          iVar8 = FUN_0087a90a(iVar8 - iVar2);
          iVar8 = ((99 < iVar8) - 1 & 400) - 700;
          break;
        case 8:
          FUN_0087a90a(iVar8 - iVar2);
          iVar8 = 700;
          break;
        case 9:
switchD_005cc84d_caseD_9:
          iVar8 = 0;
          break;
        default:
          iVar8 = 0x82;
          *(undefined4 *)(unaff_EBP + -0x1c) = 40000;
        }
        if (*(int *)(unaff_EBP + -0x20) != 0) {
LAB_005cc93e:
          iVar8 = -iVar8;
        }
LAB_005cc940:
        uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar13 = *(undefined4 *)(unaff_EBP + 0x20);
        uVar12 = *(undefined4 *)(unaff_EBP + 0x18);
        uVar11 = *(undefined4 *)(unaff_EBP + -0x1c);
      }
      FUN_007f744d(*(undefined4 *)(unaff_EBP + -0x10),iVar8,0,uVar11,uVar12,iVar2,uVar13,uVar1);
    }
    uVar7 = *(uint *)(unaff_EBP + -0x14);
  }
  uVar9 = *(uint *)(unaff_EBP + -0x28);
  if (uVar9 == 0) {
    uVar9 = -(uint)(DAT_00978358 != 0) & DAT_00978358 + 4U;
  }
  FUN_007f73d8(*(undefined4 *)(unaff_EBP + 0x14),uVar9,*(undefined4 *)(unaff_EBP + -0x2c));
LAB_005cc981:
  iVar2 = FUN_005c4cc4();
  iVar2 = iVar2 - *(int *)(unaff_EBP + -0x10);
  if (0x5a < iVar2) {
    FUN_007f744d(iVar2,0,0,0,0,0,0,0);
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(uint *)(unaff_EBP + 0x1c) = uVar7 + 0x19c;
  do {
    if ((*(int *)(extraout_ECX + 0x274) == 0) ||
       (iVar2 = *(int *)(extraout_ECX + 0x160), iVar2 == 0)) {
      iVar2 = *(int *)(extraout_ECX + 0x15c);
    }
    iVar2 = FUN_00413367(iVar2 + 0x40,*(undefined4 *)(iVar2 + 0x48));
    iVar2 = FUN_005e4404(iVar2 == 3);
    if (iVar2 != 0) break;
    FUN_007f17b3();
    *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + 1;
  } while (*(int *)(unaff_EBP + 0x18) < 0x37);
  iVar8 = FUN_00413367(extraout_ECX + 0x104,*(undefined4 *)(extraout_ECX + 0x10c));
  iVar2 = *(int *)(uVar7 + 0x240);
  *(uint *)(unaff_EBP + 0x24) = (uint)(iVar8 < 0);
  if ((iVar2 == 0) || ((iVar8 < 0 == 0 && (uVar9 = FUN_004133f0(), 0x45 < uVar9 % 100)))) {
    *(undefined4 *)(unaff_EBP + 0x18) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + 0x18) = 1;
  }
  cVar6 = (char)*(int *)(unaff_EBP + 8);
  if (*(int *)(unaff_EBP + 8) < 0) {
    *(char *)(unaff_EBP + 8) = cVar6;
  }
  else {
    *(byte *)(unaff_EBP + 8) = *(byte *)(unaff_EBP + 0xc) & 1 | cVar6 << 1;
  }
  FUN_0060142b(0x9d,0,0);
  uVar1 = *(undefined4 *)(extraout_ECX + 0x158);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_004b8c9b(extraout_ECX + 0x150,uVar1);
  FUN_00457d37(uVar1);
  iVar2 = FUN_0045f084(extraout_ECX + 0x110,*(undefined4 *)(extraout_ECX + 0x114));
  *(int *)(unaff_EBP + 0xc) = iVar2 + 1;
  uVar13 = FUN_004b8c34();
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0x114) = uVar13;
  FUN_0045d247(uVar1);
  FUN_00457cda(CONCAT31((int3)((uint)*(undefined4 *)(unaff_EBP + 0x24) >> 8),
                        (char)*(undefined4 *)(unaff_EBP + 0x24) << 4 | *(byte *)(unaff_EBP + 0x18)))
  ;
  FUN_00457cda(*(undefined4 *)(unaff_EBP + 8));
  FUN_00457d37(*(undefined4 *)(unaff_EBP + 0x10));
  iVar2 = *(int *)(uVar7 + 0x18);
  iVar8 = FUN_007f94b6();
  FUN_00457cda((iVar8 != 0) << 4 | iVar2 == 0);
  FUN_00457d37(*(undefined4 *)(uVar7 + 0x470));
  if ((*(int *)(extraout_ECX + 0x274) == 0) || (iVar2 = *(int *)(extraout_ECX + 0x160), iVar2 == 0))
  {
    iVar2 = *(int *)(extraout_ECX + 0x15c);
  }
  iVar2 = FUN_00413367(iVar2 + 0x40,*(undefined4 *)(iVar2 + 0x48));
  FUN_005e4469(unaff_EBP + -0x3c,iVar2 == 3,*(int *)(unaff_EBP + -0x24) + 0x19c);
  FUN_004751b2(unaff_EBP + -0x3c);
  iVar2 = FUN_00413367(extraout_ECX + 0x104,*(undefined4 *)(extraout_ECX + 0x10c));
  if (iVar2 != -2) {
    FUN_00413367(extraout_ECX + 0x104,*(undefined4 *)(extraout_ECX + 0x10c));
  }
  uVar1 = FUN_004133b5();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x10c) = uVar1;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


