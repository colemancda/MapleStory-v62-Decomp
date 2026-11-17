/* FUN_007f94b6 - 0x007f94b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_007f94b6(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  
  iVar6 = *(int *)(param_1 + 0x238);
  if ((iVar6 == 1) || (iVar6 == 2)) {
    uVar8 = *(uint *)(param_1 + 0x2cc);
    uVar7 = FUN_007f9b12();
    if ((*(int *)(param_1 + 0x2d0) != 0) && (uVar8 != uVar7)) {
      *(undefined4 *)(param_1 + 0x470) = 0x18;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x470) = 1;
    if (*(int *)(param_1 + 0x2d0) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x2d4) == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x27c) != uVar8 % 3 - 1) {
      return 1;
    }
    return 0;
  }
  if (iVar6 != 3) {
    return 0;
  }
  if (((*(int **)(param_1 + 0x14) == (int *)0x0) ||
      (iVar6 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))(), iVar6 == 0)) ||
     (*(int *)(param_1 + 0x14) == 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x14) + -4;
  }
  if (iVar6 != 0) {
    if (*(int *)(iVar6 + 0x204) != 0) {
      return 0;
    }
    if (*(int *)(iVar6 + 0x210) != 0) {
      return 0;
    }
    if (*(int *)(iVar6 + 0x280) != 0) {
      return 0;
    }
    if (*(int *)(iVar6 + 0x274) != 0) {
      return 0;
    }
    iVar6 = FUN_004cd670();
    if (iVar6 != 0) {
      return 0;
    }
  }
  iVar12 = DAT_00978138;
  uVar8 = *(uint *)(param_1 + 0x2a0);
  iVar6 = 0;
  if (*(int *)(DAT_00978138 + 0x38) != 0) {
    iVar6 = *(int *)(*(int *)(DAT_00978138 + 0x38) + -4);
  }
  if (iVar6 - 1U < uVar8) {
    *(undefined4 *)(param_1 + 0x470) = 2;
    return 1;
  }
  if (*(int *)(param_1 + 0x2a4) != 0) {
    uVar7 = FUN_007f9b12();
    iVar6 = *(int *)(iVar12 + 0x38);
    if ((iVar6 != 0) && (0 < *(int *)(iVar6 + -4))) {
      uVar9 = 0;
      if (iVar6 != 0) {
        uVar9 = *(uint *)(iVar6 + -4);
      }
      uVar7 = uVar7 % uVar9;
    }
    if (uVar8 != uVar7) {
      *(undefined4 *)(param_1 + 0x470) = 0x12;
      return 1;
    }
    if ((*(int *)(param_1 + 0x2a8) == 0) ||
       (*(int *)(param_1 + 0x27c) != *(int *)(*(int *)(iVar12 + 0x38) + uVar8 * 4))) {
      *(undefined4 *)(param_1 + 0x470) = 3;
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x464) != 0) {
    if (*(int *)(param_1 + 0x2d8) != *(int *)(param_1 + 0x2dc)) {
      *(undefined4 *)(param_1 + 0x470) = 4;
      return 1;
    }
    if (*(int *)(param_1 + 0x3dc) != *(int *)(param_1 + 0x3e0)) {
      *(undefined4 *)(param_1 + 0x470) = 5;
      return 1;
    }
    if (*(int *)(param_1 + 0x2d8) != 0) {
      if ((*(int *)(param_1 + 0x304) == 0) || (*(int *)(param_1 + 0x330) == 0)) {
        *(undefined4 *)(param_1 + 0x470) = 6;
        return 1;
      }
      uVar8 = FUN_007f9b12();
      uVar7 = FUN_007f9b12();
      if (*(uint *)(param_1 + 0x300) != uVar8 % 0xf0) {
        *(undefined4 *)(param_1 + 0x470) = 0x13;
        return 1;
      }
      if (*(uint *)(param_1 + 0x32c) != uVar7 % 0x50) {
        *(undefined4 *)(param_1 + 0x470) = 0x14;
        return 1;
      }
      if ((*(int *)(param_1 + 0x340) !=
           *(int *)(param_1 + 0x338) + -0x78 + *(uint *)(param_1 + 0x300)) ||
         (*(int *)(param_1 + 0x344) !=
          *(int *)(param_1 + 0x33c) + -0x28 + *(uint *)(param_1 + 0x32c))) {
        *(undefined4 *)(param_1 + 0x470) = 7;
        return 1;
      }
    }
    if (*(int *)(param_1 + 0x3dc) != 0) {
      if (((*(int *)(param_1 + 0x36c) == 0) || (*(int *)(param_1 + 0x398) == 0)) ||
         (*(int *)(param_1 + 0x3c4) == 0)) {
        *(undefined4 *)(param_1 + 0x470) = 8;
        return 1;
      }
      uVar8 = *(uint *)(param_1 + 0x394);
      piVar1 = (int *)(*(int *)(iVar12 + 0x3c) + *(int *)(param_1 + 0x27c) * 4);
      if (*(int *)(param_1 + 0x3cc) != *(int *)(*piVar1 + *(int *)(param_1 + 0x368) * 4)) {
        *(undefined4 *)(param_1 + 0x470) = 9;
        return 1;
      }
      uVar7 = FUN_007f9b12();
      iVar6 = *piVar1;
      if ((iVar6 != 0) && (uVar9 = *(uint *)(iVar6 + -4), uVar9 != 0)) {
        uVar7 = uVar7 % uVar9;
      }
      if (uVar7 != *(uint *)(param_1 + 0x368)) {
        *(undefined4 *)(param_1 + 0x470) = 0x15;
        return 1;
      }
      if (*(uint *)(param_1 + 0x3d0) != uVar8) {
        *(undefined4 *)(param_1 + 0x470) = 10;
        return 1;
      }
      FUN_004d19c1();
      iVar6 = __ftol();
      if ((*(int *)(param_1 + 0x3d4) != iVar6) ||
         (iVar6 = __ftol(), *(int *)(param_1 + 0x3d8) != iVar6)) {
        *(undefined4 *)(param_1 + 0x470) = 0xb;
        return 1;
      }
      uVar7 = FUN_007f9b12();
      uVar9 = __ftol();
      if (0 < (int)uVar9) {
        uVar7 = uVar7 % uVar9;
      }
      if (uVar7 != uVar8) {
        *(undefined4 *)(param_1 + 0x470) = 0x16;
        return 1;
      }
      uVar8 = FUN_007f9b12();
      if (*(uint *)(param_1 + 0x3c0) != uVar8 % 0x3c) {
        *(undefined4 *)(param_1 + 0x470) = 0x17;
        return 1;
      }
    }
  }
  if (*(int *)(param_1 + 0x468) == 0) goto LAB_007f9a9f;
  if (*(int *)(param_1 + 0x458) != 0) {
    *(undefined4 *)(param_1 + 0x470) = 0xc;
    return 1;
  }
  iVar2 = *(int *)(iVar12 + 0x24);
  iVar11 = *(int *)(iVar12 + 0x2c);
  bVar4 = false;
  bVar5 = false;
  iVar3 = *(int *)(iVar12 + 0x28);
  iVar12 = *(int *)(iVar12 + 0x30);
  iVar6 = param_1 + 0x3f0;
  fVar14 = (float10)FUN_004f1993(iVar6);
  iVar13 = iVar2;
  if ((float10)iVar2 <= fVar14) {
    iVar13 = iVar11 + -1;
    fVar14 = (float10)FUN_004f1993();
    if ((float10)iVar13 < fVar14) goto LAB_007f9914;
  }
  else {
LAB_007f9914:
    uVar10 = FUN_004f1a11((double)iVar13);
    bVar4 = true;
    *(undefined4 *)(param_1 + 0x400) = uVar10;
  }
  fVar14 = (float10)FUN_004f1993(param_1 + 0x408,*(undefined4 *)(param_1 + 0x418));
  iVar11 = iVar3;
  if ((float10)iVar3 <= fVar14) {
    iVar11 = iVar12 + -1;
    fVar14 = (float10)FUN_004f1993(param_1 + 0x408,*(undefined4 *)(param_1 + 0x418));
    if ((float10)iVar11 < fVar14) goto LAB_007f9979;
  }
  else {
LAB_007f9979:
    uVar10 = FUN_004f1a11((double)iVar11);
    *(undefined4 *)(param_1 + 0x418) = uVar10;
    bVar5 = true;
  }
  if (bVar4) {
    fVar14 = (float10)FUN_004f1993(iVar6,*(undefined4 *)(param_1 + 0x400));
    if (fVar14 == (float10)iVar2) {
      FUN_004f1993(iVar6,*(undefined4 *)(param_1 + 0x400));
    }
    else {
      FUN_004f1993(iVar6,*(undefined4 *)(param_1 + 0x400));
    }
    iVar12 = __ftol();
    *(int *)(param_1 + 0x45c) = iVar12;
    if (iVar12 != *(int *)(param_1 + 0x450)) {
      *(undefined4 *)(param_1 + 0x470) = 0xd;
      return 1;
    }
  }
  if (bVar5) {
    fVar14 = (float10)FUN_004f1993(param_1 + 0x408,*(undefined4 *)(param_1 + 0x418));
    if (fVar14 == (float10)iVar3) {
      FUN_004f1993(iVar6,*(undefined4 *)(param_1 + 0x400));
    }
    else {
      FUN_004f1993(param_1 + 0x408,*(undefined4 *)(param_1 + 0x418));
    }
    iVar6 = __ftol();
    *(int *)(param_1 + 0x460) = iVar6;
    if (iVar6 != *(int *)(param_1 + 0x454)) {
      *(undefined4 *)(param_1 + 0x470) = 0xe;
      return 1;
    }
  }
  if ((!bVar4) && (!bVar5)) {
    if ((*(int *)(param_1 + 0x3e4) != *(int *)(param_1 + 0x450)) &&
       (*(int *)(param_1 + 0x45c) != *(int *)(param_1 + 0x450))) {
      *(undefined4 *)(param_1 + 0x470) = 0xf;
      return 1;
    }
    if ((*(int *)(param_1 + 1000) != *(int *)(param_1 + 0x454)) &&
       (*(int *)(param_1 + 0x460) != *(int *)(param_1 + 0x454))) {
      *(undefined4 *)(param_1 + 0x470) = 0x10;
      return 1;
    }
  }
LAB_007f9a9f:
  if (*(int *)(param_1 + 0x46c) == 0) {
    *(undefined4 *)(param_1 + 0x470) = 0x11;
    return 1;
  }
  return 0;
}


